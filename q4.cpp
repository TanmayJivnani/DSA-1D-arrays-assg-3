//Move all zeros to end of array

#include<iostream>
using namespace std;
// By Tanmay Jivnani
int main(){
    int arr[]={1,1,0,4,0,3,2,0,2}; //predefined array
    int n=sizeof(arr)/4;
    int j=0;
    
    for(int i=0; i<n; i++){  // i keeps on incrementing while j stays at index of first 0
       if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];    //in first pass same first elem swapped with itself
            arr[j]=temp;
            j++; //j incremented only when element is non-zero. It denotes the position of first 0
       }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
}


