/*#include <iostream>
#include <string>

namespace choices{
    enum class veh_type { passenger=0 , bus=1 , truck=2}; 
};

using namespace std;
using namespace choices;

int main(){
  
    float toll = 0.0;
    //int cnt_exp ;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

//enum class veh_type { passenger , bus , truck};   

    veh_type cnt_exp;
    cout << "Enter your vehicle type: \n" ;
    cin >> cnt_exp ;

    switch (cnt_exp){
        //case 0:
        case veh_type::passenger:
            cout << " for personal automobile you pay $";
            toll=0.5;
            cout << toll << " of dollars";
            break;
        //case 1:
        case veh_type::bus:
            cout << " for bus you pay $";
            toll=1.50;
            cout << toll << " of dollars for toll";
            break;
        //case 2:
        case veh_type::truck:
            cout << " for truck you pay $";
            toll=2.00;
            cout << toll << " of dollars for toll";
            break;  
    } 

cout << endl;

return 0 ;

}
*/

/*
#include <iostream>

using namespace std;
int main(){

    int veh_class;
    float toll;
    cout << " enter your vehicle class \n";
    cin >> veh_class;

    switch(veh_class){
        case 1:
            cout << "Passenger car. \n";
            toll = 0.50;
            cout << toll ;
            break; // interesting that if you skip this break compiler execute next case as well.
        case 2:
            cout << "Bus. \n";
            toll = 1.50;
            cout << toll ;
            break;
        case 3:
            cout << "truck. \n";
            toll= 2.00;
            cout << toll ;
            break;
        default:
            cout << " unknown vehicle class!" << endl;
     
    }
return 0;    
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int n =1024;
    int log = 0;
    for (int i=1;i<n; i=i*2);
    log++;
    cout << n << " " <<log << endl ;

return 0;    
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int n,m;
    for (n=1;n<=10;n++)
        for (m=1;m<=10;m++)
        cout<< n << " times " << m << " = " << n*m << endl;

return 0;
}
*/

/*
#include <iostream>

using namespace std;
int main(){
    int a =9;
    int b =2;

    cout << static_cast<double>(a/b) << endl;
    cout << a/b << endl;
    cout << static_cast<double>(a)/b <<endl;

return 0;    
}
*/
/*
#include <iostream>
#include <cmath>

int factorial(int num_par);
//This function returns facorial of any integer you asked for it

int main(){
using namespace std;

 int num_flowers , total;
 cout<<"Tell me how many flowers you bought? " ;
 cin >> num_flowers;   
 total= factorial(num_flowers);
 cout << "This is number of possible arrangement you can have: " << total << endl;

return 0;
}

int factorial(int num_par){
using namespace std;   
    int total=1;
    if (num_par ==0){
        int j =1;   
        return(j);
    }else{
      for(int i=1 ; i<=num_par ; i++){
          
        total = total * i;   
      } 
    }
    return(total);
}
*/
/*#include <iostream>
#include <cassert>

int main(){

    using namespace std;

    double answer = 1;
    int i=0;
    double n;
    int num_iterations;
    
    cout << "what number to find its square root?" ;
    cin >> n ; 
    cout << "how many time iterate? ";
    cin >> num_iterations;

    assert((n>0)&&(num_iterations>0));
    
    while (i< num_iterations){
        answer = 0.5 * (answer+n/answer);
        i++;
    }
cout << "answer is " << answer ;

cout <<endl;
return 0  ;  
}
*/

#include <iostream>
//#define NDEBUG
#include <cassert>

void initialize();

int main(){
    using namespace std;

    double number;
    int max_iterations = 20;
    double answer = 1 ;
    int i=0;

    initialize();
    cout << " What number do you have in your mind for square root calculation? ";
    cin >> number;
    
    assert(number>0);
    do {
        answer = 0.5 * (answer + number / answer);
        i++;
    } while ( (i< max_iterations)&& (answer != (0.5*(answer +number/answer) )));

    cout << "After "<< i << " attempt using Newton's method"
    << ", The answer is: " << answer << endl ;

    return 0;
}

void initialize(){
    using namespace std;
    cout << endl;
    return;
}













