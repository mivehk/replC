//This program calcualtes your total price after tax
// if you have resale certificate then you can use wholesale 

#include <iostream>

using namespace std;

int main(){
  const float TAX_RATE = 0.08;
  int number=0 ;
  float price ,total  ;
  char choice ;
  

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << " Enter number of items you desire to buy: ";
  cin >> number;
  cout << " Enter price for that item: $";
  cin >> price ;

  cout << " Press W , if you want wholesale price \n";
  cout << " Press R , if you want retail price  \n";
  cout << " Then press enter \n";
  cin >> choice;

  if ((choice == 'w') || (choice == 'W')){
    total = price * number ;
    cout << " you need to pay total of $" << total << endl;
  } 
  else if  ((choice == 'r') || (choice == 'R')){
    float subtotal =0.0;
    subtotal = price * number;
    total = subtotal + subtotal * TAX_RATE;
    int resale ;
    cout << " Enter your resale number: ";
    cin >> resale ;
    cout << " You need to pay total of $" << total << endl;
  }

  cout << endl;

return 0;  
}