#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {
  float finalBalance = 0;
  float principal = 0;
  int shInterestRate = 6;
  float interestRate = (float)shInterestRate / 100;
  cout << interestRate << endl ; 
  int times = 1 ;
  int compound = 2 ;

  cout << "Hello customer, our interest rate is %" << shInterestRate <<" which is compounded " << compound <<" times over the course of year" << endl ;
  cout << "Now ,How much money you are interested in investing? " << endl;
  cin >> principal ;
  finalBalance = principal*(pow((1 + interestRate/compound),(compound*times )));
  cout << "Your final balance in one year would be "<< finalBalance << endl;

}
