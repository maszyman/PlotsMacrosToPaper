void plotkdep(TString infilename1, const char* system, const char* kT) {


  TFile* infile1 = new TFile(infilename1.Data(),"read");

  TH1D* num;
  TH1D* den;
  int psibins1 = 3; // 3, 6
  int psibins2 = 3; // 3, 6


  if (strcmp(system,"PAP") == 0)
    num = (TH1D*)infile1->Get(Form("kTDepckstar%stpcM0Psi3%s",system,kT));
  else
    num = (TH1D*)infile1->Get(Form("kTDepcqinv%stpcM0Psi3%s",system,kT));
  //den = (TH1D*)infile1->Get(Form("DencAvgSep%stpcM0Psi3%s",system,kT));

  num->SetXTitle("k_{T} (GeV/c)");
  num->SetYTitle("");
  num->SetTitle("");
  num->GetXaxis()->SetTitleSize(0.07);


  // double norm = den->GetEntries()/num->GetEntries();
  // num->Divide(den);
  // num->Scale(norm);

  // num->SetMaximum(1.3);
  // num->SetMinimum(0.8);
  // num->GetXaxis()->SetRangeUser(0,50);

  // num->SetName(Form("Numcqinv%stpcM0Psi3%s_1",system,kT));



  num->SetMarkerStyle(20);

  num->SetMarkerColor(kRed);


  gStyle->SetOptStat(0);
  TCanvas* can = new TCanvas("asd","asd");
  can->SetMargin(0.15,0.03,0.15,0.03);
  num->DrawNormalized();

  int mult = -1;
  TLatex Tl;
  Tl.SetTextAlign(23);
  Tl.SetTextSize(0.045);
  const char* latsys="";
  const char* latkT="";
  if (strcmp("PP",system)==0)
    Tl.DrawLatex(2,0.01293,"pp");
  else if (strcmp("PAP",system)==0) {
    Tl.DrawLatex(2,0.02,"p#bar{p}");
    if (strcmp("",kT)==0)
      Tl.DrawLatex(2,0.015,"0.01 < k_{T} < 5 GeV/c ");
    else if (strcmp("kT0",kT)==0)
      Tl.DrawLatex(2,0.015,"0.01 < k_{T} < 1 GeV/c");
    else if (strcmp("kT1",kT)==0)
      Tl.DrawLatex(2,0.015,"1 < k_{T} < 5 GeV/c");
    if (mult==0)
      Tl.DrawLatex(2,0.01,"0-10%");
  }
  // else if (strcmp("APAP",system)==0)
  //   Tl.DrawLatex(0.12,0.0293,"#bar{p}#bar{p}");
  if (strcmp("PAP",system)!=0) {
    if (strcmp("",kT)==0)
      Tl.DrawLatex(3,0.011,"0.01 < k_{T} < 5 GeV/c ");
    else if (strcmp("kT0",kT)==0)
      Tl.DrawLatex(3,0.011,"0.01 < k_{T} < 1 GeV/c");
    else if (strcmp("kT1",kT)==0)
      Tl.DrawLatex(3,0.011,"1 < k_{T} < 5 GeV/c");
    if (mult==0)
      Tl.DrawLatex(2,0.017,"0-10%");
  }
  // if (strcmp("PPAPAP",system)==0) {
  //   Tl.DrawLatex(2,1.293,"#Delta #eta < 0.03 #Delta #phi * < 0.04 @ R=1.6m");
  // }

// TLegend *leg = new TLegend (0.3,0.7,0.8,0.8);
//   leg->SetFillColor(kWhite);
//   leg->SetBorderSize(0);
//   leg->SetTextSize(0.05);


  // leg->AddEntry(num,"#Delta #eta < 0.03 #Delta #phi_{min} * < 0.04","p");
  // leg->AddEntry(cfv4,"no cut","p");

  // leg->AddEntry(num,"field-- #Delta #eta < 0.03 #Delta #phi_{min} * < 0.04","p");
  // leg->AddEntry(cfv4,"field++ #Delta #eta < 0.03 #Delta #phi_{min} * < 0.04","p");

  // leg->Draw("same");

  // can->SaveAs(Form("figs/comparison_%s/%s%s.png",cmp,system,kT));

  infilename1.ReplaceAll(".root","");
  infilename1.ReplaceAll("../train_results_","");
  infilename1.ReplaceAll("/","");

  can->SaveAs(Form("figs/kTdep%s%s%s.png",system,kT,infilename1.Data()));

  // TFile* ofile = new TFile(Form("figs/comparison_%s/cfmb%s%s.root",cmp,system,kT),"recreate");
  // num->Write();
  // cfv4->Write();

}
