//cube sum of every digit is equal to the input number is called armstrong number.

#include<bits/stdc++.h>
using namespace std;

int armstrongNumber(int n){
    int init = n;
    int sum = 0;
    int digit = 0;
    int temp = n;
    int count = 0;

    if(n==0)return true;

    while(temp != 0){
        temp = temp/10;
        ++count;
    }
    
    

    while(n!=0){
        digit = n % 10;
        n = n/10;
        sum += pow(digit,count);
    }
    if (init == sum)
    {
        /* code */
        return true;
    }
    else
        return false;
    
}

int main(){
    int num;
    cin>>num;
    int armstrongNum = armstrongNumber(num);
    if (armstrongNum)
    {
        /* code */
        cout<<"Number is armstrong";
    }
    else
        cout<<"Number is not armstrong";
    
}