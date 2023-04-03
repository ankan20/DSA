#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
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
;
    }
    return -1;
}
int main(){
int even[6]={1,2,2,8,12,16};
int odd[6]={1,3,5,7,9,11};
int index=binarysearch(even,6,2);
cout<<"index of 6 in the array is "<<index<<endl;
cout<<binarysearch(odd,6,11);



}