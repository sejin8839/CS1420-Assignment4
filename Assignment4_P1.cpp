/*
file name: Assignment4_p1.cpp
Written by: 
Date:

*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const float PI = 3.14159265;

int factorial(int); // the function that returns n!

/*
*************************************************************
A function to compute sin(x) for given x 
x needs to be converted into radians, as the <cmath> sin function,
input is  in radians. 
*****************************************************************
*/

float sin(float,int);  
int main()
{
	float x;
    int n;
	cout<<"Enter the value of x : ";
	cin>>x;
	cout<<"Enter the value of n : ";
	cin>>n;
	
    cout<<fixed<<setprecision(2);
	cout<<"sin("<<x<<") = "<<sin(x,n)<<endl;
	 
	return 0;
}

int factorial(int n) 
{
   // STUDENT ... TODOS
}

float sin(float x,int n)
{
     //// STUDENT ... TODOS
}