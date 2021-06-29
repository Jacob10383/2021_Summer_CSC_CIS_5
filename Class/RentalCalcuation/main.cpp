/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 29th, 2021, 11:19 AM
 * Purpose:  Rental Calculation
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Library
#include <ctime>      //Time Library
#include <iomanip>    //Format Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    float  minHrs,//Minimum number of hours to rent equipment
           rntlFee,//Rental Fee $'s/hour
           hrsRntd,//Number of hours rented
            charge;//Charge due to rental $'s
    
    //Initialize variables here
    minHrs=4;
    rntlFee=20;//$20/hr
    
    //Map inputs to outputs here, i.e. the process
    hrsRntd=rand()%8+1;//[1-8]hours
    charge=hrsRntd<minHrs?   //Boolean Test
           minHrs*rntlFee:   //True  Result
           hrsRntd*rntlFee;  //False Result
    
    //Display the results
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Minimum Rental Hours = "<<minHrs<<endl;
    cout<<"Rental fee per hour = $"<<rntlFee<<endl;
    cout<<"The charge = $"<<charge<<" for "<<hrsRntd<<" hours!"<<endl;

    return 0;
}