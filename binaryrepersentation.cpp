#include <bits/stdc++.h>
using namespace std;
void binaryrepresentation(int n){
    if(n == 0){
        cout<<"0"<<endl;
    }
    string binary ="";
    while(n>0){
        binary = to_string(n%2)+binary;
        n /=2;
    }
    cout<<binary<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    binaryrepresentation(n);
    }
   
    return 0;
}
