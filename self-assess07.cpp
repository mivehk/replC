/*#include <iostream>

using namespace std;

int main(){
    int max=0 , num_students ;

    cout << " tell me how many students you have in this class? \n" ;
    cin >> num_students;

    int scores[ num_students];
    

    cout << " now enter their scores: ";
    //cin >> scores[0];
    //max = scores[0];

    for (int i=0 ; i< num_students; i++){
        cin >> scores[i];
        if ( scores[i] > max){
            max = scores[i];
        }
        //cout << max;
    }
    cout << " this is how off are each score from max score \n";

    for ( int i=0 ; i<num_students ; i++){
        cout << " Your score " << i+1 << " is " << scores[i] << " and off by "
        << max-scores[i] << endl; 
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    using namespace std;
    char alpha[4] = {'a','b','c','d'};
    char beta[4];
    int i =0;
      for (int x: alpha)
      {
          //for (char y: beta)
          //{
           //y= x+1;
           //for (int i=0 ; i<5 ; i++)
           //{
             beta[i]=x+1 ;  
             cout << beta[i] << endl; 
             i++;  
           //}
            
          //}          
      } 
    //}
    cout << "last indexed variable in beta array is: " << beta[3] << endl ;
    return 0;
}
*/
/*
#include <iostream>

using namespace std;

int revise_vac (int num_par);

int main(){

int num_emp =0 ;
int vac_days[num_emp];

cout << " How many employees you have? ";
cin >> num_emp;

for ( int i=0 ; i < num_emp ; i++){
    cout << "Enter vacation days of emplyee number "<< i+1 << endl;
    cin >> vac_days[i] ;
     int o = revise_vac(vac_days[i]);

    cout << "revised number is: ºπºπ/*" << o << endl;
}

    return 0;
}

int revise_vac ( int num_par){
    return num_par+5;
}
*/

#include <iostream>

using namespace std;

void fill_up( int a[] , int num_scores_par);

int main(){
    int number =5;
    int score[number];
    fill_up( score , number);
    
    return 0;
}

void fill_up(int a[],int num_scores_par){
    using namespace std;
    cout << " enter " << num_scores_par << " numbers: \n";
    for ( int i=0 ;i<num_scores_par ; i++)
    cin >> a[i];
    num_scores_par--;
    cout << "the last array index used is " << num_scores_par << endl;
}