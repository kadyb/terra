// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sameSRS
bool sameSRS(std::string x, std::string y);
RcppExport SEXP _terra_sameSRS(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(sameSRS(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getCRSname
std::vector<std::string> getCRSname(std::string s);
RcppExport SEXP _terra_getCRSname(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(getCRSname(s));
    return rcpp_result_gen;
END_RCPP
}
// getLinearUnits
double getLinearUnits(std::string s);
RcppExport SEXP _terra_getLinearUnits(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(getLinearUnits(s));
    return rcpp_result_gen;
END_RCPP
}
// geotransform
std::vector<double> geotransform(std::string fname);
RcppExport SEXP _terra_geotransform(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(geotransform(fname));
    return rcpp_result_gen;
END_RCPP
}
// ginfo
std::string ginfo(std::string filename, std::vector<std::string> options, std::vector<std::string> oo);
RcppExport SEXP _terra_ginfo(SEXP filenameSEXP, SEXP optionsSEXP, SEXP ooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type oo(ooSEXP);
    rcpp_result_gen = Rcpp::wrap(ginfo(filename, options, oo));
    return rcpp_result_gen;
END_RCPP
}
// sd_info
std::vector<std::vector<std::string>> sd_info(std::string filename);
RcppExport SEXP _terra_sd_info(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(sd_info(filename));
    return rcpp_result_gen;
END_RCPP
}
// gdal_version
std::string gdal_version();
RcppExport SEXP _terra_gdal_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(gdal_version());
    return rcpp_result_gen;
END_RCPP
}
// metatdata
std::vector<std::string> metatdata(std::string filename);
RcppExport SEXP _terra_metatdata(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(metatdata(filename));
    return rcpp_result_gen;
END_RCPP
}
// sdsmetatdata
std::vector<std::string> sdsmetatdata(std::string filename);
RcppExport SEXP _terra_sdsmetatdata(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(sdsmetatdata(filename));
    return rcpp_result_gen;
END_RCPP
}
// sdsmetatdataparsed
std::vector<std::vector<std::string>> sdsmetatdataparsed(std::string filename);
RcppExport SEXP _terra_sdsmetatdataparsed(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(sdsmetatdataparsed(filename));
    return rcpp_result_gen;
END_RCPP
}
// gdal_drivers
std::vector<std::vector<std::string>> gdal_drivers();
RcppExport SEXP _terra_gdal_drivers() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(gdal_drivers());
    return rcpp_result_gen;
END_RCPP
}
// set_gdal_warnings
void set_gdal_warnings(int level);
RcppExport SEXP _terra_set_gdal_warnings(SEXP levelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type level(levelSEXP);
    set_gdal_warnings(level);
    return R_NilValue;
END_RCPP
}
// gdal_init
void gdal_init(std::string path);
RcppExport SEXP _terra_gdal_init(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    gdal_init(path);
    return R_NilValue;
END_RCPP
}
// percRank
std::vector<double> percRank(std::vector<double> x, std::vector<double> y, double minc, double maxc, int tail);
RcppExport SEXP _terra_percRank(SEXP xSEXP, SEXP ySEXP, SEXP mincSEXP, SEXP maxcSEXP, SEXP tailSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type minc(mincSEXP);
    Rcpp::traits::input_parameter< double >::type maxc(maxcSEXP);
    Rcpp::traits::input_parameter< int >::type tail(tailSEXP);
    rcpp_result_gen = Rcpp::wrap(percRank(x, y, minc, maxc, tail));
    return rcpp_result_gen;
END_RCPP
}
// setGDALCacheSizeMB
void setGDALCacheSizeMB(double x);
RcppExport SEXP _terra_setGDALCacheSizeMB(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    setGDALCacheSizeMB(x);
    return R_NilValue;
END_RCPP
}
// getGDALCacheSizeMB
double getGDALCacheSizeMB();
RcppExport SEXP _terra_getGDALCacheSizeMB() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getGDALCacheSizeMB());
    return rcpp_result_gen;
END_RCPP
}
// get_proj_search_paths
std::vector<std::string> get_proj_search_paths();
RcppExport SEXP _terra_get_proj_search_paths() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_proj_search_paths());
    return rcpp_result_gen;
END_RCPP
}
// set_proj_search_paths
bool set_proj_search_paths(std::vector<std::string> paths);
RcppExport SEXP _terra_set_proj_search_paths(SEXP pathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type paths(pathsSEXP);
    rcpp_result_gen = Rcpp::wrap(set_proj_search_paths(paths));
    return rcpp_result_gen;
END_RCPP
}
// PROJ_network
std::string PROJ_network(bool enable, std::string url);
RcppExport SEXP _terra_PROJ_network(SEXP enableSEXP, SEXP urlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type enable(enableSEXP);
    Rcpp::traits::input_parameter< std::string >::type url(urlSEXP);
    rcpp_result_gen = Rcpp::wrap(PROJ_network(enable, url));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_spat();

static const R_CallMethodDef CallEntries[] = {
    {"_terra_sameSRS", (DL_FUNC) &_terra_sameSRS, 2},
    {"_terra_getCRSname", (DL_FUNC) &_terra_getCRSname, 1},
    {"_terra_getLinearUnits", (DL_FUNC) &_terra_getLinearUnits, 1},
    {"_terra_geotransform", (DL_FUNC) &_terra_geotransform, 1},
    {"_terra_ginfo", (DL_FUNC) &_terra_ginfo, 3},
    {"_terra_sd_info", (DL_FUNC) &_terra_sd_info, 1},
    {"_terra_gdal_version", (DL_FUNC) &_terra_gdal_version, 0},
    {"_terra_metatdata", (DL_FUNC) &_terra_metatdata, 1},
    {"_terra_sdsmetatdata", (DL_FUNC) &_terra_sdsmetatdata, 1},
    {"_terra_sdsmetatdataparsed", (DL_FUNC) &_terra_sdsmetatdataparsed, 1},
    {"_terra_gdal_drivers", (DL_FUNC) &_terra_gdal_drivers, 0},
    {"_terra_set_gdal_warnings", (DL_FUNC) &_terra_set_gdal_warnings, 1},
    {"_terra_gdal_init", (DL_FUNC) &_terra_gdal_init, 1},
    {"_terra_percRank", (DL_FUNC) &_terra_percRank, 5},
    {"_terra_setGDALCacheSizeMB", (DL_FUNC) &_terra_setGDALCacheSizeMB, 1},
    {"_terra_getGDALCacheSizeMB", (DL_FUNC) &_terra_getGDALCacheSizeMB, 0},
    {"_terra_get_proj_search_paths", (DL_FUNC) &_terra_get_proj_search_paths, 0},
    {"_terra_set_proj_search_paths", (DL_FUNC) &_terra_set_proj_search_paths, 1},
    {"_terra_PROJ_network", (DL_FUNC) &_terra_PROJ_network, 2},
    {"_rcpp_module_boot_spat", (DL_FUNC) &_rcpp_module_boot_spat, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_terra(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
