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

    cout << "revised number is: " << o << endl;
}

    return 0;
}

int revise_vac ( int num_par){
    return num_par+5;
}
*/
/*
#include <iostream>

using namespace std;

void fill_up( int a[] , int num_scores_par);
void throw_out( const int a[], int num_par);

int main(){
    int number =5 ; //, num =10;
    int score[number];
    //int virtue[num];
    fill_up( score , number);
    //fill_up ( virtue , num);
    throw_out(score , number);
    
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
void throw_out(const int a[] , int num_par){
    cout << "You entered these numbers : \n";
    for (int j=0 ; j<num_par ;j++)
     cout << a[j] << " " << endl;
}
*/
/*
#include <iostream>
#include <cmath>

using namespace std;


void get_total(int& sum);
void get_input(int a[], int size_par);
void scale(int a[], int size_par);
int rounded(double num_par);
void graph(int a[], int size_par);
void print_dollarsign(int num);

int main(){

    int num_vineyards = 0;
    cout << " Tell me how many vineyards you visited? ";
    cin >> num_vineyards ;

    int vineyards[num_vineyards];
    get_input(vineyards,num_vineyards);
    scale(vineyards,num_vineyards);
    graph(vineyards,num_vineyards);


    return 0;
}

void get_total(int& sum_par){
    sum_par=0;
    int next ;
    cin >> next;
    while ( next >= 0){
        sum_par=sum_par+next;
        cin >> next;
    } 
  cout << "total is: " << sum_par << endl;
}
void get_input(int a[], int size_par){
   cout << " This code calculates total bottle of wines you purchased \n"
   << "  from each vineyards when you enter each type and also returns * for every 10 bottles \n"
   << endl << " Mark each vineyards end of list with negtive number\n";
   for (int i=0 ; i<size_par ; i++){
       cout<<" for vineyards number "<< i+1 <<" you have : ";
       get_total(a[i]);
   }
}
void scale(int a[], int size_par){
using namespace std;
for ( int i=0 ; i<size_par ; i++){
    a[i] = a[i]/10.0;
}
}
int rounded(double num_par){
using namespace std;
return(static_cast<int>(floor(num_par+0.5)));
}
void graph(int a[], int size_par){
    for(int i=0 ; i<size_par; i++){
        cout << " for vineyards #" << i+1 << " ";
        print_dollarsign(a[i]);
        cout << endl;
    }
}
void print_dollarsign(int num){
for(int i=0 ; i<num ; i++){
    cout << "$";
}
}
*/

// #include <iostream>
// #include <cctype>
// using namespace std;
// void fill_array(int a[], int size_par , int& num_filled_par);
// double calc_avg( int a[], int num_filled_par);
// void show_diff(int a[], int num_filled_par);
// int search(int a[], int num_filled_par , int quoi);
// void skip_it();

// int main(){


// int  max_size ,num_size;

// cout << " Tell me how many vineyards you visited: ";
// cin >> max_size;

// int vineyards[max_size];

// /*int num_size;
// cout << " Tell me how many pages you want to use of " << max_size << endl;
// cin>> num_size;
// */

// fill_array(vineyards, max_size ,num_size);
// show_diff( vineyards,num_size);

//    char conf;
// do {
//     int quand;
//     cout << " Now tell me which purchase you want to double check? ";
//     cin >> quand;
//     int t ;
//     t = search( vineyards , num_size , quand);
//     if (t == -1){
//         cout << " We could not find this purchase in vineyards list , try again";
//     } else {
//         cout << " Your search for "<< quand <<" bottles was from vineyards# " << t <<endl;
//     }
//     cout << " Do you want to search for another purchase? (Yes/no): ";
//      cin >> conf;
//      skip_it();
// } 
// while (
//     (conf !='n')&&(conf !='N')
// );

//     return 0;
// }

// void fill_array(int a[], int size_par , int& num_filled_par){
//    /*  for (int i=0 ; i< size_par ; i++){
//         cin >> a[i];
//         } */

//         int next , i=0;
//         cout << " Give me total bottles purchased from each Vineyard \n" 
//         << " ending your list with negative number when asked about vineyard number " << (size_par+1) << endl;
//         cout << "Now tell me how many bottles from vineyards " << i+1 << " : " ;
//         cin >> next;
//         while ((next >=0)&&(num_filled_par < size_par)){
//             a[i]=next;
//             i++;
//             cout << "Now for Vineyard " << i+1 << " : " ;
//             cin >> next;
//         }
//         num_filled_par = i;
// }

// double calc_avg( int a[], int num_filled_par){
//     double total =0.0; 
//     for (int i=0 ; i< num_filled_par; i++){
//       total = total + a[i]; 
//     }
//     if (num_filled_par >0){
//        return ( total/num_filled_par) ;
//     } 
//     else{ 
//         cout << " you need to enter a positive integer for size\n";
//         }
//        return 0; 
// }

// void show_diff(int a[], int num_filled_par){
//      double average_is = 0.0 ;
//      average_is= calc_avg( a , num_filled_par);
//     for ( int i=0 ; i<num_filled_par ; i++){
//         cout << " difference from vineyards number " << i+1 <<" purchased bottles of "<< a[i]<< " to average "<< average_is<< " is "
//         << (a[i] - average_is) << endl ;
//     }
// }

