#include<bits/stdc++.h>
using namespace std;


vector<int> getDivisors(int n) {
        // code here
        int i;
        vector<int> arr;
        
        for(i = 1; i * i <= n; i++){
            if(n % i== 0){
                
                arr.push_back(i);
                if(n/i != i){
                   arr.push_back(n/i);
                }
                
            }
           
        }
        sort(arr.begin(), arr.end());
        return arr;
        
    }

//T.C = sqrt(n) and sorting will take O(nlogn) where n is the number of factor    
int main(){
        int number;
        cin>>number;
        vector<int> divisors = getDivisors(number);
        //print will take number of factors time
        for (auto i : divisors) {
        cout << i << " ";
    }

}