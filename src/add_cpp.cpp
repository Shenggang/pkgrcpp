#include <Rcpp.h>
using namespace Rcpp;


//' Add Two Numbers
//'
//' Return the sum of two numbers.
//' @param x
//' @param y
//' @export
// [[Rcpp::export]]
double add_cpp(double& x, double& y) {
  double value = x + y;
  return value;
}
