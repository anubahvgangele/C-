#include<bits/stdc++.h>
using namespace std;

int fectorial(int n){
    if(n==0) return 1;
    return n * fectorial(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"fectorial is "<< fectorial(n);
    return 0;

}