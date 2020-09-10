//
// Created by kayvan mivehnejad on 8/13/20.
// Netid = km5285

#include <iostream>
#include <vector>

using namespace std;

void isMoreEven( int number);
int isItMoreEven (int number);
int main(){
    bool is_minus_one = false;
    int next;
    int *pointer;
    pointer = new int [20];
    int i=0;
    cout <<"This program gets up to 20 integers and analyze if they are moreeven. \n";
    cout << "Please enter list of numbers ended with negative one as last number: \n";

    while ( is_minus_one ==false){
        cin>>next;
        if (next == -1){
            is_minus_one =true;
        }else{
            pointer[i]=next;
            i+=1;
        }
    };

  int response;
  int even_collect=0 , odd_collect=0;
   for(int j=0 ; j<i ; j+=1){

       //cout<< pointer[j]<<" ";
       //isMoreEven(pointer[j]);
       response =isItMoreEven(pointer[j]);
       if (response==1){
           even_collect+=1;
       } else if( response ==-1 || response==0){
           odd_collect+=1;
       }
   }
   cout << "totally we have "<<even_collect<<" moreeven numbers and "<<odd_collect<<" non moreeven numbers";

    return 0;
}
void isMoreEven( int number){
    int q , r ;
    int even=0 , odd=0 ;
    int orig_number =number;
    do{
        q = number / 10;
        r = number % 10;
        number =q;
        if( r % 2 == 0){
          even +=1;
        } else{
            odd +=1;
        }
    }
    while( q != 0);
    //cout<< "number of evens: "<< even <<endl;
    //cout << "number of odds: "<< odd <<endl;
    if (even > odd){
        cout<<orig_number<<" is moreeven with "<<even<<" even digits and "<<odd<<" odd digits."<<endl;
    } else if (even < odd){
        cout<<orig_number<<" is NOT moreeven with "<<even<<" even digits and "<<odd<<" odd digits."<<endl;
    } else if ( even == odd){
        cout<<orig_number<<" is NOT moreeven with "<<even<<" even digits and "<<odd<<" odd digits."<<endl;
    }
}
int isItMoreEven (int number){
    int q , r ;
    int even=0 , odd=0 ;
    int orig_number =number;
    do{
        q = number / 10;
        r = number % 10;
        number =q;
        if( r % 2 == 0){
            even +=1;
        } else{
            odd +=1;
        }
    }
    while( q != 0);
    if (even > odd){
        return 1;
    } else if (even < odd){
        return -1;
    } else if ( even == odd){
        return 0;
    }

}
