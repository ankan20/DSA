#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
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
    return ans;
}
int lastocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
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
    return ans;
}
int main(){
int even[6]={2,2,2,2,2,2};
int odd[6]={2,2,2,4,5,6};
int index=firstocc(even,6,2);
cout<<"index of 2 in the array is "<<index<<endl;
cout<<firstocc(odd,6,2)<<endl;
cout<<"last occ of 2 is "<<lastocc(odd,6,2);



}