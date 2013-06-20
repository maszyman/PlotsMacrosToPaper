void mergeBinsMC(int mult, const char* dir, int period) {

  int psibins = 4; // 4, 7, 13
  const int Nruns = 1;

  TFile* ifile_[Nruns+1];
  TFile* ofile_[Nruns+1];

  // for (int jf = 0 ; jf < Nruns; ++jf ) {
  //   ifile_[jf] = new TFile(Form("%s/%d.dir.root",dir,runs[jf]), "read");
  //   // ofile_[jf] = new TFile(Form("train_results_%s/%d.mergedbinsdir.root",centrality,runs[jf]), "recreate");

  //   // cout << Form("%s/%d.dir.root",dir,runs[jf]) << endl;
  // }
  ifile_[0] = new TFile(Form("%s",dir), "read");

  TH1D* numpp[13][Nruns+1][3][8];
  TH1D* denpp[13][Nruns+1][3][8];

  for (int iif = 0; iif < Nruns; ++iif ) {
    ofile_[0] = new TFile(Form("%s.mergedbinsdir.root",dir), "update");

    for (int iPsi = 3; iPsi < psibins; ++iPsi) {

      numpp[iPsi][iif][0][0] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][0] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][0] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPPtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][1] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPAPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][1] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPAPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][1] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPAPtpcM%dPsi%dkT1",mult,iPsi));

      // numpp[iPsi][iif][0][2] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPAPtpcM%dPsi%d",mult,iPsi));
      // numpp[iPsi][iif][1][2] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPAPtpcM%dPsi%dkT0",mult,iPsi));
      // numpp[iPsi][iif][2][2] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPAPtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][2] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][2] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][2] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][3] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][3] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][3] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][4] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPAPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][4] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][4] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][5] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPAPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][5] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][5] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][6] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPAPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][6] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][6] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][7] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPAPtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][7] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][7] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

// //---
      denpp[iPsi][iif][0][0] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][0] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][0] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPPtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][1] = (TH1D*)ifile_[iif]->Get(Form("DencqinvAPAPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][1] = (TH1D*)ifile_[iif]->Get(Form("DencqinvAPAPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][1] = (TH1D*)ifile_[iif]->Get(Form("DencqinvAPAPtpcM%dPsi%dkT1",mult,iPsi));

      // denpp[iPsi][iif][0][2] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPAPtpcM%dPsi%d",mult,iPsi));
      // denpp[iPsi][iif][1][2] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPAPtpcM%dPsi%dkT0",mult,iPsi));
      // denpp[iPsi][iif][2][2] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPAPtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][2] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPAPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][2] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][2] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][3] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPAPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][3] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][3] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][4] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPAPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][4] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][4] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][5] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPAPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][5] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][5] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][6] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPAPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][6] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][6] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][7] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPAPtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][7] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPAPtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][7] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPAPtpcM%dPsi%dkT1",mult,iPsi));

// //---
      numpp[iPsi][iif][0][0]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][0]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][0]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][1]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][1]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][1]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPAPtpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][4]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][4]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][4]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][5]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][5]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][5]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][6]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][6]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][6]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      numpp[iPsi][iif][0][7]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      numpp[iPsi][iif][1][7]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      numpp[iPsi][iif][2][7]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

// //---
      denpp[iPsi][iif][0][0]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][0]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][0]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      denpp[iPsi][iif][0][1]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvAPAPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][1]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvAPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][1]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvAPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPAPtpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      denpp[iPsi][iif][0][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      denpp[iPsi][iif][0][3]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][3]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][3]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      denpp[iPsi][iif][0][4]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][4]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][4]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      denpp[iPsi][iif][0][5]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][5]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][5]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      denpp[iPsi][iif][0][6]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][6]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][6]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );

      denpp[iPsi][iif][0][7]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPAPtpcM%dPsi%d",mult+1,iPsi)) );
      denpp[iPsi][iif][1][7]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPAPtpcM%dPsi%dkT0",mult+1,iPsi)) );
      denpp[iPsi][iif][2][7]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPAPtpcM%dPsi%dkT1",mult+1,iPsi)) );
// // //---

      for (int i = 0; i < 3;++i) {
        for (int j = 0; j < 8;++j) {
          // if (j != 1) {
          numpp[iPsi][iif][i][j]->Write();
          denpp[iPsi][iif][i][j]->Write();
          // }
        }
      }


    }
  }


}
