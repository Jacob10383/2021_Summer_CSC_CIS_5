/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 12th, 2021, 11:19 AM
 * Purpose:  All Ways to write a function
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Power/Exponential/Log functions
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float PERCENT=100.0f;//Conversion from percentage

//Function Prototypes
float save1(float,float,int);//Using the Power Function
float save2(float,float,int);//Using the Exponential-Log Function
float save3(float,float,int);//Using For-Loop
float save4(float,float,int);//Using Recursion
float save4(float,float,float);//Illustrate Overloading/Same Function Name
float save6(float,float,int=12);//Illustrate a Defaulted Parameter
void  save7(float&,float,int);//Pass by reference
int   save8(float&,float,int);//Pass by reference and Static Variable

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    float  pv,//Present Value in $'s
      intRate;//Percent
    unsigned char numCmpd;//Number of compounding periods [0,255]
    
    //Initialize variables here
    pv=100.0f;//$100's
    numCmpd=12;//Number of compounding periods
    intRate=72/PERCENT/numCmpd;
    
    //Map inputs to outputs here, i.e. the process
    
    //Display the results
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The number of compounding periods = "
            <<static_cast<int>(numCmpd)<<" years"<<endl;
    cout<<"The interest rate = "<<intRate*PERCENT<<"%"<<endl;
    cout<<"Savings - Power Function       = $"<<save1(pv,intRate,numCmpd)<<endl;
    cout<<"Savings - Exp/Log Function     = $"<<save2(pv,intRate,numCmpd)<<endl;
    cout<<"Savings - For-Loop Function    = $"<<save3(pv,intRate,numCmpd)<<endl;
    cout<<"Savings - Recursive Function   = $"<<save4(pv,intRate,numCmpd)<<endl;
    cout<<"Savings - Overloaded Function  = $"
            <<save4(pv,intRate,static_cast<float>(numCmpd))<<endl;
    cout<<"Savings - Defaulted Parameter  = $"<<save6(pv,intRate)<<endl;
    float fv=pv;
    save7(fv,intRate,numCmpd);
    cout<<"Savings - Pass by Reference    = $"<<fv<<endl;
    for(int i=1;i<=4;i++){
        fv=pv;
        save8(fv,intRate,numCmpd);
    }
    fv=pv;
    int howMany=save8(fv,intRate,numCmpd);
    cout<<"Savings - Static Variable      = $"<<fv<<endl;
    cout<<"The static function was called "<<howMany<<" times"<<endl;
    
    return 0;
}

int save8(float &p_fv,float i,int n){
    static int count=0;
    for(int year=1;year<=n;year++){
        p_fv*=(1+i);
    }
    return ++count;
}

void save7(float &p_fv,float i,int n){
    for(int year=1;year<=n;year++){
        p_fv*=(1+i);
    }
}

float save6(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save4(float p,float i,float n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save1(float p,float i,int n){
    return p*pow(1+i,n);
}