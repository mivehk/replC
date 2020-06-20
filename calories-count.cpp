#include <iostream>

using namespace std;
int main(){
    int numbers;
    float calories , total_calories =0 ;


    cout << " Tell me how many things you ate today? " ;
    cin >> numbers ;

    cout <<"OK, now i am going to ask you enter calories for each item \n";
    int count=1;
    while (count <= numbers){
        cout << " Enter calories for item "<< count << " ? " ;
        cin >> calories ;
        total_calories=total_calories+ calories; 
        count++;       
    }
    cout << " Believe it! you consumed " << total_calories << " calories today!\n" ;

return 0;
}