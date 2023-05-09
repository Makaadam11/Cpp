#include<iostream>
#include<cmath>
  
double integrate(double (*f)(double ),double  min,double max,double ds) {
  double integral=.0;
  for(double x=min;x<max;x+=ds) {
    integral+=f(x);
  }
  return integral*ds;
};


main() {

  std::cout<<  ::integrate(sin,0,3.1415926,0.01)<<std::endl;
} 


