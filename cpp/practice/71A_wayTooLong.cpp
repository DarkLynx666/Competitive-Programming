#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t!=0){

    char nig[1000];
    cin >> nig;
   

    int n = strlen(nig);
        if(n>10){
    string result = nig[0] + to_string(n-2) + nig[n-1];

    cout << result << '\n';
        }
        else{
            cout << nig << '\n';
        }
        t--;
    }

return 0;
}