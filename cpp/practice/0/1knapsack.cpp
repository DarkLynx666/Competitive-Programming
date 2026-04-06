#include<bits/stdc++.h>
using namespace std;

int mmax(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int kknapsack(int w[],int v[],int c,int n){

    int dp[n+1][c+1];
    int i,k;
    for(i=0;i<=n;i++){
        for(k=0;k<=c;k++){
            if(i == 0 || k== 0){
                dp[i][k] = 0;
            }
            else if(k>= w[i-1]){
                    dp[i][k] = max(dp[i-1][k],v[i-1]+dp[i-1][k-w[i-1]]);
            }
            else{
                dp[i][k] = dp[i-1][k];
            }
        }

    }
    return dp[n][c];


}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    int n;
    cout << "enter  capacity " <<endl;
    cin >> c;
    cout << "enter number of items "<<endl;
    cin >> n;

    int w[n];
    int v[n];

    for(int i = 0;i<n;i++){
        cout << "enter weight of " << i << "th object" <<endl;
        cin >> w[i];
    }

    for(int i = 0;i<n;i++){
        cout << "enter profit of " << i << "th object" <<endl;
        cin >> v[i];
    }

    int result = kknapsack(w,v,c,n);

    cout << result;

    return 0;

}
