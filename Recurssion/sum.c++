#include<bits/stdc++.h>
using namespace std;

//Parameterized
void printSum(int i,int sum){
    if (i<1)
    {
        /* code */
        cout<<"Sum is "<<sum;
        return;
    }
    printSum(i-1,sum+i);
    
}

//Functional(importent for D.P)
int printSumFunctional(int n){
    if(n==0) return 0;
    return n + printSumFunctional(n-1);
}

int main(){
    int n;
    cin>>n;
    printSum(n,0);
    cout<<endl;
    cout<<"Sum is "<< printSumFunctional(n);
    return 0;

}