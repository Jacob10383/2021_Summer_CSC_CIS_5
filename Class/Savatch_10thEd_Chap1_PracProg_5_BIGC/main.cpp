/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23, 2021, 11:03 AM
 * Purpose:  Draw a Big C - Banner
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    char let;//The letter used to draw a Big C
    
    //Initialize variables here
    let='C';//Letter used in Big C output
    
    //Display the results
    cout<<"  "<<let<<let<<let<<endl;
    cout<<" "<<let<<"  "<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<let<<endl;
    cout<<" "<<let<<"  "<<let<<endl;
    cout<<"  "<<let<<let<<let<<endl;

    return 0;
}