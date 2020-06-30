#include <fstream>
#include <iostream>
#include <cstdlib>

int main(){

using namespace std;

ifstream in_str;
ofstream out_str;
int first, second, third, forth, fifth;
char out_file[16];

cout<< " this program takes numbers recorded by input file \n"
<< " then calculate their sum in the file you pick\n"
<<"now tell me the name of output file with max 15 characters: ";

cin>>out_file ;


in_str.open("input06.txt");
if (in_str.fail()){
    cout << " error has happened while reading infile stream";
    exit(1);
}
in_str >> first >> second >> third >> forth >> fifth;

out_str.open(out_file , ios::app);
if (out_str.fail()){
    cout << " error has happened while reading outfile stream";
    exit(1);
}

int sum;

sum = first + second + third + forth + fifth ;

out_str << sum ;
cout << sum << endl;


in_str.close();
out_str.close();

    return 0;
}