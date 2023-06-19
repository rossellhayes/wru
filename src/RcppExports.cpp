// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sample_me
arma::umat sample_me(const arma::uvec& last_name, const arma::uvec& first_name, const arma::uvec& mid_name, const arma::uvec& geo, const arma::umat& N_rg, const arma::mat& pi_s, const arma::mat& pi_f, const arma::mat& pi_m, const arma::mat& pi_nr, const arma::uword which_names, const arma::uword samples, const arma::uword burnin, const arma::uvec& race_init, const bool verbose);
RcppExport SEXP _wru_sample_me(SEXP last_nameSEXP, SEXP first_nameSEXP, SEXP mid_nameSEXP, SEXP geoSEXP, SEXP N_rgSEXP, SEXP pi_sSEXP, SEXP pi_fSEXP, SEXP pi_mSEXP, SEXP pi_nrSEXP, SEXP which_namesSEXP, SEXP samplesSEXP, SEXP burninSEXP, SEXP race_initSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type last_name(last_nameSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type first_name(first_nameSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type mid_name(mid_nameSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type geo(geoSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type N_rg(N_rgSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pi_s(pi_sSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pi_f(pi_fSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pi_m(pi_mSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pi_nr(pi_nrSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type which_names(which_namesSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type samples(samplesSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type race_init(race_initSEXP);
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_me(last_name, first_name, mid_name, geo, N_rg, pi_s, pi_f, pi_m, pi_nr, which_names, samples, burnin, race_init, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_wru_sample_me", (DL_FUNC) &_wru_sample_me, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_wru(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

