#include <iostream>
#include <ctime>
#include <cstdlib> 
#include <math.h>

using namespace std;

int main() {

srand(time(0));
const int numc = 100;
int numOfInitialChips = 0;
int numChipsTaken = 0;
int MaxChipSelection = 0;
int numChipsLeft = 0 ;
numOfInitialChips = static_cast<int>(rand()%numc)+1 ;
cout << "Game of chips , starting with "<< numOfInitialChips << endl;

MaxChipSelection = floor(numOfInitialChips* 0.5);


cout << "How many chips you want?  up to: "<< MaxChipSelection << endl ;
cin >> numChipsTaken ;
numChipsLeft = numOfInitialChips - numChipsTaken;

cout << "now we have " << numChipsLeft << " chips in the pot" << endl; 

//numChipsTaken = static_cast<int>((rand()%MaxChipSelection)+1);


}