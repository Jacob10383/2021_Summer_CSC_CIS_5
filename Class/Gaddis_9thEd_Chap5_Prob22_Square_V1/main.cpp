/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:27 AM
 * Purpose:  Display a Square using loops
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
    int nRows,//Number of Rows
        nCols;//Number of Colunns
    
    //Initialize variables here
    cout<<"This program displays a Square"<<endl;
    cout<<"Input the dimensions from 1 to 15"<<endl;
    do{
        cin>>nRows;
        nCols=nRows;
    }while(!(nRows>=1 && nRows<=15));
    
    //Display the results
    cout<<endl;
    for(int row=1;row<=nRows;row++){
        for(int col=1;col<=nCols;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //Exit stage right
    return 0;
}