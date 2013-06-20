void mergeBinsRC(int mult, const char* dir, int period) {

  // int mult = 4;

  // if (mult<2)
  //   const char* centrality = "central";
  // else
  //   const char* centrality = "semicentral";


  if (period == 11) {
    const int Nruns = 66;

    int runs[Nruns] = {
      167915, 168115, 168460, 169035, 169238, 169859, 170228 , 167920, 168310, 168464, 169091, 169411, 169923, 170230, 167985, 168311, 169094, 169415, 170027, 170268, 167987, 168322, 168511, 169138, 169417, 170081, 170269, 167988, 168325, 168512, 169144, 169835, 170155, // 170270,
      168069, 168341, 168514, 169145, 169837, 170159, 170306, 168076, 168342, 168777, 169148, 169838, 170163, 170308, 168105, 168361, 168826, 169156, 169846, 170193, 170309, 168107, 168362, 168988, 169160, 169855, 170203, 168108 , 168458, 168992, 169167, 169858, 170204  };
  }
  else if (period == 10) {
    const int Nruns = 90;
    int runs[Nruns] = {
      139510, 139507, 139505, 139503, 139465, 139438, 139437, 139360, 139329, 139328, 139314, 139310, 139309, 139173, 139107, 139105, 139038, 139037, 139036, 139029, 139028, 138872, 138871, 138870, 138837, 138732, 138730, 138666, 138662, 138653, 138652, 138638, 138624, 138621, 138583, 138582, 138579, 138578, 138534, 138469, 138442, 138439, 138438, 138396, 138364, 138275, 138225, 138201, 138197, 138192, 138190, 137848, 137844, 137752, 137751, 137724, 137722, 137718, 137704, 137693, 137692, 137691, 137686, 137685, 137639, 137638, 137608, 137595, 137549, 137544, 137541, 137539, 137443, 137441, 137440, 137439, 137434, 137432, 137431, 137430, 137366, 137243, 137236, 137235, 137232, 137231, 137230, 137162, 137161, 137135};
  }

  TFile* ifile_[Nruns+1];
  TFile* ofile_[Nruns+1];

  for (int jf = 0 ; jf < Nruns; ++jf ) {
    ifile_[jf] = new TFile(Form("%s/%d.dir.root",dir,runs[jf]), "read");
    // ofile_[jf] = new TFile(Form("train_results_%s/%d.mergedbinsdir.root",centrality,runs[jf]), "recreate");
  }
//    ifile_[Nruns] = new TFile(Form("train_results_%s/allruns.root",centrality), "read");

  TH1D* numpp[7][Nruns+1][3][14];
  TH1D* denpp[7][Nruns+1][3][14];

  for (int iif = 0; iif < Nruns; ++iif ) {
    ofile_[iif] = new TFile(Form("%s/%d.mergedbinsdir.root",dir,runs[iif]), "update");
    for (int iPsi = 0; iPsi < 7; ++iPsi) {

      numpp[iPsi][iif][0][0] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPprimPsectpcM%dPsi%d",mult,iPsi));
      // cout << numpp[iPsi][iif][0][0]->GetEntries() << endl;

      numpp[iPsi][iif][1][0] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPprimPsectpcM%dPsi%dkT0",mult,iPsi));
      // cout << numpp[iPsi][iif][1][0]->GetEntries() << endl;
      numpp[iPsi][iif][2][0] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvPprimPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][1] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPprimAPsectpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][1] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][1] = (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][2] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][2] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][2] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][3] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][3] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][3] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][4] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][4] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][4] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][5] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][5] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][5] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][6] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][6] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][6] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][7] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][7] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][7] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][8] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][8] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][8] = (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][9] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][9] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][9] = (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][10] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][10] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][10] = (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][11] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][11] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][11] = (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][12] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][12] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][12] = (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      numpp[iPsi][iif][0][13] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      numpp[iPsi][iif][1][13] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      numpp[iPsi][iif][2][13] = (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

//---
      denpp[iPsi][iif][0][0] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPprimPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][0] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPprimPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][0] = (TH1D*)ifile_[iif]->Get(Form("DencqinvPprimPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][1] = (TH1D*)ifile_[iif]->Get(Form("DencqinvAPprimAPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][1] = (TH1D*)ifile_[iif]->Get(Form("DencqinvAPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][1] = (TH1D*)ifile_[iif]->Get(Form("DencqinvAPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][2] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][2] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][2] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][3] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][3] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][3] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][4] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][4] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][4] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][5] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][5] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][5] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][6] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][6] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][6] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][7] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPprimAPsectpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][7] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPprimAPsectpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][7] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPprimAPsectpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][8] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][8] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][8] = (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][9] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][9] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][9] = (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][10] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][10] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][10] = (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][11] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][11] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][11] = (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][12] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][12] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][12] = (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

      denpp[iPsi][iif][0][13] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPsecAPprimtpcM%dPsi%d",mult,iPsi));
      denpp[iPsi][iif][1][13] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPsecAPprimtpcM%dPsi%dkT0",mult,iPsi));
      denpp[iPsi][iif][2][13] = (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPsecAPprimtpcM%dPsi%dkT1",mult,iPsi));

//---
      // numpp[iPsi][iif][0][0]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPprimPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][0]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPprimPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][0]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvPprimPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][1]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][1]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][1]->Add( (TH1D*)ifile_[iif]->Get(Form("NumcqinvAPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][2]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][3]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][4]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][4]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][4]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][5]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][5]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][5]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][6]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][6]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][6]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][7]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][7]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][7]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][8]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][8]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][8]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutPckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][9]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][9]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][9]->Add( (TH1D*)ifile_[iif]->Get(Form("NumOutNckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][10]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][10]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][10]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSidePckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][11]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][11]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][11]->Add( (TH1D*)ifile_[iif]->Get(Form("NumSideNckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][12]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][12]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][12]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongPckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // numpp[iPsi][iif][0][13]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // numpp[iPsi][iif][1][13]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // numpp[iPsi][iif][2][13]->Add( (TH1D*)ifile_[iif]->Get(Form("NumLongNckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

//---
      // denpp[iPsi][iif][0][0]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPprimPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][0]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPprimPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][0]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvPprimPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][1]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvAPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][1]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvAPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][1]->Add( (TH1D*)ifile_[iif]->Get(Form("DencqinvAPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][2]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][3]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][3]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][3]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][4]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][4]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][4]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][5]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][5]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][5]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][6]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][6]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][6]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][7]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPprimAPsectpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][7]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPprimAPsectpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][7]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPprimAPsectpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][8]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][8]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][8]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutPckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][9]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][9]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][9]->Add( (TH1D*)ifile_[iif]->Get(Form("DenOutNckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][10]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][10]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][10]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSidePckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][11]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][11]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][11]->Add( (TH1D*)ifile_[iif]->Get(Form("DenSideNckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][12]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][12]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][12]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongPckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

      // denpp[iPsi][iif][0][13]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPsecAPprimtpcM%dPsi%d",mult+1,iPsi)) );
      // denpp[iPsi][iif][1][13]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPsecAPprimtpcM%dPsi%dkT0",mult+1,iPsi)) );
      // denpp[iPsi][iif][2][13]->Add( (TH1D*)ifile_[iif]->Get(Form("DenLongNckstarPsecAPprimtpcM%dPsi%dkT1",mult+1,iPsi)) );

// //---

      for (int i = 0; i < 3; ++i) { // 3
        for (int j = 0; j < 14; ++j) { // 14
          numpp[iPsi][iif][i][j]->Write();
          denpp[iPsi][iif][i][j]->Write();
        }
      }


    }
  }


}
