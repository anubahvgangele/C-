#include<bits/stdc++.h>
using namespace std;


int primeNumber(int n) {
        // code here
        int i;
        int count = 0;
        
        for(i = 1; i * i <= n; i++){
            if(n % i== 0){
                ++count;
                if((n/i) != i){
                    ++count;
                }
            }
        }
        return count;
        
    }

//T.C = sqrt(n)  
int main(){
        int number;
        cin>>number;
        int count = primeNumber(number);
        if (count == 2)
        {
            /* code */
            cout<<"Number is  prime";
        }
        else{
            cout<<"Number is not prime";
        }
        
}