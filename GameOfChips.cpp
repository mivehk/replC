#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <math.h>

using namespace std;

int main() {

bool gameOver =false ;
bool player1turn = true;  

srand(time(0));
const int NUMC = 100;
int numOfInitialChips = 0;
int numChipsTaken = 0;
int MaxChipSelection = 0;
int numChipsLeft = 0 ;

string playerName[2] ;
cout << "Welcome player one , what is your name? " << endl;
cin >> playerName[0];
cout << "Welcome player two , what is your name? " << endl;
cin >> playerName[1];



numOfInitialChips = static_cast<int>(rand()%NUMC)+1 ;
cout << "Game of chips , starting with "<< numOfInitialChips << endl;

MaxChipSelection = floor(numOfInitialChips* 0.5);


do{
do{
  if (player1turn){
  cout << "Hello, " << playerName[0] << endl;
}else{
  cout << "Hello, " << playerName[1] << endl;
}
cout << "How many chips you want?  up to: "<< MaxChipSelection << endl ;
cin >> numChipsTaken ;

 cout << endl ;
  if(numChipsTaken > MaxChipSelection){
    cout<< "Select a number less than "<< MaxChipSelection << endl;
  }
}while (numChipsTaken > MaxChipSelection);  


numChipsLeft = numOfInitialChips - numChipsTaken;
MaxChipSelection = floor(numChipsLeft* 0.5);
cout << "now we have " << numChipsLeft << " chips in the pot" << endl; 
  numOfInitialChips = numChipsLeft ;
  player1turn =! player1turn;

} 
while(
  numChipsLeft > 0
  );

}