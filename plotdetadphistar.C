void plotdetadphistar(const char* infilename1, const char* system, const char* kT, int qinvdist = 0) {


  TFile* infile1 = new TFile(infilename1,"read");

  TH2D* num;
  TH2D* den;
  int psibins1 = 3; // 3, 6
  int psibins2 = 3; // 3, 6

  if (qinvdist == 0) {
    num = (TH2D*)infile1->Get(Form("NumRadDcqinvinner%stpcM0",system,kT));
    den = (TH2D*)infile1->Get(Form("DenRadDcqinvinner%stpcM0",system,kT));

    num->SetXTitle("#Delta #phi*");
    num->SetYTitle("#Delta #eta");

    // proxnum = (TH2D*)infile1->Get(Form("NumRadDcqinvinner%stpcM0",system,kT));
    // proxden = (TH2D*)infile1->Get(Form("DenRadDcqinvinner%stpcM0",system,kT));
    TH1D* proxnum_dphis = (TH1D*)num->ProjectionX("proxnum_dphis",1,50,"e");
    TH1D* proxden_dphis = (TH1D*)den->ProjectionX("proxden_dphis",1,50,"e");

    // proynum = (TH2D*)infile1->Get(Form("NumRadDcqinvinner%stpcM0",system,kT));
    // proyden = (TH2D*)infile1->Get(Form("DenRadDcqinvinner%stpcM0",system,kT));
    TH1D* proynum_deta = (TH1D*)num->ProjectionY("proynum_deta",1,50,"e");
    TH1D* proyden_deta = (TH1D*)den->ProjectionY("proyden_deta",1,50,"e");

  }
  else {
    num = (TH2D*)infile1->Get(Form("NumDTPCcqinvinner%stpcM0",system,kT));
    den = (TH2D*)infile1->Get(Form("DenDTPCcqinvinner%stpcM0",system,kT));

    num->SetXTitle("q_{inv}");
    num->SetYTitle("separation");

  }

  num->SetTitle("");


  double norm = den->GetEntries()/num->GetEntries();
  num->Divide(den);
  num->Scale(norm);


  // num->SetMarkerStyle(20);
  // num->SetMarkerColor(kRed);

  gStyle->SetOptStat(0);
  TCanvas* can = new TCanvas("asd","asd");
  //can->SetMargin(0.15,0.03,0.15,0.03);
  can->SetLogz();

  num->Draw("colz");

  int mult = -1;
  TLatex Tl;
  Tl.SetTextAlign(23);
  Tl.SetTextSize(0.045);
  const char* latsys="";
  const char* latkT="";
  if (strcmp("PP",system)==0)
    Tl.DrawLatex(40,1.293,"pp");
  else if (strcmp("PAP",system)==0) {
    Tl.DrawLatex(40,1.2,"p#bar{p}");
    if (strcmp("",kT)==0)
      Tl.DrawLatex(40,1.15,"0.01 < k_{T} < 5 GeV/c ");
    else if (strcmp("kT0",kT)==0)
      Tl.DrawLatex(40,1.15,"0.01 < k_{T} < 1 GeV/c");
    else if (strcmp("kT1",kT)==0)
      Tl.DrawLatex(40,1.15,"1 < k_{T} < 5 GeV/c");
    if (mult==0)
      Tl.DrawLatex(40,1.1,"0-10%");
  }
  // else if (strcmp("APAP",system)==0)
  //   Tl.DrawLatex(0.12,1.293,"#bar{p}#bar{p}");
  if (strcmp("PAP",system)!=0) {
    if (strcmp("",kT)==0)
      Tl.DrawLatex(40,1.23,"0.01 < k_{T} < 5 GeV/c ");
    else if (strcmp("kT0",kT)==0)
      Tl.DrawLatex(40,1.23,"0.01 < k_{T} < 1 GeV/c");
    else if (strcmp("kT1",kT)==0)
      Tl.DrawLatex(40,1.23,"1 < k_{T} < 5 GeV/c");
    if (mult==0)
      Tl.DrawLatex(40,1.17,"0-10%");
  }

  if (qinvdist == 0)
    can->SaveAs(Form("figs/DetaDphistar%s%s.png",system,kT));
  else
    can->SaveAs(Form("figs/DistQinv%s%s.png",system,kT));

  if (qinvdist == 0) {


    // proxnum = (TH2D*)infile1->Get(Form("NumRadDcqinvinner%stpcM0",system,kT));
    // proxden = (TH2D*)infile1->Get(Form("DenRadDcqinvinner%stpcM0",system,kT));
    // TH1D* proxnum_dphis = (TH1D*)proxnum->ProjectionX("proxnum_dphis",1,50,"e");
    // TH1D* proxden_dphis = (TH1D*)proxden->ProjectionX("proxden_dphis",1,50,"e");
    double norm = proxden_dphis->Integral(1,50)/proxnum_dphis->Integral(1,50);
    proxnum_dphis->Divide(proxden_dphis);
    proxnum_dphis->Scale(norm);

    norm = proyden_deta->Integral(1,50)/proynum_deta->Integral(1,50);
    proynum_deta->Divide(proyden_deta);
    proynum_deta->Scale(norm);

    TCanvas* can2 = new TCanvas("asd2","asd2");
    can2->SetLogy();
    can2->Divide(2,1);
    can2->cd(1);
    proxnum_dphis->Draw();
    can2->cd(2);
    proynum_deta->Draw();



    // num->ProjectionX("dphis",1,50,"e")->Draw();
    // // TH1D* proj_deta = (TH1D*)num->ProjectionX("pro_deta",45,46,"e");
    // // proj_deta->Scale(1./49.);
    // //proj_deta->Draw();
    // can2->cd(2);
    // num->ProjectionY("deta",1,50,"e")->Draw();

  }

}
