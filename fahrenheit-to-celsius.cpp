#include <iostream>

double convert_f2c( double fahrenheit_par);
void show_result( double fah_par, double cel_par);
void initialize();

int main(){

using namespace std;
double fahrenheit , celsius;

initialize();

cout<< "bonjour \n";
cout << "vous allez bien? \n";
cout <<"quelle est la temperature \n";
cin >> fahrenheit;
cout << "je ne comprends pas; je demande a' l'ordinateur \n \n";

celsius = convert_f2c(fahrenheit);

show_result ( fahrenheit , celsius);

cout << endl ;
return 0;
}

void initialize(){
    using namespace std;
    cout << endl;
    return;
}


double convert_f2c( double fahrenheit_par){
    using namespace std;
    double celsius;
    celsius=((5.0/9.0)*(fahrenheit_par-32));
    return(celsius);
}

void show_result( double fah_par, double cel_par){
    using namespace std;
    cout << "Temperature is "<< fah_par 
    << " fahrenheit which is close to " << cel_par
    << " celsius";
}