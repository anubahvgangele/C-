#include<bits/stdc++.h>
using namespace std;

void printNumber(int i,int n){
    if(i>n) return; //base case
    
    cout<<i<<" ";
    printNumber(i+1,n);

}

void printNumberReverse(int i,int n){
    if(i<1) return; //base case
    
    cout<<i<<" ";
    printNumberReverse(i-1,n);
}

//By Backtrack
void printNumber1(int i,int n){
    if(i<1) return; //base case
    printNumber1(i-1,n);
    cout<<i<<" ";

}


void printNumberReverse1(int i,int n){
    if(i>n) return; //base case
    printNumberReverse1(i+1,n);
    cout<<i<<" ";

}

int main(){
    int n;
    cin>>n;
    printNumber(1,n);
    cout<<endl;
    printNumberReverse(n,n);
    cout<<endl;
    printNumber1(n,n);
    cout<<endl;
    printNumberReverse1(1,n);
}