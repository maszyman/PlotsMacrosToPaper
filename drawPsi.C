void drawPsi() {

    TFile *ifile_ = new TFile("results/169160.f1.dir.root", "read");

    const int psibins = 7;
    TH1D* psi[psibins];

    TCanvas* can = new TCanvas();

    // psi[6] = (TH1D*)ifile_->Get(Form("PsiEPVZEROcutPassPAPtpcM3Psi%d",6));
    // psi[6]->SetFillColor(1);

    // psi[6]->Draw("");

    for (int i = 0; i < psibins-1; ++i ) {
        psi[i] = (TH1D*)ifile_->Get(Form("PsiEPVZEROcutPassPAPtpcM3Psi%d",i));
        psi[i]->SetFillColor(i+1);
        if (i > 0) psi[i]->Draw("same");
        else {
            psi[i]->SetXTitle("#Psi_{2}");
            psi[i]->SetYTitle("counts");
            psi[i]->GetXaxis()->SetTitleSize(0.045);
            psi[i]->GetYaxis()->SetTitleSize(0.045);
            psi[i]->Draw();
        }
    }

    can->SaveAs("Psi.png");
}
