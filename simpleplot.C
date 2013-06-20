void simpleplot(const char* infilename1, const char* infilename2, const char* system, const char* kT) {

  TFile* infile1 = new TFile(infilename1,"read");
  TFile* infile2 = new TFile(infilename2,"read");

  TH1D* cfv1;
  TH1D* cfv2;
  TH1D* cfv3;
  TH1D* cfv4;

  int psibins1 = 6; // 3, 6
  int psibins2 = 6; // 3, 6

  if ( strcmp(system,"PAP") == 0 ) {
    // cfv1 = (TH1D*)infile1->Get(Form("NumOutPckstarPAPtpcM0Psi%d%s",psibins1,kT));
    // cfv2 = (TH1D*)infile2->Get(Form("NumOutPckstarPAPtpcM0Psi%d%s",psibins2,kT));
    cfv3 = (TH1D*)infile1->Get(Form("NumOutPckstarPAPtpcM0Psi0%s",kT));
    cfv4 = (TH1D*)infile2->Get(Form("NumOutPckstarPAPtpcM0Psi0%s",kT));
  }
  else if ( strcmp(system,"PAPq") == 0 ){
    // cfv1 = (TH1D*)infile1->Get(Form("kstar_NumcqinvPAPtpcM0Psi%d%s",psibins1,kT));
    cfv3 = (TH1D*)infile1->Get(Form("kstar_NumcqinvPAPtpcM0Psi0%s",kT));

    // cfv2 = (TH1D*)infile2->Get(Form("NumOutPckstarPAPtpcM0Psi%d%s",psibins2, kT));
    cfv4 = (TH1D*)infile2->Get(Form("NumOutPckstarPAPtpcM0Psi0%s",kT));

  }
  else {
    // cfv1 = (TH1D*)infile1->Get(Form("Numcqinv%stpcM0Psi%d%s",system,psibins1,kT));
    // cfv2 = (TH1D*)infile2->Get(Form("Numcqinv%stpcM0Psi%d%s",system,psibins2,kT));
    cfv3 = (TH1D*)infile1->Get(Form("Numcqinv%stpcM0Psi0%s",system,kT));
    cfv4 = (TH1D*)infile2->Get(Form("Numcqinv%stpcM0Psi0%s",system,kT));

    cout << Form("Numcqinv%stpcM0Psi%d%s",system,psibins2,kT) << endl;
  }

  // cfv1->SetMarkerStyle(20);
  // cfv2->SetMarkerStyle(21);
  cfv3->SetMarkerStyle(20);
  cfv4->SetMarkerStyle(21);

  // cfv1->SetMarkerColor(kRed);
  // cfv2->SetMarkerColor(kBlack);
  cfv3->SetMarkerColor(kRed);
  cfv4->SetMarkerColor(kBlack);

  // cfv1->SetMaximum(1.5);
  // cfv1->SetMinimum(0.94);
  // cfv1->GetXaxis()->SetRangeUser(0,0.4);

  cfv3->SetMaximum(1.15);
  cfv3->SetMinimum(0.9);
  cfv3->GetXaxis()->SetRangeUser(0,0.3);

  gStyle->SetOptStat(0);
  TCanvas* can = new TCanvas("asd","asd");
  can->SetMargin(0.15,0.03,0.15,0.03);
  // can->Divide(2,1);
  // can->cd(1);
  //cfv1->Draw();
  //cfv2->Draw("same");
  // can->cd(2);
  cfv3->Draw();
  cfv4->Draw("same");

  can->SaveAs(Form("compareDCA/%s%s.png",system,kT));

}
