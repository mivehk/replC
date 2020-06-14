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
int numChipsLeft = 2 ;

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
    cout<< "Try again and select a number equal or less than "<< MaxChipSelection << endl;
    cout << endl;
  }
}while ((numChipsTaken > MaxChipSelection)&&( numChipsLeft>1 ));  


numChipsLeft = numOfInitialChips - numChipsTaken;
MaxChipSelection = floor(numChipsLeft* 0.5);
if(MaxChipSelection ==0){ MaxChipSelection=MaxChipSelection+1 ;}
cout << "now we have " << numChipsLeft << " chips in the pot" << endl; 
  numOfInitialChips = numChipsLeft ;
 

if (numChipsLeft ==0) 
{
  if(player1turn){
     cout << "Game is over! Congradulation " << playerName[1] <<" You Won!";
  }else{
     cout << "Game is over! Congradulation " << playerName[0] << " You won!";
  }
 
}

 player1turn =! player1turn;
} 
while(
  numChipsLeft > 0
  );
cout << endl;

return 0;
}