/*
file name: Assignment4_p1.cpp
Written by: Sejin Yoon_u1311019
Date: Apr 9, 2023.

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
	x = x * PI / 180.0;
    cout<<fixed<<setprecision(2);
	cout<<"sin("<<x<<") = "<<sin(x,n)<<endl;
	 
	return 0;
}

int factorial(int n) 
{
   if(n == 0) return 1;
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

float sin(float x,int n)
{
    float sum = x;
    float term = x;
    for(int i = 1; i <= n; i++) {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    return sum;
}
