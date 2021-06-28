/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 28th, 2021, 10:19 AM
 * Purpose:  Testing the Power Function
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Math Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int x,y;
    
    //Initialize variables here
    x=2;
    y=3;
    
    //Map inputs to outputs here, i.e. the process
    cout<<"Using the Power function  "<<x<<"^"<<y<<" = "<<pow(x,y)<<endl;
    cout<<"Exponential Log function  "<<x<<"^"<<y<<" = "<<exp(y*log(x))<<endl;
    
    //Display the results

    return 0;
}