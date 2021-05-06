// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fista_ee
Rcpp::List fista_ee(const arma::vec& y, const arma::mat& X, const arma::vec& yupp, const arma::vec& lam1, const arma::vec& lam2, arma::vec b, const uint& maxit, const double& tol, const double& L, const bool& verbose, const bool& acc);
RcppExport SEXP _fglm_fista_ee(SEXP ySEXP, SEXP XSEXP, SEXP yuppSEXP, SEXP lam1SEXP, SEXP lam2SEXP, SEXP bSEXP, SEXP maxitSEXP, SEXP tolSEXP, SEXP LSEXP, SEXP verboseSEXP, SEXP accSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type yupp(yuppSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lam1(lam1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lam2(lam2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< const uint& >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double& >::type L(LSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool& >::type acc(accSEXP);
    rcpp_result_gen = Rcpp::wrap(fista_ee(y, X, yupp, lam1, lam2, b, maxit, tol, L, verbose, acc));
    return rcpp_result_gen;
END_RCPP
}
// lik_ee
arma::vec lik_ee(arma::vec y, const arma::vec& yupp, const arma::vec& eta, const int& order);
RcppExport SEXP _fglm_lik_ee(SEXP ySEXP, SEXP yuppSEXP, SEXP etaSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type yupp(yuppSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const int& >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(lik_ee(y, yupp, eta, order));
    return rcpp_result_gen;
END_RCPP
}
// obj_fun_ee
double obj_fun_ee(arma::vec y, const arma::vec& yupp, const arma::vec& eta, const arma::vec& b, const arma::vec& lam1, const arma::vec& lam2);
RcppExport SEXP _fglm_obj_fun_ee(SEXP ySEXP, SEXP yuppSEXP, SEXP etaSEXP, SEXP bSEXP, SEXP lam1SEXP, SEXP lam2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type yupp(yuppSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lam1(lam1SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lam2(lam2SEXP);
    rcpp_result_gen = Rcpp::wrap(obj_fun_ee(y, yupp, eta, b, lam1, lam2));
    return rcpp_result_gen;
END_RCPP
}
// neg_ll_exp_cpp
Rcpp::List neg_ll_exp_cpp(arma::vec y, arma::mat X, arma::vec b, arma::vec yupp, uint order, double const pen);
RcppExport SEXP _fglm_neg_ll_exp_cpp(SEXP ySEXP, SEXP XSEXP, SEXP bSEXP, SEXP yuppSEXP, SEXP orderSEXP, SEXP penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type yupp(yuppSEXP);
    Rcpp::traits::input_parameter< uint >::type order(orderSEXP);
    Rcpp::traits::input_parameter< double const >::type pen(penSEXP);
    rcpp_result_gen = Rcpp::wrap(neg_ll_exp_cpp(y, X, b, yupp, order, pen));
    return rcpp_result_gen;
END_RCPP
}
// log1mexp
arma::vec log1mexp(arma::vec x);
RcppExport SEXP _fglm_log1mexp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(log1mexp(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fglm_fista_ee", (DL_FUNC) &_fglm_fista_ee, 11},
    {"_fglm_lik_ee", (DL_FUNC) &_fglm_lik_ee, 4},
    {"_fglm_obj_fun_ee", (DL_FUNC) &_fglm_obj_fun_ee, 6},
    {"_fglm_neg_ll_exp_cpp", (DL_FUNC) &_fglm_neg_ll_exp_cpp, 6},
    {"_fglm_log1mexp", (DL_FUNC) &_fglm_log1mexp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_fglm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
