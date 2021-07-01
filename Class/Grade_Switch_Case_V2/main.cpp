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
    switch(score){
        case 100:case 99:case 98:case 97:case 96:
        case 95:case 94:case 93:case 92:case 91:
        case 90:grade='A';break;
        case 89:case 88:case 87:case 86:
        case 85:case 84:case 83:case 82:case 81:
        case 80:grade='B';break;
        case 79:case 78:case 77:case 76:
        case 75:case 74:case 73:case 72:case 71:
        case 70:grade='C';break;
        case 69:case 68:case 67:case 66:
        case 65:case 64:case 63:case 62:case 61:
        case 60:grade='D';break;
        default:grade='F';
    }
    
    //Display the results
    cout<<"Score = "<<static_cast<int>(score)<<" gives a grade = "<<grade<<endl;

    return 0;
}