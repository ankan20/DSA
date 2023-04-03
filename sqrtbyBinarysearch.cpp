#include<iostream>
using namespace std;

long long int binarysearch(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    long long int ans =-1;

    while(s<=e){

       long long int square=mid*mid;

        if(square==n){
           ans =mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){

int n;
cout<<"give a number :";
cin>>n;
cout<<"square root of this number is "<<binarysearch(n);
    return 0;
}