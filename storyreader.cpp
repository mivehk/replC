//
// Created by kayvan mivehnejad on 9/12/20.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string* string_reader( int& strArr_size);
string* string_reader2( int& strArr_size);
vector <string> string_reader3();
void string_reader4( vector <string>& outvector);

int arr_main();
int vector_main();

int main(){
    vector_main();
    //arr_main();
}

int arr_main(){
    int test;
    string* teststr;
    teststr = string_reader2(test);

    cout<<"Your text is: \n";
    for(int i=0 ; i<test; i+=1){
        cout<<i+1<<". "<<teststr[i] <<endl;
    }

    delete [] teststr;
    teststr =NULL;

    return 0;
}
int vector_main(){
    vector<string> string_reader;
    //string_reader = string_reader3();
    string_reader4( string_reader);

    cout<<"Your story is recorded by line numbers: \n";
    for(int i=0 ; i<string_reader.size(); i+=1){
        cout<<i+1<<". "<<string_reader[i] <<endl;
    }

    //delete [] teststr;
    //teststr =NULL;

    return 0;
}
string* string_reader( int& strArr_size){
   int strArr_pr ;
   string* strs;
   //string each_str;

   cout<<"please enter number of lines: \n";
   cin>>strArr_pr;
   cin.ignore(1);
   strs= new string [strArr_pr];
   cout<<"please enter "<< strArr_pr << " lines: \n";
   for (int i=0 ; i<strArr_pr ; i+=1){
       //each_str="";
        getline(cin , strs[i]);
        //strs[i]=each_str;
   }
   strArr_size = strArr_pr;
   return strs;
}
/*string* string_reader2( int& strArr_size){
    int strArr_pr;
    string* strgs;
    bool emptyLine;
    cout<<"please enter your phrases until last empty line: \n";
    emptyLine = false;

    string teststr;
    int initialized=1;
    int used =0;
    string* strgsnew;
    strgs = new string[initialized];
    while( emptyLine ==false){
        getline(cin ,teststr);
            if(teststr !="") {
                //getline(cin , strgs[i]);
                strgs[used] = teststr;
                used += 1;
                if (initialized == used) {
                    initialized *= 2;
                    strgsnew = new string[initialized];
                    for (int j = 0; j <= used; j += 1) {
                        strgsnew[j] = strgs[j];
                    }
                   delete [] strgs;
                }
            }
           else{
               emptyLine =true;
           }
        strgs =strgsnew ;
    }
    strArr_size =used ;
    return strgs;
}*/
string* string_reader2( int& strArr_size) {
    int strArr_localPr;
    string* StrArr ;

    bool empty_line = false;
    string tempstr;
    string* newStrArr;
    int ArrPhysicalSize =1;
    int ArrUsedSize =0;
    StrArr =new string[ArrPhysicalSize];

    cout<<"please enter lines ending with empty line: \n";
    while (empty_line ==false){
        getline(cin , tempstr);
        if (tempstr !=""){
            StrArr[ArrUsedSize] = tempstr;
            ArrUsedSize+=1;
            if(ArrPhysicalSize == ArrUsedSize){
                ArrPhysicalSize*=2;
                newStrArr = new string [ArrPhysicalSize];
                for(int i=0 ; i<=ArrUsedSize ; i+=1){
                    newStrArr[i] = StrArr[i];
                }
        }
            delete [] StrArr;
            StrArr = NULL;
            StrArr = newStrArr;

    }else{
            empty_line = true;
        }
}
    strArr_size=ArrUsedSize;
    return StrArr;
}
vector <string> string_reader3(){
    vector<string> string_pr;
    bool empty_line =false;
    string tempstr_pr;
    cout<<"please write your story ended with empty line: \n";

    while( empty_line ==false){
        getline(cin , tempstr_pr);
        if( tempstr_pr !=""){
            string_pr.push_back(tempstr_pr);
        }else{
            empty_line=true;
        }
    }
    return string_pr;
}
void string_reader4( vector <string>& outvector){
    vector<string> outvector_pr;
    bool emptyline_entered =false;
    string tempstr;
    cout<<"write your story ending with empty line: \n";

    while(emptyline_entered ==false){
        getline(cin , tempstr);
        if( tempstr !=""){
            outvector_pr.push_back(tempstr);
        }else{
            emptyline_entered =true;
        }
    }
    outvector =outvector_pr;

}

