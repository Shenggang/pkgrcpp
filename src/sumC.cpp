#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::interfaces(r, cpp)]]


//' Sum over a vector
//'
//' Return the sum of all the elements in the vector.
//' @param vec, a vector of arbitrary length.
//' @export
//[[Rcpp::export]]
double sumC(const NumericVector& vec)
{
  double total=0;
  for (int i=0; i<vec.size(); i++)
  {
    total+=vec[i];
  }
  return(total);
}
