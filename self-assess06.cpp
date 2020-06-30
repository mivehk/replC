#include <fstream>
#include <iostream>
#include <cstdlib>

int main(){

using namespace std;

ifstream in_str;
ofstream out_str;
int first, second, third, forth, fifth;

in_str.open("input06.txt");
if (in_str.fail()){
    cout << " error has happened while reading infile stream";
    exit(1);
}
in_str >> first >> second >> third >> forth >> fifth;

out_str.open("output06.txt");
if (in_str.fail()){
    cout << " error has happened while reading outfile stream";
    exit(1);
}

int sum;

sum = first + second + third + forth + fifth ;

out_str << sum ;

in_str.close();
out_str.close();

    return 0;
}