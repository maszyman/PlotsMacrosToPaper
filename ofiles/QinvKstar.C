void QinvKstar (const char* filename, const char* histname) {
  TFile*  fileIn = new TFile(filename,"update");
  TH1D* hist = (TH1D*)fileIn->Get(histname);
  TH1D* histnew = new TH1D(Form("kstar_%s",histname),"",hist->GetNbinsX(),0,1.0);//(TH1D*)fileIn->Get(histname);

//   for (int ibins = 1; ibins <= hist->GetNbinsX()*2; ibins++ ) {
//     hist->SetBinContent(ibins, hist->GetBinContent(ibins));
//     //    hist->SetBinContent(ibins, hist->GetBinContent(ibins));
//   }

  int bin=1;

  for (double kstar = 0.0025; kstar <= 1.0; kstar += 0.005 ) {

    // cout << "bin = " << bin << endl;
    // cout << "kstar = " << kstar << endl;
    // cout << "FixBin = " << hist->FindFixBin(kstar*2) << endl;
    // cout << "Content FixBin = " << hist->GetBinContent(hist->FindFixBin(kstar*2)) << endl;

    //  for (double kstar = 0.005; kstar <= 0.25; kstar += 0.01 ) {
    //        hist->Fill(kstar,hist->GetBinContent(hist->FindBin(kstar*2)));
    histnew->SetBinContent(bin,hist->GetBinContent(hist->FindFixBin(kstar*2)));
    histnew->SetBinError(bin++,hist->GetBinError(hist->FindFixBin(kstar*2)));
    //    hist->SetBinContent(ibins, hist->GetBinContent(ibins));
    //    hist->SetBinContent(ibins, hist->GetBinContent(ibins));
  }

  TFile* fileOut = new TFile(Form("kstar_%s",filename), "update");
  hist->Write();
  histnew->Write();
}
