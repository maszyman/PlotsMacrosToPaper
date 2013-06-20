void plotdetadphistar(const char* infilename1, const char* system, const char* kT) {


  TFile* infile1 = new TFile(infilename1,"read");

  TH1D* num;
  TH1D* den;
  int psibins1 = 3; // 3, 6
  int psibins2 = 3; // 3, 6


  num = (TH1D*)infile1->Get(Form("NumRadDcqinvinner%stpcM0",system,kT));
  den = (TH1D*)infile1->Get(Form("DenRadDcqinvinner%stpcM0",system,kT));

  num->SetXTitle("#Delta #phi*");
  num->SetYTitle("#Delta #eta");
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
  can->SaveAs(Form("figs/DetaDphistar%s%s.png",system,kT));


}
