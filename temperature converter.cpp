#include<iostream>
using namespace std;

int main(void){
   
   double y;
   cout << "Enter temperature in F ";
   int x;
   cin >> x;
   y = (x-32)*.56 ;
   cout << "Temperature in C is   " << y ; 



 return 0;
 }