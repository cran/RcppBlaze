// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppBlaze.h"
#include <Rcpp.h>

using namespace Rcpp;

// fastLmPure
List fastLmPure(blaze::DynamicMatrix<double> X, blaze::DynamicVector<double> y, int type);
RcppExport SEXP _RcppBlaze_fastLmPure(SEXP XSEXP, SEXP ySEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< blaze::DynamicMatrix<double> >::type X(XSEXP);
    Rcpp::traits::input_parameter< blaze::DynamicVector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmPure(X, y, type));
    return rcpp_result_gen;
END_RCPP
}
// blaze_version
Rcpp::IntegerVector blaze_version(bool single);
RcppExport SEXP _RcppBlaze_blaze_version(SEXP singleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type single(singleSEXP);
    rcpp_result_gen = Rcpp::wrap(blaze_version(single));
    return rcpp_result_gen;
END_RCPP
}
// Blaze_SSE
bool Blaze_SSE();
RcppExport SEXP _RcppBlaze_Blaze_SSE() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze_SSE());
    return rcpp_result_gen;
END_RCPP
}
// Blaze_AVX
bool Blaze_AVX();
RcppExport SEXP _RcppBlaze_Blaze_AVX() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze_AVX());
    return rcpp_result_gen;
END_RCPP
}
// Blaze_AVX2
bool Blaze_AVX2();
RcppExport SEXP _RcppBlaze_Blaze_AVX2() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze_AVX2());
    return rcpp_result_gen;
END_RCPP
}
// Blaze_MIC
bool Blaze_MIC();
RcppExport SEXP _RcppBlaze_Blaze_MIC() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze_MIC());
    return rcpp_result_gen;
END_RCPP
}
// Blaze_FMA
bool Blaze_FMA();
RcppExport SEXP _RcppBlaze_Blaze_FMA() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(Blaze_FMA());
    return rcpp_result_gen;
END_RCPP
}
