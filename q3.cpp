#include<iostream>
using namespace std;
// By Tanmay Jivnani
int main(){
    int arr[]={1,1,4,4,3,3,4}; //predefined array
    int n=sizeof(arr)/4;
    bool flag=false;
    
    for(int i=0; i<n; i++){
        int j;
        for(j=0; j<n; j++){
            if(i!=j && arr[i]==arr[j]){
                break;
            }
        }
        if(j==n) {  //No match found
            cout << "1st Non-Repeating Element: " << arr[i] << endl;
            flag=true;  //true -> Non-rep element exists
            break; 
        }
    }
    if(flag==false) cout << "All ELements are Repeating"<< endl;
}


