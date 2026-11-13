#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n){
    n = abs(n);
    int reverse = 0;
    int digit = 0;
    while(n!=0){
        digit = n % 10;
        n = n/10;
        reverse = reverse * 10 + digit;
    }
    return reverse;
}

int main(){
    int num;
    cin>>num;
    int reverse = reverseNumber(num);
    cout<<reverse;
    
}