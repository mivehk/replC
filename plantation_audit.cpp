#include <iostream>

using namespace std;

void get_total(int num_par);
void input_data(int a[], int num_par);

int main(){

int num_plantations = 0;

cout << " Tell me how many plantations subscribed for audit? ";
cin >> num_plantations;

int plantations[num_plantations];
input_data(plantations , num_plantations);

    return 0;
}

void input_data(int a[], int num_plan_par){
    for (int i=0 ; i < num_plan_par ; i++){
        get_total(a[num_plan_par]);
    }
    //cout << " total for plantation is " << get_total(num_plan_par) << endl ;
}

void get_total(int num_par){
    int sum =0;
    cout << " Enter number for each departments production count \n"
    << " Ending list with a negative number \n";
    cin >> num_par ;
    while (num_par > 0){
      sum = sum + num_par ; 
      cin>> num_par;
    }
    cout << " Total is: " << sum << endl ;

}

