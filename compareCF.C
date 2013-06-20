void compareCF(TString file1, TString file2, TString system, int centrality, int kT) {

    TFile* f1 = new TFile(file1.Data(),"read");
    TFile* f2 = new TFile(file2.Data(),"read");

    cout << Form("Numcqinv%stpcM%dPsi0kT%d",system.Data(),centrality,kT) << endl;
    if (system.CompareTo("PP") == 0 || system.CompareTo("APAP") == 0) {
      TH1D* h1 = (TH1D*)f1->Get(Form("Numcqinv%stpcM%dPsi0kT%d",system.Data(),centrality,kT));
      TH1D* h2 = (TH1D*)f2->Get(Form("Numcqinv%stpcM%dPsi0kT%d",system.Data(),centrality,kT));
    }
    else {
      cout << "asdads" << endl;
      TH1D* h1 = (TH1D*)f1->Get(Form("NumOutPckstar%stpcM%dPsi0kT%d",system.Data(),centrality,kT));
      TH1D* h2 = (TH1D*)f2->Get(Form("NumOutPckstar%stpcM%dPsi0kT%d",system.Data(),centrality,kT));
    }

    h1->SetMarkerColor(kRed);

    h1->Draw();
    h2->Draw("same");


}

