#include<iostream>
#include<vector>
using namespace std;

void mult(vector<int>& v,int i, int &size){  
    int carry=0;   //no. stored in reverse order
    for(int j=0; j<size; j++){ //multiplying with all elements of array, size denotes length of current fact value
        int prod= v[j]*i + carry;  // to be multiplied with i, carry from previous iteration is added
        v[j]=prod%10;  // override with unit place value
        carry=prod/10;  // ten's place value as carry
    }
    while(carry){  //till carry is not 0, used to insert remaining carry at the end
        v[size]=carry%10;
        carry/=10;
        size++;
    }  
}
int main(){                             // By Tanmay Jivnani
    int n;
    cout << "n:";
    cin >> n;
    vector<int> v(500, 0);
    v[0]=1;
    int size=1;

    for(int i=2; i<=n; i++){  // factorial = 1*2*3*4..n
        mult(v, i, size);  // v and size passed by reference
    }
    for(int i=size-1; i>=0; i--){
        cout << v[i];
    }
    cout << endl;
    
}