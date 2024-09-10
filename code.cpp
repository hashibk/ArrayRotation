#include <iostream>
using namespace std;

int rotateArray(int *arr, int x, int size){
    int *arr2=new int[x];

    for (int i=0;i<x;i++){
        arr2[i]=arr[i];
    }

    for (int i=0;i<size-x;i++){
        arr[i]=arr[i+x];
    }

    for (int i=x+1;i<size;i++){
        arr[i]=arr2[i-x-1];
    }

    return *arr;
}

int main(){

    int x=5;
    int pos=2;

    int *arr=new int[x];

    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;

    rotateArray(arr,pos,x);

    for (int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}