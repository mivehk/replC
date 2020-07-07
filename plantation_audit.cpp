#include <iostream>
#include <cmath>

using namespace std;

void get_total(int& sum_par);
void input_data(int a[], int size_par);
void scale(int a[], int size_par);
int rounded(double total_par);
void graphed(const int a[], int size_par);
void print_asteriks( int n_par);

int main(){

int num_plantations = 0;
cout << " Tell me how many plantations subscribed for audit? ";
cin >> num_plantations;

int plantations[num_plantations];
input_data(plantations , num_plantations);
cout <<endl << " total production for each"
<< " of plants \n";
for (int i =1 ; i <= num_plantations ; i++){
    cout << plantations[i-1] << " ";
    cout <<endl;
}
scale(plantations , num_plantations);
graphed(plantations , num_plantations);

return 0;
}

void scale(int a[], int size_par){
    using namespace std;
    for (int i =0 ; i< size_par ; i++){
        double ast = a[i]/1000.0;
        a[i] = rounded(ast);
        //cout << a[i];
    }
}
int rounded(double total_par){
    using namespace std;
    //double rounded =0.0;
    return(static_cast<int>(floor(total_par + 0.5)));
}
void graphed(const int a[], int size_par){
    using namespace std;
    cout << " units produced in thousands of units: \n";
    for( int i=1 ; i<= size_par ; i++){
        cout << " plantation number " << i << " ";
        print_asteriks(a[i-1]);
        cout << endl;
    }   
}
void print_asteriks(int n_par){
    for (int i=1 ; i<= n_par ; i++){
        cout << "+";
    }
}
void input_data(int a[], int num_par){
    for (int i=0 ; i < num_par ; i++){
        get_total(a[i]);
    }  
}
void get_total(int& sum_par){
    sum_par =0 ;  
    int next;
    cout << " Enter number for each departments production count \n"
    << " Ending list with a negative number \n";
    cin >> next ;
    while (next >= 0){
      sum_par = sum_par + next ; 
      cin >> next;
    }
    cout << " Total is: " << sum_par << endl ;
}

