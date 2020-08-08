#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int randomToss = 0;
  srand(time(0));
  randomToss =(rand()%6)+1 ;
  
  cout << "Dice randomly generated : " << randomToss << endl;
}
