# # #########################################
# # ### PidTpcTof vs no TOF mismatch cen0 11h
# # #########################################
root -l -b -q plotcomparison.C\(\"figs/cfPP11hPidTpcTofcen0.root\",\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"PP\",\"\",\"tof_mismatch\"\)
root -l -b -q plotcomparison.C\(\"figs/cfPP11hPidTpcTofcen0kT0.root\",\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\",\"tof_mismatch\"\)
root -l -b -q plotcomparison.C\(\"figs/cfPP11hPidTpcTofcen0kT1.root\",\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\",\"tof_mismatch\"\)

root -l -b -q plotcomparison.C\(\"figs/cfAPAP11hPidTpcTofcen0.root\",\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\",\"tof_mismatch\"\)
root -l -b -q plotcomparison.C\(\"figs/cfAPAP11hPidTpcTofcen0kT0.root\",\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\",\"tof_mismatch\"\)
root -l -b -q plotcomparison.C\(\"figs/cfAPAP11hPidTpcTofcen0kT1.root\",\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\",\"tof_mismatch\"\)

root -l -b -q plotcomparison.C\(\"figs/cfPAP11hPidTpcTofcen0.root\",\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\",\"tof_mismatch\"\)
root -l -b -q plotcomparison.C\(\"figs/cfPAP11hPidTpcTofcen0kT0.root\",\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\",\"tof_mismatch\"\)
root -l -b -q plotcomparison.C\(\"figs/cfPAP11hPidTpcTofcen0kT1.root\",\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\",\"tof_mismatch\"\)


# # # #########################################
# # # ### PidTpcTof   11h cen 0,2,4
# # # #########################################
# root -l -b -q plotcomparisonmult.C\(\"figs/cfPP11hPidTpcTofcen0.root\",\"figs/cfPP11hPidTpcTofcen2.root\",\"figs/cfPP11hPidTpcTofcen4.root\",\"PP\",\"\",\"cendep\"\)
# root -l -b -q plotcomparisonmult.C\(\"figs/cfPP11hPidTpcTofcen0kT0.root\",\"figs/cfPP11hPidTpcTofcen2kT0.root\",\"figs/cfPP11hPidTpcTofcen4kT0.root\",\"PP\",\"kT0\",\"cendep\"\)
# root -l -b -q plotcomparisonmult.C\(\"figs/cfPP11hPidTpcTofcen0kT1.root\",\"figs/cfPP11hPidTpcTofcen2kT1.root\",\"figs/cfPP11hPidTpcTofcen4kT1.root\",\"PP\",\"kT1\",\"cendep\"\)

# root -l -b -q plotcomparisonmult.C\(\"figs/cfAPAP11hPidTpcTofcen0.root\",\"figs/cfAPAP11hPidTpcTofcen2.root\",\"figs/cfAPAP11hPidTpcTofcen4.root\",\"APAP\",\"\",\"cendep\"\)
# root -l -b -q plotcomparisonmult.C\(\"figs/cfAPAP11hPidTpcTofcen0kT0.root\",\"figs/cfAPAP11hPidTpcTofcen2kT0.root\",\"figs/cfAPAP11hPidTpcTofcen4kT0.root\",\"APAP\",\"kT0\",\"cendep\"\)
# root -l -b -q plotcomparisonmult.C\(\"figs/cfAPAP11hPidTpcTofcen0kT1.root\",\"figs/cfAPAP11hPidTpcTofcen2kT1.root\",\"figs/cfAPAP11hPidTpcTofcen4kT1.root\",\"APAP\",\"kT1\",\"cendep\"\)

# root -l -b -q plotcomparisonmult.C\(\"figs/cfPAP11hPidTpcTofcen0.root\",\"figs/cfPAP11hPidTpcTofcen2.root\",\"figs/cfPAP11hPidTpcTofcen4.root\",\"PAP\",\"\",\"cendep\"\)
# root -l -b -q plotcomparisonmult.C\(\"figs/cfPAP11hPidTpcTofcen0kT0.root\",\"figs/cfPAP11hPidTpcTofcen2kT0.root\",\"figs/cfPAP11hPidTpcTofcen4kT0.root\",\"PAP\",\"kT0\",\"cendep\"\)
# root -l -b -q plotcomparisonmult.C\(\"figs/cfPAP11hPidTpcTofcen0kT1.root\",\"figs/cfPAP11hPidTpcTofcen2kT1.root\",\"figs/cfPAP11hPidTpcTofcen4kT1.root\",\"PAP\",\"kT1\",\"cendep\"\)

# # # #########################################
# # # ### PidTpcTof  cen0 10h vs 11h
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfPP10hPidTpcTofcen0.root\",\"figs/cfPP11hPidTpcTofcen0.root\",\"PP\",\"\",\"tpctof_10h_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPP10hPidTpcTofcen0kT0.root\",\"figs/cfPP11hPidTpcTofcen0kT0.root\",\"PP\",\"kT0\",\"tpctof_10h_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPP10hPidTpcTofcen0kT1.root\",\"figs/cfPP11hPidTpcTofcen0kT1.root\",\"PP\",\"kT1\",\"tpctof_10h_11h\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfAPAP10hPidTpcTofcen0.root\",\"figs/cfAPAP11hPidTpcTofcen0.root\",\"APAP\",\"\",\"tpctof_10h_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfAPAP10hPidTpcTofcen0kT0.root\",\"figs/cfAPAP11hPidTpcTofcen0kT0.root\",\"APAP\",\"kT0\",\"tpctof_10h_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfAPAP10hPidTpcTofcen0kT1.root\",\"figs/cfAPAP11hPidTpcTofcen0kT1.root\",\"APAP\",\"kT1\",\"tpctof_10h_11h\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfPAP10hPidTpcTofcen0.root\",\"figs/cfPAP11hPidTpcTofcen0.root\",\"PAP\",\"\",\"tpctof_10h_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPAP10hPidTpcTofcen0kT0.root\",\"figs/cfPAP11hPidTpcTofcen0kT0.root\",\"PAP\",\"kT0\",\"tpctof_10h_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPAP10hPidTpcTofcen0kT1.root\",\"figs/cfPAP11hPidTpcTofcen0kT1.root\",\"PAP\",\"kT1\",\"tpctof_10h_11h\"\)

# # # #########################################
# # # ### PidTpcTof vs PidTpcOnly cen0 10h
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfPP10hPidTpcTofcen0.root\",\"figs/cfPP10hPidTpcOnlycen0.root\",\"PP\",\"\",\"tpctof_tpconly_10h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPP10hPidTpcTofcen0kT0.root\",\"figs/cfPP10hPidTpcOnlycen0kT0.root\",\"PP\",\"kT0\",\"tpctof_tpconly_10h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPP10hPidTpcTofcen0kT1.root\",\"figs/cfPP10hPidTpcOnlycen0kT1.root\",\"PP\",\"kT1\",\"tpctof_tpconly_10h\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfAPAP10hPidTpcTofcen0.root\",\"figs/cfAPAP10hPidTpcOnlycen0.root\",\"APAP\",\"\",\"tpctof_tpconly_10h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfAPAP10hPidTpcTofcen0kT0.root\",\"figs/cfAPAP10hPidTpcOnlycen0kT0.root\",\"APAP\",\"kT0\",\"tpctof_tpconly_10h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfAPAP10hPidTpcTofcen0kT1.root\",\"figs/cfAPAP10hPidTpcOnlycen0kT1.root\",\"APAP\",\"kT1\",\"tpctof_tpconly_10h\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfPAP10hPidTpcTofcen0.root\",\"figs/cfPAP10hPidTpcOnlycen0.root\",\"PAP\",\"\",\"tpctof_tpconly_10h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPAP10hPidTpcTofcen0kT0.root\",\"figs/cfPAP10hPidTpcOnlycen0kT0.root\",\"PAP\",\"kT0\",\"tpctof_tpconly_10h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPAP10hPidTpcTofcen0kT1.root\",\"figs/cfPAP10hPidTpcOnlycen0kT1.root\",\"PAP\",\"kT1\",\"tpctof_tpconly_10h\"\)

# # # #########################################
# # # ### PidTpcTof vs PidTpcOnly cen0 11h
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfPP11hPidTpcTofcen0.root\",\"figs/cfPP11hPidTpcOnlycen0.root\",\"PP\",\"\",\"tpctof_tpconly_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPP11hPidTpcTofcen0kT0.root\",\"figs/cfPP11hPidTpcOnlycen0kT0.root\",\"PP\",\"kT0\",\"tpctof_tpconly_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPP11hPidTpcTofcen0kT1.root\",\"figs/cfPP11hPidTpcOnlycen0kT1.root\",\"PP\",\"kT1\",\"tpctof_tpconly_11h\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfAPAP11hPidTpcTofcen0.root\",\"figs/cfAPAP11hPidTpcOnlycen0.root\",\"APAP\",\"\",\"tpctof_tpconly_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfAPAP11hPidTpcTofcen0kT0.root\",\"figs/cfAPAP11hPidTpcOnlycen0kT0.root\",\"APAP\",\"kT0\",\"tpctof_tpconly_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfAPAP11hPidTpcTofcen0kT1.root\",\"figs/cfAPAP11hPidTpcOnlycen0kT1.root\",\"APAP\",\"kT1\",\"tpctof_tpconly_11h\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfPAP11hPidTpcTofcen0.root\",\"figs/cfPAP11hPidTpcOnlycen0.root\",\"PAP\",\"\",\"tpctof_tpconly_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPAP11hPidTpcTofcen0kT0.root\",\"figs/cfPAP11hPidTpcOnlycen0kT0.root\",\"PAP\",\"kT0\",\"tpctof_tpconly_11h\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfPAP11hPidTpcTofcen0kT1.root\",\"figs/cfPAP11hPidTpcOnlycen0kT1.root\",\"PAP\",\"kT1\",\"tpctof_tpconly_11h\"\)

############################################
############################################
############################################
############################################

# # # #########################################
# # # ### TTC16 vs TTTC16DCA24 f1
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPttc16dca24_resultsf1_results.f1.ttc16dca24.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# # # #########################################
# # # ### TTCMIN: f1 vs. f3
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPttcmin_resultsf3_results.f3.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# # # #########################################
# # # ### TTC16 vs TTTCMIN f3
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# # # #########################################
# # # ### TTCMIN vs NOTTTC f13
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf13_results.f13.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# # # #########################################
# # # ### TTCMIN vs NOTTTC f1
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# # #########################################
# # ### TTC16 vs TTTCMIN f1
# # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPttcmin_resultsf1_results.f1.ttcmin.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)


# # # #########################################
# # # ### TTC16: pp vs. apap
# # # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"PPAPAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"PPAPAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"PPAPAP\",\"kT1\"\)

# # #########################################
# # ### NOTTC: pp vs. apap
# # #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"PPAPAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PPAPAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PPAPAP\",\"kT1\"\)


# #########################################
# ### TTC16 f13 vs NOTTTC f13
# #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf13_results.f13.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPnottc_resultsf13_results.f13.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# #########################################
# ### TTC16 vs NOTTTC f1
# #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# #########################################
# ### TTC16: f1 vs. f3
# #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPttc16_resultsf1_results.f1.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPttc16_resultsf3_results.f3.ttc16.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

# #########################################
# ### NOTTC: f1 vs. f3
# #########################################
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootc0.root\",\"PP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"figs/cfmbAPAPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootc0.root\",\"APAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbAPAPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootkT0c0.root\",\"APAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbAPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbAPAPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootkT1c0.root\",\"APAP\",\"kT1\"\)

# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootc0.root\",\"figs/cfmbPAPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootc0.root\",\"PAP\",\"\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT0c0.root\",\"figs/cfmbPAPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootkT0c0.root\",\"PAP\",\"kT0\"\)
# root -l -b -q plotcomparison.C\(\"figs/cfmbPAPnottc_resultsf1_results.f1.nottc.root.mergedbinsdir.rootkT1c0.root\",\"figs/cfmbPAPnottc_resultsf3_results.f3.nottc.root.mergedbinsdir.rootkT1c0.root\",\"PAP\",\"kT1\"\)

