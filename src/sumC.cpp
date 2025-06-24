#include <Rcpp.h>
using namespace Rcpp;

//[[Rcpp::export]]
double sumC(NumericVector& vec)
{
  double total=0;
  for (int i=0; i<vec.size(); i++)
  {
    total+=vec[i];
  }
  return(total);
}
