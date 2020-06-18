//This program calculated your annual tax and net income based on your annual gross income
// two different tax rates are applied depending on range of your income

#include <iostream>
#include <math.h>

using namespace std;

int main(){


double gross_income ;
double mid_tax;
double mid_income;
double adv_income;
double adv_tax;
float tax_rate_mid = 0.05;
float tax_rate_adv = 0.2;
float tax_overall;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "enter your gross income $";
cin >> gross_income ;

cout << "you entered $"<< static_cast<float>(gross_income) << endl;

if (gross_income < 15000.00){
    cout << " you don't need to pay any tax this year";
    }
else if ( gross_income >= 15001.00 && gross_income <= 25000.00){
    //tax_rate = 0.05;
    mid_income = gross_income - 15000.00;
    mid_tax = mid_income * tax_rate_mid ;
    //aincome = income - gincome ;
    //income = income - ( income * tax);
    cout << " your net income after $" << mid_tax <<  " of tax is about $" << static_cast<float>(mid_income-mid_tax) << endl ;
   }
else if ( gross_income >25000.00){
    //tax_rate_2 = 0.1;
    mid_income = 10000.00;
    mid_tax = mid_income* tax_rate_mid ;
    adv_income = gross_income - 25000.00;
    adv_tax = adv_income * tax_rate_adv;
    tax_overall = mid_tax + adv_tax ;
    //income = income - ( income * tax);
     cout << " your net income after $" << tax_overall <<  " of tax is about $" << static_cast<float>(gross_income-tax_overall) << endl ;
}

cout << endl;

return 0;
}
