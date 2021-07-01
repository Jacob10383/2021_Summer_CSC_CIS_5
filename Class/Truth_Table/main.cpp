/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 1st, 2021, 11:30 AM
 * Purpose:  Truth Table
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
    bool x,y;
    
    //Initialize variables here
    //Map inputs to outputs here, i.e. the process
    //Display the results
    
    //Header
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y "
            <<"!X||!Y !(X&&Y) !X&&!Y !(X||Y)"<<endl;
    
    //1st Row
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<endl;
    
    //2nd Row
    x=true;
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"  ";
    cout<<endl;

    return 0;
}