// int search(int a[], int num_filled_par , int quoi){
//     bool found =false;
//     int i=0 ;
//     while((!found)&&(i<num_filled_par)){
//         if (quoi == a[i]){
//             return i+1;
//         }
//         i++;
//     } return -1;
// }

// void skip_it(){
//     char symbol;
//     do { cin.get(symbol);} 
//     while(
//         (! isspace(symbol))
//     );
// }

// #include <iostream>
// #include <cctype>
// using namespace std;


// void create_array(int a[] , int size_par , int& used_size_par);
// double calc_avg(int a[] , int used_size_par);
// void show_diff(int a[] , int used_size_par);
// int search(int a[], int search_par , int used_size_par);
// void skip_it();

// int main(){
//    int max_classes;
//    cout << "How many classes you took this semester? ";
//    cin >> max_classes;

//    int used_size;
//    int classes[max_classes];

//    create_array( classes, max_classes,used_size );
//    show_diff(classes , used_size);
//    char sym;
//    int grade;
//    do{
//        cout << " tell me the grade which you are searching for :";
//        cin >> grade;
//        int t = search( classes , grade , used_size);
//        if ( t == -1){
//            cout << " couldn't find your grade" <<endl;
//        }else{
//            cout << " we found your grade " << grade << " at position " << t+1<<endl;
//        }
//        cout << " do you want to run another search? (Yes/No) ";
//        cin >> sym;
//        skip_it();
//    }while(
//            (sym !='n')&&( sym !='N')
//            );


//     return 0;
// }

// void create_array(int a[] , int size_par , int& used_size_par){
//     int next , index =0;
//     cout<< " Grade entry for each course until "<< size_par+1 << " with negative number \n";
//     cout << " Now enter your grade for course #" << index+1 <<" : ";
//     cin >> next ;
//     do {
//         a[index]=next;
//         index++;
//         cout << " Now time to enter your course #" << index+1 << " : ";
//         cin >> next;
//     }while(
//             ((used_size_par<size_par)&&(next>0))
//             );
//     used_size_par = index ;
// }
// double calc_avg(int a[] , int used_size_par){
//     double avg =0.0;
//     int total=0 ;
//     for (int i=0 ; i<used_size_par ; i++){
//         total = total + a[i];
//     }
//     return total/(used_size_par+1);

// }
// void show_diff(int a[] , int used_size_par){
//     double avg = calc_avg(a , used_size_par);
//     for (int i=0 ; i<used_size_par ; i++){
//         cout << a[i] << " is your grade #" << i+1<< " and it differ "<<a[i]-avg<< " from average grade of "<<avg << endl;
//     }

// }
// int search(int a[], int search_par , int used_size_par){
//     //bool found =false;
//     for (int i=0 ; i < used_size_par ; i++){
//             if (a[i] == search_par){
//             return i;
//             }
//     }
//     return -1;
// }

// void skip_it(){
//     char symbol;
//     do {cin.get(symbol);}
//     while(! isspace(symbol));
// }

#include <iostream>
#include <cctype>
using namespace std;

int find_min_index(const int a[] , int start_index_par ,int used_size_par);
void swap( int& first_par , int& second_par);
void create_array(int a[] , int size_par , int& used_size_par);
int search(int a[], int search_par , int used_size_par);
void skip_it();
void sort( int a[] , int used_size_par);

int main(){
   int max_courses;
   cout << " how many courses you took? ";
   cin >> max_courses;

   int classes[max_courses];
   int used_size;
   create_array(classes , max_courses , used_size);
   sort( classes ,used_size);

   char sym;
    int grade;
    do{
        cout << " tell me the grade which you are searching for :";
        cin >> grade;
        int t = search( classes , grade , used_size);
        if ( t == -1){
            cout << " couldn't find your grade" <<endl;
        }else{
            cout << " we found your grade " << grade << " at position " << t+1<<endl;
        }
        cout << " do you want to run another search? (Yes/No) ";
        cin >> sym;
        skip_it();
    }while(
            (sym !='n')&&( sym !='N')
            );




    return 0;
}
void sort( int a[] , int used_size_par){
    for ( int i=0 ; i<used_size_par ; i++){
        int t = find_min_index(a , i ,used_size_par);
        swap(a[i],a[t]);
    }
}

int find_min_index(const int a[] , int start_index_par ,int used_size_par){
    int index_min , min;
    index_min = start_index_par;
    min = a[start_index_par];
    for ( int i=start_index_par+1 ; i <used_size_par ; i++){
        if (a[i] < min ){
            index_min =i ;
            min = a[i];
        }
    }
    return index_min;
}
void swap( int& first_par , int& second_par){
    int temp;
     temp = first_par ;
    first_par = second_par ;
    second_par = temp ;
}

void create_array(int a[] , int size_par , int& used_size_par){
    int next , index =0;
    cout<< " Grade entry for each course until "<< size_par+1 << " with negative number \n";
    cout << " Now enter your grade for course #" << index+1 <<" : ";
    cin >> next ;
    do {
        a[index]=next;
        index++;
        cout << " Now time to enter your course #" << index+1 << " : ";
        cin >> next;
    }while(
            ((used_size_par<size_par)&&(next>0))
            );
    used_size_par = index ;
}

int search(int a[], int search_par , int used_size_par){
    //bool found =false;
    for (int i=0 ; i < used_size_par ; i++){
        if (a[i] == search_par){
            return i;
        }
    }
    return -1;
}

void skip_it(){
    char symbol;
    do {cin.get(symbol);}
    while(! isspace(symbol));
}