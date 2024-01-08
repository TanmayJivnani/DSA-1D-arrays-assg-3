#include<iostream>
using namespace std;
// By Tanmay Jivnani
int main(){
    int x;
    cout << "Enter x:";
    cin >> x;
    int arr[]={1,2,3,4,5,6,5,4,2}; //predefined array
    int n=sizeof(arr)/4;

    int count=0;  // count of triplets
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){  // 3 var i,j,k for the 3 indices
                if(arr[i]+arr[j]+arr[k]==x){
                    cout << "(" << i <<", " << j <<", " << k <<")\n";
                    count++;
                }
            }
        }
    }
    cout << "Count: " << count <<endl;
}