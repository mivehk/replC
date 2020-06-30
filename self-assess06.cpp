#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

double average(ifstream& in_st_par);
void initialize(ofstream& out_st_par);

int main(){

    using namespace std;

    ifstream in_str;
    ofstream out_str;
    //int first, second, third, forth, fifth;
    char out_file[16];

    cout << endl;
    cout<< " This program takes a few numbers from input file \n"
    << " then calculate their average and save it in the file you name.\n"
    <<" Now tell me the name of output file with max 15 characters: ";

    cin>>out_file ;

    in_str.open("input06.txt");
    if (in_str.fail()){
        cout << " Error occurred while reading infile stream";
        exit(1);
    }
    //in_str >> first >> second >> third >> forth >> fifth;

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

    //sum = first + second + third + forth + fifth ;

    avg = average(in_str) ;
    out_str << avg;
    initialize(out_str);
    cout << avg << endl;


    in_str.close();
    out_str.close();

    return 0;
}

double average(ifstream& in_st_par){
    using namespace std;
    
    double next ; 
    int count = 0;
    double sum =0.0;
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