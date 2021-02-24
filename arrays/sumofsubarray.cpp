//  subarrays(n*(n+1)/2) are continuous while subsequence(2^n) are any random
// to find sum of all subarrays of a array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            
            sum+=a[j];
            cout<<sum<<" ";
        }
        
    }

}