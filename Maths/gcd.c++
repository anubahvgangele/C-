#include<bits/stdc++.h>
using namespace std;

int greatestDivisior(int num1,int num2){
    while (num1 > 0 && num2 > 0)
    {
        /* code */
        if (num1 > num2)
        {
            /* code */
            num1 =  num1 % num2;
        }
        else{
            num2 =  num2 % num1;
        }
        
    }
    if (num1 == 0 )
    {
        /* code */
        return num2;
    }
    else return num1;
    
    
}


int main(){
    int num1,num2;
    cout<<"Enter first number ";
    cin>>num1;
    cout<<"Enter second number ";
    cin>>num2;
    int gcd = greatestDivisior(num1,num2);
    cout<<"GCD IS "<<gcd;
}