#include <iostream>

using namespace std;

int main(){
  const float TAX_RATE = 0.08;
  int number =0 ;
  float price ,total ;
  char choice ;
  

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << " Enter number of items you desire to buy: ";
  cin >> number;
  cout << " Enter price for that item: $";
  cin >> price ;

  cout << " if you want wholesale price then press 'w' \n";
  cout << " if you want retail price then press 'r' \n";
  cin >> choice;

  if ((choice == 'w') || (choice == 'W')){
    total = price * number ;
    cout << " you need to pay total of $" << total << endl;
  } 
  else if  ((choice == 'r') || (choice == 'R')){
    float subtotal =0.0;
    subtotal = price * number;
    total = subtotal + subtotal * TAX_RATE;
    cout << " You need to pay total of $" << total << endl;
  }

  cout << endl;

return 0;  
}