#include <iostream>

using namespace std;

int get_one_season();
//This function abstracts number of items shopped in one store

int main(){

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

int num_seasons;
double total , subtotal , count ;

cout << " tell me how many nights you looked for bird nests: ";
cin >> num_seasons;

for ( count=1 ; count <= num_seasons; count++){
    subtotal = get_one_season();
    total = total+ subtotal;
}
cout << "this is total number of eggs you collected: " << total;
cout << endl;

return 0;
}

int get_one_season(){
    cout << "Give me number of eggs you collected from each nest \n" ;
    cout << " and after last nest, enter a negative number\n";
    int next;
    double subtotal = 0;
    cin >> next ;
    while (next >=0){
        subtotal = subtotal + next ; 
        cin>>next;   
    }   
    return(subtotal) ; 
}