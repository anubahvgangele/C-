#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    n = abs(n);
    int digit = 0;
    int sum = 0;
    while(n!=0){
        digit = n % 10;
        n = n/10;
        sum = sum + digit;
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    int totalSum = sumOfDigits(num);
    cout<<totalSum;
    
}