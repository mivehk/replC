#include <iostream>
#include <cmath>
const double PI=3.14159;


double dollar_per_sqrinch( double diameter_par , double price_par);

double dollar_per_sqrinch( double lenght_par , double width_par , double price_per);

int main(){
    using namespace std;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    double size , cost ,length , width ;
    int count =0;
    int number = 1;

//cout << " Skip the name and tell me how many pizza you have in your menu? ";
//cin >> number;
        char shape ;

//for ( int count=1 ; count<=number ; count++ ){

        cout << "Select shape of pizza you sell: \n"
             << "   for square enter S \n" 
             << "   for round enter R \n" 
             << "Enter your choice: " ;
        cin >> shape;
        if ( (shape == 'r') || (shape == 'R')){

        cout << "Enter the size of your pizza in inch: " ;
        cin >> size;
        cout << "Enter the price: $";
        cin >> cost ;  
         double better_buy;    
        better_buy = dollar_per_sqrinch(size , cost);
        cout << "This choice asks for " << better_buy << " of dollar per square inch \n";
        }     
         else if ( (shape == 's') || (shape =='S') ){
            cout << " Enter lenght and width of pizza with space between them like '16 10': ";
            cin >> length >> width ;
            cout << "Enter price $";
            cin >> cost;
         double better_buy2= dollar_per_sqrinch( length , width , cost);   
            cout << " This choice asks for " << better_buy2 << " of dollar per square inch \n";
        }
    cout << endl;
    
       // }

    
       
return 0;    
}

double dollar_per_sqrinch( double diameter_par , double price_par){
    //cout.setf(ios::fixed);
    //cout.setf(ios::showpoint);
    //cout.precision(2);
    
    double area;
    area = pow((diameter_par/static_cast<double>(2)),2)* PI;
    return(price_par / area);
}

double dollar_per_sqrinch( double length_par , double width_par , double price_par){
    double area ;
    area = length_par * width_par ;
    return ( price_par / area);
}