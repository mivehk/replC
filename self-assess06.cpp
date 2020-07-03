#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
double average(ifstream& in_st_par);
void initialize(ofstream& out_st_par);
void new_line();
int main(){
    using namespace std;
    ifstream in_str;
    ofstream out_str;
    ofstream outfi_num;
    char out_file[16];
    cout << endl;
    cout<< " This program asks a few numbers from you \n"
    << " then calculate their average and save it in the file you name.\n";
    outfi_num.open("input06.txt");
    if (outfi_num.fail()){
        cout << " Error occurred while opening collection file";
    }
    double number;  
    int ccount = 0;
    char ans; 
    do { 
        cout << " Now tell me numbers you want to add: " ;
        cin >> number;
        ccount++;
        outfi_num << static_cast<double>(number) ;
        initialize(outfi_num); 
        cout << " Is this your last number? (Yes/No):";
        cin >> ans;
        new_line();
         }
    while(( ans !='Y' ) && ( ans !='y' ));
    cout <<" Now tell me the name of output file with max 15 characters: ";
    cin>>out_file ;
<<<<<<< HEAD
    in_str.open("input06.txt");
=======
    in_str.open("input06.txt" ,ios::app);
>>>>>>> d73a156ca86bf2fb9976c9c94e390fa9d5695043
    if (in_str.fail()){
        cout << " Error occurred while reading infile stream";
        exit(1);
    }
    out_str.open(out_file , ios::app);
    if (out_str.fail()){
        cout << " Error occurred while reading outfile stream";
        exit(1);
    }
    out_str.setf(ios::showpoint);
    out_str.precision(3);
    cout.setf(ios::showpoint);
    cout.precision(3);
    double avg;
    avg = average(in_str) ;
    out_str << avg;
    initialize(out_str);
    cout << avg << endl;
    in_str.close();
    out_str.close();
    outfi_num.close();
    return 0;
}
double average(ifstream& in_st_par){
    using namespace std;
    double next ; 
    int count = 0;
    double sum =0;
        while (in_st_par >> next){
            sum = sum + next;
            count++;
        }   
    return(sum/count);
}
void initialize(ofstream& out_st_par){
    using namespace std;
    out_st_par << endl;
    return;
}
void new_line(){
    char symbol;
    do{
        cin.get(symbol);
    } while (symbol !='\n');
}