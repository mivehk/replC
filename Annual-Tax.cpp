//This program calculates your tax and net income based on your annual gross income
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
float tax_rate_second = 0.12;
float tax_rate_third = 0.22;
float tax_rate_forth = 0.24;
float tax_rate_fifth = 0.32;
float tax_rate_sixth = 0.35;
float tax_rate_seventh = 0.37;
float tax_overall;
int age;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout << "Tell me how old you are? ";
cin >> age;

if ( age < 65){
    cout << "enter your gross income $";
    cin >> gross_income ;

    cout << "you entered $"<< static_cast<float>(gross_income) << endl;

    // this is first tax bracket with total tax exemption 
    if (gross_income <= 12000.00){
        cout << " you don't need to pay any tax this year";
        }
    // this is second tax bracket with tax rate of 12%  
    else if ( gross_income >= 12001.00 && gross_income <= 38700.00){
        mid_income = gross_income - 12000.00;
        mid_tax = mid_income * tax_rate_second ;
        cout << " your net income after $" << mid_tax <<  " of tax reduction is about $" << static_cast<float>(gross_income-mid_tax) << endl ;
    }
    // this is third tax bracket with tax rate of 22%
    else if ( gross_income >=38701.00 && gross_income <= 82500.00){
        mid_income = 26700.00;
        mid_tax = mid_income* tax_rate_second ;
        adv_income = gross_income - 38700.00;
        adv_tax = adv_income * tax_rate_third;
        tax_overall = mid_tax + adv_tax ;
        cout << " your net income after $" << tax_overall <<  " of tax reduction is about $" << static_cast<float>(gross_income-tax_overall) << endl ;
         }
    // this is forth tax bracket with tax rate of 24%    
    else if( gross_income >= 82501.00 && gross_income <= 157500.00){
        float third_brac_income = 43800.00;
        float second_brac_income = 26700.00;
        float forth_barc_income = gross_income - 82500.00;
        float second_tax = second_brac_income * tax_rate_second;
        float third_tax = third_brac_income * tax_rate_third;
        float forth_tax = forth_barc_income * tax_rate_forth;
        float total_tax = second_tax + third_tax + forth_tax;
        
cout << " your net income after $" << total_tax <<  " of tax reduction is about $" << static_cast<float>(gross_income-total_tax) << endl ;
     }
    // this is fifth tax bracket with tax rate of 32%
    else if( gross_income >= 157501.00 && gross_income <= 200000.00){
        float third_brac_income = 43800.00;
        float second_brac_income = 26700.00;
        float forth_brac_income = 75000.00;
        float fifth_brac_income = gross_income - 157500.00;
        float second_tax = second_brac_income * tax_rate_second;
        float third_tax = third_brac_income * tax_rate_third;
        float forth_tax = forth_brac_income * tax_rate_forth;
        float fifth_tax = fifth_brac_income * tax_rate_fifth;
        float total_tax = second_tax + third_tax + forth_tax + fifth_tax;
        
cout << " your net income after $" << total_tax <<  " of tax reduction is about $" << static_cast<float>(gross_income-total_tax) << endl ;
     }
    // this is sixth tax bracket with tax rate of 35% 
    else if( gross_income >= 200001.00 && gross_income <= 500000.00){
        float third_brac_income = 43800.00;
        float second_brac_income = 26700.00;
        float forth_brac_income = 75000.00;
        float fifth_brac_income = 42500.00;
        float sixth_brac_income = gross_income - 200000.00;
        float second_tax = second_brac_income * tax_rate_second;
        float third_tax = third_brac_income * tax_rate_third;
        float forth_tax = forth_brac_income * tax_rate_forth;
        float fifth_tax = fifth_brac_income * tax_rate_fifth;
        float sixth_tax = sixth_brac_income * tax_rate_sixth;
        float total_tax = second_tax + third_tax + forth_tax + fifth_tax + sixth_tax;
        
cout << " your net income after $" << total_tax <<  " of tax reduction is about $" << static_cast<float>(gross_income-total_tax) << endl ;
     }
     // this is seventh tax bracket with tax rate of 37% 
     else if( gross_income >= 500001.00){
        float third_brac_income = 43800.00;
        float second_brac_income = 26700.00;
        float forth_brac_income = 75000.00;
        float fifth_brac_income = 42500.00;
        float sixth_brac_income = 300000.00;
        float seventh_brac_income = gross_income - 500000.00;
        float second_tax = second_brac_income * tax_rate_second;
        float third_tax = third_brac_income * tax_rate_third;
        float forth_tax = forth_brac_income * tax_rate_forth;
        float fifth_tax = fifth_brac_income * tax_rate_fifth;
        float sixth_tax = sixth_brac_income * tax_rate_sixth;
        float seventh_tax = seventh_brac_income * tax_rate_seventh;
        float total_tax = second_tax + third_tax + forth_tax + fifth_tax + sixth_tax + seventh_tax;
        
cout << " your net income after $" << total_tax <<  " of tax reduction is about $" << static_cast<float>(gross_income-total_tax) << endl ;
     }  
    } else {
        cout << " You don't need to pay income tax! ";
    }

cout << endl;

return 0;
}

