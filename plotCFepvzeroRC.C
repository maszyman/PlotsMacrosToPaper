Double_t calculateNormalizationFactor(TH1D *num,TH1D *den, Double_t qlo=0.3,Double_t qhi=0.4)
{
  Double_t binlo = num->GetXaxis()->FindFixBin(qlo);
  Double_t binhi = num->GetXaxis()->FindFixBin(qhi);
  Double_t integralNum = num->Integral(binlo, binhi);
  Double_t integralDen = den->Integral(binlo, binhi);
  return integralDen / integralNum;
}

void plotCFepvzeroRC(const char* sys="PP", const char* kT="kT1", const char* proj="Out", int mult=2, TString dir = "../train_results_central_dcaptdep", int period=11) {

  // int mult = 5;
  int seppsi = 0;

  int psibins = 0;

  if (mult<2)
    const char* centrality = "central";
  else
    const char* centrality = "semicentral";

  if (period == 11) {
    // const int Nruns = 67;
    // int runs[Nruns] = {
    //   167915, 168115, 168460, 169035, 169238, 169859, 170228 , 167920, 168310, 168464, 169091, 169411, 169923, 170230, 167985, 168311, 169094, 169415, 170027, 170268, 167987, 168322, 168511, 169138, 169417, 170081, 170269, 167988, 168325, 168512, 169144, 169835, 170155, 170270, 168069, 168341, 168514, 169145, 169837, 170159, 170306, 168076, 168342, 168777, 169148, 169838, 170163, 170308, 168105, 168361, 168826, 169156, 169846, 170193, 170309, 168107, 168362, 168988, 169160, 169855, 170203, 168108 , 168458, 168992, 169167, 169858, 170204  };
    const int Nruns = 66;
    int runs[Nruns] = {
      167915, 168115, 168460, 169035, 169238, 169859, 170228 , 167920, 168310, 168464, 169091, 169411, 169923, 170230, 167985, 168311, 169094, 169415, 170027, 170268, 167987, 168322, 168511, 169138, 169417, 170081, 170269, 167988, 168325, 168512, 169144, 169835, 170155, // 170270,
      168069, 168341, 168514, 169145, 169837, 170159, 170306, 168076, 168342, 168777, 169148, 169838, 170163, 170308, 168105, 168361, 168826, 169156, 169846, 170193, 170309, 168107, 168362, 168988, 169160, 169855, 170203, 168108 , 168458, 168992, 169167, 169858, 170204  };

  }
  else if (period == 10) {
    const int Nruns = 89;
    int runs[Nruns] = {
      139510, 139507, 139505, 139503, 139465, 139438, 139437, 139360, 139329, 139328, 139314, 139310, 139309, 139173, 139107, 139105, 139038, 139037, 139036, 139029, 139028, 138872, 138871, 138870, 138837, 138732, 138730, 138666, 138662, 138653, 138652, 138638, 138624, 138621, 138583, 138582, 138579, 138578, 138534, 138469, 138442, 138439, 138438, 138396, 138364, 138275, 138225, 138201, 138197, 138192, 138190, 137848, 137844, 137752, 137751, 137724, 137722, 137718, 137704, 137693, 137692, 137691, 137686, 137685, 137639, 137638, 137608, 137595, 137549, 137544, 137541, 137539, 137443, 137441, 137440, 137439, 137434, 137432, 137431, 137430, 137366, 137243, 137236, 137235, 137232, 137231, 137230, 137162, 137161};
  }


  TFile* ifile_[Nruns+1];

  for (int jf = 0 ; jf < Nruns; ++jf ) {
    ifile_[jf] = new TFile(Form("%s/%d.mergedbinsdir.root",dir.Data(),runs[jf]), "read");
  }
  ifile_[Nruns] = new TFile(Form("%s/allrunsmergedbins.root",dir.Data()), "read");


  TH1D* numpp[7][3][Nruns+1];
  TH1D* denpp[7][3][Nruns+1];

  TH1D* numpapoutp[7][3];
  TH1D* numpapoutn[7][3];
  TH1D* numpaplongp[7][3];
  TH1D* numpaplongn[7][3];
  TH1D* numpapsidep[7][3];
  TH1D* numpapsiden[7][3];

  TH1D* denpapoutp[7][3];
  TH1D* denpapoutn[7][3];
  TH1D* denpaplongp[7][3];
  TH1D* denpaplongn[7][3];
  TH1D* denpapsidep[7][3];
  TH1D* denpapsiden[7][3];

  TH1D* numsum;
  TH1D* densum;

	TCanvas *myCan = new TCanvas("asd","asd");
	myCan->Draw();
	myCan->cd();

	TPad *myPad = new TPad("myPad", "The pad",0,0,1,1);
	myPadSetUp(myPad,0.15,0.04,0.04,0.15);
	myPad->Draw();
	myPad->cd();




// kazdy licznik i mianownik z innego run'u

  for (int iPsi = 0; iPsi < 6; ++iPsi) {
    for (int iif = 0; iif < Nruns; ++iif ) {

      // cout << Form("NumcqinvPPtpcM3Psi%d%s",iPsi,kT) << endl;
      // cout << "iPsi = " << iPsi << endl;
      // cout << "ikT = " << ikT << endl;
      // cout << "iif = " << iif << endl << endl;

      bool exi = false;

      if (iPsi == 0) {

        if (strcmp(sys,"PsecAPprim") != 0) {
          if ( ifile_[iif]->GetListOfKeys()->Contains(Form("Numcqinv%stpcM%dPsi%d%s",sys,mult,iPsi,kT)) ) {
            exi = true;
            numsum = (TH1D*)ifile_[iif]->Get(Form("Numcqinv%stpcM%dPsi%d%s",sys,mult,iPsi,kT));
            densum = (TH1D*)ifile_[iif]->Get(Form("Dencqinv%stpcM%dPsi%d%s",sys,mult,iPsi,kT));
            if (densum->GetEntries()==0) {
              cout << "iPsi = " << iPsi << endl;
              cout << "iif = " << iif << endl << endl;
            }
          }
        }
        else {
          exi = true;
          numsum = (TH1D*)ifile_[iif]->Get(Form("Num%sPckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));
          densum = (TH1D*)ifile_[iif]->Get(Form("Den%sPckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));
          numsumN = (TH1D*)ifile_[iif]->Get(Form("Num%sNckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));
          densumN = (TH1D*)ifile_[iif]->Get(Form("Den%sNckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));

          numsum->SetBit(TH1::kIsAverage);
          densum->SetBit(TH1::kIsAverage);
          numsumN->SetBit(TH1::kIsAverage);
          densumN->SetBit(TH1::kIsAverage);
        }
        if (exi)
          if (!seppsi)
            densum->Scale(numsum->GetEntries()/densum->GetEntries());
        if (strcmp(sys,"PsecAPprim") == 0)
          densumN->Scale(numsumN->GetEntries()/densumN->GetEntries());
      }
      else {
        if (strcmp(sys,"PsecAPprim") != 0) {
          if ( ifile_[iif]->GetListOfKeys()->Contains(Form("Numcqinv%stpcM%dPsi%d%s",sys,mult,iPsi,kT)) ) {
            exi = true;
            numpp[iPsi][2][iif] = (TH1D*)ifile_[iif]->Get(Form("Numcqinv%stpcM%dPsi%d%s",sys,mult,iPsi,kT));
            denpp[iPsi][2][iif] = (TH1D*)ifile_[iif]->Get(Form("Dencqinv%stpcM%dPsi%d%s",sys,mult,iPsi,kT));
            // cout << denpp[iPsi][2][iif]->GetEntries() << endl;

            if (denpp[iPsi][2][iif]->GetEntries()==0) {
              cout << denpp[iPsi][2][iif]->GetEntries() << endl;
              cout << "iPsi = " << iPsi << endl;
              cout << "iif = " << iif << endl;
            }
          }
        }
        else {
          exi = true;
          numpp[iPsi][2][iif] = (TH1D*)ifile_[iif]->Get(Form("Num%sPckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));
          denpp[iPsi][2][iif] = (TH1D*)ifile_[iif]->Get(Form("Den%sPckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));
          numpp[iPsi][0][iif] = (TH1D*)ifile_[iif]->Get(Form("Num%sNckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));
          denpp[iPsi][0][iif] = (TH1D*)ifile_[iif]->Get(Form("Den%sNckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,iPsi,kT));
          // numpp[iPsi][2][iif]->SetBit(TH1::kIsAverage);
          // denpp[iPsi][2][iif]->SetBit(TH1::kIsAverage);
          // numpp[iPsi][0][iif]->SetBit(TH1::kIsAverage);
          // denpp[iPsi][0][iif]->SetBit(TH1::kIsAverage);
        }

        if (exi) {
          numsum->Add(numpp[iPsi][2][iif]);
          if (!seppsi)
            denpp[iPsi][2][iif]->Scale(numpp[iPsi][2][iif]->GetEntries()/denpp[iPsi][2][iif]->GetEntries());
          densum->Add(denpp[iPsi][2][iif]);
          if (strcmp(sys,"PsecAPprim") == 0) {
            numsumN->Add(numpp[iPsi][0][iif]);
            denpp[iPsi][0][iif]->Scale(numpp[iPsi][0][iif]->GetEntries()/denpp[iPsi][0][iif]->GetEntries());
            densumN->Add(denpp[iPsi][0][iif]);
          }
        }

      }


      // int rb = 2;
      // if (exi) {
      //     cout << "exi" << endl;
      //     numsum->Rebin(rb);
      // }
      // densum->Rebin(rb);
      // numsum->Divide(densum);
      // numsum->SetMarkerColor(1+iPsi);
      // numsum->SetMarkerStyle(20);
      // numsum->SetMarkerSize(1.0);

      // if (iPsi == 0)
      //     numsum->Draw("p");
      // else
      // numsum->Draw("psame");

    }

    if (seppsi) {
      double norm = numsum->GetEntries()/densum->GetEntries();
      cout << iPsi << " " << norm << endl;
      TH1F *hnew = (TH1F*)densum->Clone("hnew");
      hnew->Scale(norm);

      numsum->SetMarkerColor(iPsi+1);
      numsum->SetMarkerStyle(20);
      numsum->SetMarkerSize(1.0);

      int rb = 1;

      numsum->Rebin(rb);
      // densum->Rebin(rb);
      // numsum->Divide(densum);

      hnew->Rebin(rb);
      numsum->Divide(hnew);
      if (iPsi == 0) {
        numsum->DrawCopy("p");
      }
      else {
        numsum->DrawCopy("psame");
      }
    }
  }

  // numpp[6][2]->Draw("p");

  if (!seppsi) {

    numsum->SetMarkerColor(kBlue);
    numsum->SetMarkerStyle(20);
    numsum->SetMarkerSize(1.0);

    int rb = 1;

    numsum->Rebin(rb);
    densum->Rebin(rb);
    numsum->Divide(densum);

    if (psibins)
      numsum->Draw("p");

//        densum->Draw("p");



    if (strcmp(sys,"PsecAPprim") != 0) {
      numpp[0][2][Nruns] = (TH1D*)ifile_[Nruns]->Get(Form("Numcqinv%stpcM%dPsi6%s",sys,mult,kT));
      denpp[0][2][Nruns] = (TH1D*)ifile_[Nruns]->Get(Form("Dencqinv%stpcM%dPsi6%s",sys,mult,kT));

      numpp[0][2][Nruns]->SetXTitle("#it{q}_{inv} (GeV/#it{c})");
      numpp[0][2][Nruns]->SetYTitle("C(#it{q}_{inv})");

    }
    else {
      numpp[0][2][Nruns] = (TH1D*)ifile_[Nruns]->Get(Form("Num%sPckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,6,kT));
      denpp[0][2][Nruns] = (TH1D*)ifile_[Nruns]->Get(Form("Den%sPckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,6,kT));

      numpp[0][0][Nruns] = (TH1D*)ifile_[Nruns]->Get(Form("Num%sNckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,6,kT));
      denpp[0][0][Nruns] = (TH1D*)ifile_[Nruns]->Get(Form("Den%sNckstarPsecAPprimtpcM%dPsi%d%s",proj,mult,6,kT));

      numpp[0][2][Nruns]->SetBit(TH1::kIsAverage);
      denpp[0][2][Nruns]->SetBit(TH1::kIsAverage);

      numpp[0][0][Nruns]->SetBit(TH1::kIsAverage);
      denpp[0][0][Nruns]->SetBit(TH1::kIsAverage);

      numpp[0][2][Nruns]->Add(numpp[0][0][Nruns]);
      denpp[0][2][Nruns]->Add(denpp[0][0][Nruns]);

      numpp[0][2][Nruns]->ResetBit(TH1::kIsAverage);
      denpp[0][2][Nruns]->ResetBit(TH1::kIsAverage);

      numpp[0][2][Nruns]->SetXTitle("#it{k*} (GeV/#it{c})");
      numpp[0][2][Nruns]->SetYTitle("C(#it{k*})");


    }

    gStyle->SetOptStat(0);
    numpp[0][2][Nruns]->GetXaxis()->SetTitleSize(0.06);
    numpp[0][2][Nruns]->GetYaxis()->SetTitleSize(0.06);
    numpp[0][2][Nruns]->SetTitle("");

    numpp[0][2][Nruns]->Rebin(rb);
    denpp[0][2][Nruns]->Rebin(rb);

    numpp[0][2][Nruns]->SetMarkerColor(kRed);
    numpp[0][2][Nruns]->SetMarkerStyle(20);
    numpp[0][2][Nruns]->SetMarkerSize(1.0);


    //double norm = denpp[0][2][Nruns]->GetEntries()/numpp[0][2][Nruns]->GetEntries();
    double norm = calculateNormalizationFactor(numpp[0][2][Nruns],denpp[0][2][Nruns],0.4,0.45 );
    //double norm = calculateNormalizationFactor(numpp[0][2][Nruns],denpp[0][2][Nruns],0.3,0.4 );

    numpp[0][2][Nruns]->Divide(denpp[0][2][Nruns]);
    numpp[0][2][Nruns]->Scale(norm);

    if (strcmp(sys,"PsecAPprim") == 0) {
      numpp[0][2][Nruns]->SetMaximum(1.1);
      numpp[0][2][Nruns]->SetMinimum(0.9);
      numpp[0][2][Nruns]->GetXaxis()->SetRangeUser(0,0.5);
    }
    else {
      numpp[0][2][Nruns]->SetMaximum(1.5);
      numpp[0][2][Nruns]->SetMinimum(0.97);
      numpp[0][2][Nruns]->GetXaxis()->SetRangeUser(0,0.5);
    }



    if (!psibins)
      numpp[0][2][Nruns]->Draw("p");
    else
      numpp[0][2][Nruns]->Draw("same");

    //numpp[0][2][Nruns]->Write();

    // if (strcmp(sys,"PsecAPprim") ==0 ) {
    //   numpp[0][0][Nruns]->Rebin(rb);
    //   denpp[0][0][Nruns]->Rebin(rb);

    //   numpp[0][0][Nruns]->SetMarkerColor(kBlack);
    //   numpp[0][0][Nruns]->SetMarkerStyle(20);
    //   numpp[0][0][Nruns]->SetMarkerSize(1.0);

    //   double norm = denpp[0][0][Nruns]->GetEntries()/numpp[0][0][Nruns]->GetEntries();
    //   numpp[0][0][Nruns]->Divide(denpp[0][0][Nruns]);
    //   numpp[0][0][Nruns]->Scale(norm);
    //   // numpp[0][0][Nruns]->Draw("same");

    //   numsumN->SetMarkerColor(kGreen+2);
    //   numsumN->SetMarkerStyle(20);
    //   numsumN->SetMarkerSize(1.0);

    //   numsumN->Rebin(rb);
    //   densumN->Rebin(rb);
    //   numsumN->Divide(densumN);

    //   // numsumN->Draw("same");
    // }


    if (psibins) {
      TLegend *leg = new TLegend (0.5,0.2,0.7,0.3);
      leg->SetFillColor(kWhite);
      leg->SetBorderSize(0);
      leg->SetTextSize(0.07);
      leg->AddEntry(numsum,"separate #Psi bins","p");
      leg->AddEntry(numpp[0][2][Nruns],"no EP cut","p");
      leg->Draw("same");
    }

  }

  TLatex Tl;
  Tl.SetTextAlign(23);
  Tl.SetTextSize(0.04);
  const char* latsys="";
  const char* latkT="";
  if (strcmp("PP",sys)==0)
    Tl.DrawLatex(0.22,1.093,"pp, ");
  else if (strcmp("PsecAPprim",sys)==0)
    Tl.DrawLatex(0.22,1.093,"p#bar{p}, ");
  else if (strcmp("APsecAPprim",sys)==0)
    Tl.DrawLatex(0.22,1.093,"#bar{p}#bar{p}, ");
  if (strcmp("",kT)==0)
    Tl.DrawLatex(0.3,1.09,"0.01<k_{T}<100GeV/c ");
  else if (strcmp("kT0",kT)==0)
    Tl.DrawLatex(0.3,1.09,"0.01<k_{T}<1.0GeV/c, ");
  else if (strcmp("kT1",kT)==0)
    Tl.DrawLatex(0.3,1.09,"1<k_{T}<100GeV/c, ");
  if (mult==0)
    Tl.DrawLatex(0.4,1.09,"0-10%, ");
  else if (mult==2)
    Tl.DrawLatex(0.4,1.09,"10-30%, ");
  else if (mult==4)
    Tl.DrawLatex(0.4,1.09,"30-50%, ");
  if (strcmp("../train_results_central_dcaptdep_10h",dir.Data())==0)
    Tl.DrawLatex(0.3,1.06,"10h, dca_{xy} p_{T}-dependent ");
  else if (strcmp("../train_results_central_dcaptdep",dir.Data())==0)
    Tl.DrawLatex(0.3,1.06,"11h, dca_{xy} p_{T}-dependent ");
  else if (strcmp("../train_results_semicentral_dcaptdep",dir.Data())==0)
    Tl.DrawLatex(0.3,1.06,"11h, dca_{xy} p_{T}-dependent ");
  else if (strcmp("../train_results_central_dca01",dir.Data())==0)
    Tl.DrawLatex(0.3,1.06,"11h, dca_{xy}<0.1cm ");
  else if (strcmp("../train_results_central_dca24",dir.Data())==0)
    Tl.DrawLatex(0.3,1.06,"11h, dca_{xy}<2.4cm ");

  // Tl.DrawLatex(0.3,1.09,Form("%s %s %d %s",sys, kT, mult, dir.Data()));

  // TF1 *fitpol1 = new TF1("fitpol1","[0] + [1]*x", 0.5, 1.1);
  // numsum->Fit("fitpol1");

  TString namef( dir(17,dir.Length()) );
  cout << namef << endl;

  myCan->SaveAs(Form("figs/cf%s%s%sc%d.png",sys,namef.Data(),kT,mult));

  TFile* ofile = new TFile(Form("ofiles/cfmb%s%s%sc%d.root",sys,namef.Data(),kT,mult),"recreate");
  numpp[0][2][Nruns]->Write();
  numsum->Write();


}

void myPadSetUp(TPad *currentPad, float currentLeft=0.11, float currentTop=0.04, float currentRight=0.04, float currentBottom=0.15)
{
	currentPad->SetLeftMargin(currentLeft);
	currentPad->SetTopMargin(currentTop);
	currentPad->SetRightMargin(currentRight);
	currentPad->SetBottomMargin(currentBottom);
	return;
}
