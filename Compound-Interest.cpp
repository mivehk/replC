#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>

using namespace std;
//using namespace ios;

int main() {
  float finalBalance = 0;
  float principal = 0;
  int shInterestRate = 6;
  float interestRate = (float)shInterestRate / 100;
  //cout << interestRate << endl ; 
  int times = 1 ;
  int compound = 2 ;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "Hello customer, our interest rate is %" << shInterestRate <<" which is compounded " << compound <<" times annually. \n" ;
  cout << "Now ,How much money you are interested in investing? \n (enter whole number like $10 or with two decimal points like $10.00) \n $";
  cin >> principal ;
  finalBalance = principal*(pow((1 + interestRate/compound),(compound*times )));
  cout << "Your final balance in one year would be $"<< finalBalance << endl;

}
