#include<iostream>
using namespace std;

int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;

    while(s<e){
    if(arr[m]>=arr[0]){
        s=m+1;
    }
    else {
        e=m;
    }
    m=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[],int start,int end,int key){
    int mid=start+(end-start)/2;
    

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        //go to right side part
        if(key>arr[mid]){
            start=mid+1;
        }
        //go to left side part
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}
int findposition(int arr[],int n,int k){
    int pivot=getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k);
    }
}
int main(){

    int arr[6]={7,8,9,1,2,3};
    int ans=findposition(arr,6,7);
    int pi=getpivot(arr,6);
    cout<<"position is "<<ans<<endl;
    cout<<pi;


    return 0;
}