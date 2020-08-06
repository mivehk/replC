//
// Created by kayvan mivehnejad on 7/8/20.
//

#include <iostream>

using namespace std;
void get_data( int a[], int size_par , int& num_par);
double get_avg( int a[] , int num_par);
void show_diff(int a[], int num_par);

int main(){
    int total , numbers;
    cout << "Tell me how many entry you desire: ";
    cin>> total;
    int vineyards[total];
    get_data(vineyards , total , numbers );
    show_diff(vineyards ,numbers );

    return 0;
}

void get_data( int a[], int size_par , int& num_par){
    int next ,i=0 ;
    cin>> next;
    while ((next>=0)&&(num_par<size_par)){
        a[i] = next;
        i++;
        cin >>next;
    }
    num_par = i;
}
double get_avg( int a[] , int num_par){
    double total =0.0;
    int count=0;
    for ( int i=0 ; i<num_par ; i++){
        total = total+a[i];
        count++;
    }
    if (num_par >0){
        return( total/count);
    } else{
        cout << " you did not enter values! ";
        return 0;
    }
}

void show_diff(int a[], int num_par){
    double average = get_avg(a , num_par) ;
    for (int i=0 ; i<num_par ; i++){
        cout<<" your entry " << i+1 << " is " << a[i] << " and differs " << (a[i] - average) << " from average.";
        cout << endl;
    }

}