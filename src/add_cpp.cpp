#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::interfaces(r, cpp)]]

//' Add Two Numbers
//'
//' Return the sum of two numbers.
//' @param x, a double number
//' @param y, a double number
//' @export
// [[Rcpp::export]]
double add_cpp(double& x, double& y) {
  double value = x + y;
  return value;
}
