#include <iostream>
#include <cmath>
using namespace std;

double dollar_per_sqrinch( double diameter_par , double price_par);

int main(){

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double size , cost ;
    int count =0;
    int number = 1;

 
        cout << " Skip the name and tell me how many pizza you have in your menu? ";
        cin >> number;
        
      for ( int count=1 ; count<=number ; count++ ){

        cout << "Enter the size of your pizza in inch: " ;
        cin >> size;
        cout << "Enter the price: $";
        cin >> cost ;

        double better_buy;    
        better_buy = dollar_per_sqrinch(size , cost);
        cout << "choice number "<< count <<" asks for " << better_buy << " of dollar per square inch \n";
    
        }

    
       
return 0;    
}

double dollar_per_sqrinch( double diameter_par , double price_par){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    const double PI=3.14159;
    double area;
    area = pow((diameter_par/static_cast<double>(2)),2)* PI;
    return(price_par / area);

}