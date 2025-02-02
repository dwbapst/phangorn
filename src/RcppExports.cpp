// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fhm_new
NumericVector fhm_new(NumericVector v, int n);
RcppExport SEXP _phangorn_fhm_new(SEXP vSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fhm_new(v, n));
    return rcpp_result_gen;
END_RCPP
}
// allDescCPP
List allDescCPP(IntegerMatrix orig, int nTips);
RcppExport SEXP _phangorn_allDescCPP(SEXP origSEXP, SEXP nTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type orig(origSEXP);
    Rcpp::traits::input_parameter< int >::type nTips(nTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(allDescCPP(orig, nTips));
    return rcpp_result_gen;
END_RCPP
}
// countCycle_cpp
int countCycle_cpp(IntegerMatrix M);
RcppExport SEXP _phangorn_countCycle_cpp(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(countCycle_cpp(M));
    return rcpp_result_gen;
END_RCPP
}
// countCycle2_cpp
IntegerVector countCycle2_cpp(IntegerMatrix M);
RcppExport SEXP _phangorn_countCycle2_cpp(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(countCycle2_cpp(M));
    return rcpp_result_gen;
END_RCPP
}
// out_cpp
IntegerVector out_cpp(NumericVector d, NumericVector r, int n);
RcppExport SEXP _phangorn_out_cpp(SEXP dSEXP, SEXP rSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type d(dSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(out_cpp(d, r, n));
    return rcpp_result_gen;
END_RCPP
}
// getIndex
std::vector<int> getIndex(IntegerVector left, IntegerVector right, int n);
RcppExport SEXP _phangorn_getIndex(SEXP leftSEXP, SEXP rightSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type left(leftSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type right(rightSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(getIndex(left, right, n));
    return rcpp_result_gen;
END_RCPP
}
// Transfer_Index
double Transfer_Index(const IntegerVector bp, const IntegerMatrix orig, int l);
RcppExport SEXP _phangorn_Transfer_Index(SEXP bpSEXP, SEXP origSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type bp(bpSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type orig(origSEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(Transfer_Index(bp, orig, l));
    return rcpp_result_gen;
END_RCPP
}
// bipartCPP
List bipartCPP(IntegerMatrix orig, int nTips);
RcppExport SEXP _phangorn_bipartCPP(SEXP origSEXP, SEXP nTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type orig(origSEXP);
    Rcpp::traits::input_parameter< int >::type nTips(nTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(bipartCPP(orig, nTips));
    return rcpp_result_gen;
END_RCPP
}
// bipCPP
std::vector< std::vector<int> > bipCPP(IntegerMatrix orig, int nTips);
RcppExport SEXP _phangorn_bipCPP(SEXP origSEXP, SEXP nTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type orig(origSEXP);
    Rcpp::traits::input_parameter< int >::type nTips(nTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(bipCPP(orig, nTips));
    return rcpp_result_gen;
END_RCPP
}
// allChildrenCPP
List allChildrenCPP(const IntegerMatrix orig);
RcppExport SEXP _phangorn_allChildrenCPP(SEXP origSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type orig(origSEXP);
    rcpp_result_gen = Rcpp::wrap(allChildrenCPP(orig));
    return rcpp_result_gen;
END_RCPP
}
// allSiblingsCPP
List allSiblingsCPP(const IntegerMatrix& edge);
RcppExport SEXP _phangorn_allSiblingsCPP(SEXP edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type edge(edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(allSiblingsCPP(edge));
    return rcpp_result_gen;
END_RCPP
}
// p2dna
IntegerVector p2dna(NumericMatrix xx, double eps);
RcppExport SEXP _phangorn_p2dna(SEXP xxSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(p2dna(xx, eps));
    return rcpp_result_gen;
END_RCPP
}
// node_height_cpp
NumericVector node_height_cpp(IntegerVector edge1, IntegerVector edge2, NumericVector edge_length);
RcppExport SEXP _phangorn_node_height_cpp(SEXP edge1SEXP, SEXP edge2SEXP, SEXP edge_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type edge1(edge1SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type edge2(edge2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type edge_length(edge_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(node_height_cpp(edge1, edge2, edge_length));
    return rcpp_result_gen;
END_RCPP
}
// cophenetic_cpp
NumericVector cophenetic_cpp(IntegerMatrix edge, NumericVector edge_length, int nTips, int nNode);
RcppExport SEXP _phangorn_cophenetic_cpp(SEXP edgeSEXP, SEXP edge_lengthSEXP, SEXP nTipsSEXP, SEXP nNodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type edge_length(edge_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type nTips(nTipsSEXP);
    Rcpp::traits::input_parameter< int >::type nNode(nNodeSEXP);
    rcpp_result_gen = Rcpp::wrap(cophenetic_cpp(edge, edge_length, nTips, nNode));
    return rcpp_result_gen;
END_RCPP
}
// threshStateC
IntegerVector threshStateC(NumericVector x, NumericVector thresholds);
RcppExport SEXP _phangorn_threshStateC(SEXP xSEXP, SEXP thresholdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    rcpp_result_gen = Rcpp::wrap(threshStateC(x, thresholds));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP AddOnes(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP C_rowMin(SEXP, SEXP, SEXP);
RcppExport SEXP C_sprdist(SEXP, SEXP, SEXP);
RcppExport SEXP FS4(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP FS5(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP LogLik2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP PML0(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP PML3(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP PML4(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP PWI(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP PWI2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP dist2spectra(SEXP, SEXP, SEXP);
RcppExport SEXP getDAD(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP getPM(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP getPrep(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP getd2PM(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP getd2PM2(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP getdPM(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP getdPM2(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP grpDupAtomMat(SEXP, SEXP, SEXP);
RcppExport SEXP invSites(SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP ll_free2();
RcppExport SEXP ll_init2(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP optE(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP optQrtt(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP pNodes(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP rowMax(SEXP, SEXP, SEXP);
RcppExport SEXP sankoff3(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP sankoff3B(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP sankoffMPR(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP sankoffQuartet(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _rcpp_module_boot_Fitch_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_phangorn_fhm_new", (DL_FUNC) &_phangorn_fhm_new, 2},
    {"_phangorn_allDescCPP", (DL_FUNC) &_phangorn_allDescCPP, 2},
    {"_phangorn_countCycle_cpp", (DL_FUNC) &_phangorn_countCycle_cpp, 1},
    {"_phangorn_countCycle2_cpp", (DL_FUNC) &_phangorn_countCycle2_cpp, 1},
    {"_phangorn_out_cpp", (DL_FUNC) &_phangorn_out_cpp, 3},
    {"_phangorn_getIndex", (DL_FUNC) &_phangorn_getIndex, 3},
    {"_phangorn_Transfer_Index", (DL_FUNC) &_phangorn_Transfer_Index, 3},
    {"_phangorn_bipartCPP", (DL_FUNC) &_phangorn_bipartCPP, 2},
    {"_phangorn_bipCPP", (DL_FUNC) &_phangorn_bipCPP, 2},
    {"_phangorn_allChildrenCPP", (DL_FUNC) &_phangorn_allChildrenCPP, 1},
    {"_phangorn_allSiblingsCPP", (DL_FUNC) &_phangorn_allSiblingsCPP, 1},
    {"_phangorn_p2dna", (DL_FUNC) &_phangorn_p2dna, 2},
    {"_phangorn_node_height_cpp", (DL_FUNC) &_phangorn_node_height_cpp, 3},
    {"_phangorn_cophenetic_cpp", (DL_FUNC) &_phangorn_cophenetic_cpp, 4},
    {"_phangorn_threshStateC", (DL_FUNC) &_phangorn_threshStateC, 2},
    {"_rcpp_module_boot_Fitch_mod", (DL_FUNC) &_rcpp_module_boot_Fitch_mod, 0},
    {"AddOnes",             (DL_FUNC) &AddOnes,              5},
    {"C_rowMin",            (DL_FUNC) &C_rowMin,             3},
    {"C_sprdist",           (DL_FUNC) &C_sprdist,            3},
    {"FS4",                 (DL_FUNC) &FS4,                 14},
    {"FS5",                 (DL_FUNC) &FS5,                 10},
    {"LogLik2",             (DL_FUNC) &LogLik2,             10},
    {"PML0",                (DL_FUNC) &PML0,                14},
    {"PML3",                (DL_FUNC) &PML3,                14},
    {"PML4",                (DL_FUNC) &PML4,                15},
    {"PWI",                 (DL_FUNC) &PWI,                  6},
    {"PWI2",                (DL_FUNC) &PWI2,                 7},
    {"dist2spectra",        (DL_FUNC) &dist2spectra,         3},
    {"getDAD",              (DL_FUNC) &getDAD,               5},
    {"getPM",               (DL_FUNC) &getPM,                4},
    {"getPrep",             (DL_FUNC) &getPrep,              6},
    {"getd2PM",             (DL_FUNC) &getd2PM,              4},
    {"getd2PM2",            (DL_FUNC) &getd2PM2,             4},
    {"getdPM",              (DL_FUNC) &getdPM,               4},
    {"getdPM2",             (DL_FUNC) &getdPM2,              4},
    {"grpDupAtomMat",       (DL_FUNC) &grpDupAtomMat,        3},
    {"invSites",            (DL_FUNC) &invSites,             5},
    {"ll_free2",            (DL_FUNC) &ll_free2,             0},
    {"ll_init2",            (DL_FUNC) &ll_init2,             4},
    {"optE",                (DL_FUNC) &optE,                17},
    {"optQrtt",             (DL_FUNC) &optQrtt,             16},
    {"pNodes",              (DL_FUNC) &pNodes,               6},
    {"rowMax",              (DL_FUNC) &rowMax,               3},
    {"sankoff3",            (DL_FUNC) &sankoff3,             8},
    {"sankoff3B",           (DL_FUNC) &sankoff3B,           10},
    {"sankoffMPR",          (DL_FUNC) &sankoffMPR,           7},
    {"sankoffQuartet",      (DL_FUNC) &sankoffQuartet,       4},
    {NULL, NULL, 0}
};

RcppExport void R_init_phangorn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
