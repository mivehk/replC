#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

double average(ifstream& in_st_par);

int main(){

using namespace std;

ifstream in_str;
ofstream out_str;
//int first, second, third, forth, fifth;
char out_file[16];

cout<< " this program takes numbers recorded by input file \n"
<< " then calculate their average in the file you pick\n"
<<"now tell me the name of output file with max 15 characters: ";

cin>>out_file ;


in_str.open("input06.txt");
if (in_str.fail()){
    cout << " error has happened while reading infile stream";
    exit(1);
}
//in_str >> first >> second >> third >> forth >> fifth;

out_str.open(out_file , ios::app);
if (out_str.fail()){
    cout << " error has happened while reading outfile stream";
    exit(1);
}

double avg;

//sum = first + second + third + forth + fifth ;

avg = average(in_str) ;
out_str << avg;
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