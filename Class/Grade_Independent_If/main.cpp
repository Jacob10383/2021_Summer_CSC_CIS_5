/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 30th, 2021, 11:00 AM
 * Purpose:  Give a Grade
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random function
#include <ctime>      //Set the random seed function with time
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    unsigned char grade,//Grade = [A,B,C,D,F]
                  score;//Score [0,100]
    
    //Initialize variables here
    score=rand()%51+50;//[50,100]
    
    //Map inputs to outputs here, i.e. the process
    if(score >= 90){
        grade='A';
    }
    if(score >= 80 && score < 90){
        grade='B';
    }
    if(score >= 70 && score < 80){
        grade='C';
    }
    if(score >= 60 && score < 70){
        grade='D';
    }
    if(score < 60){
        grade='F';
    }
    
    //Display the results
    cout<<"Score = "<<static_cast<int>(score)<<" gives a grade = "<<grade<<endl;

    return 0;
}