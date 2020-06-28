#include <iostream>

double convert_f2c( double fahrenheit_par);
void show_result( double fah_par, double cel_par);
void initialize();
void get_input(double& fah_par);

int main(){

    using namespace std;
    double fahrenheit , celsius;

    initialize();

    cout<< "Bonjour \n";
    cout << "Vous allez bien? \n";

    get_input(fahrenheit);
    celsius = convert_f2c(fahrenheit);
    show_result ( fahrenheit , celsius);
    cout << endl ;

return 0;
}

void get_input(double& fah_par){
    using namespace std;
    cout << "Quelle est la temperature d'aujourd'hui? \n";
    cin >> fah_par;
    cout << "Je ne comprends pas; je demande a` l'ordinateur \n \n";
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
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "Temperature is "<< fah_par 
    << " Fahrenheit which is close to " << cel_par
    << " Celsius";
}