#include<bits/stdc++.h>
using namespace std;

int max(int a , int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}

int lcs(char x[], char y[]){
    int m = strlen(x);
    int n = strlen(y);

    int dp[m+1][n+1];

    

    for(int i=0; i<=m;i++ ){
        for(int j=0; j<=n; j++){
            if(i==0 || j== 0){
                dp[i][j] = 0; //initializes the first row,column with 0s
            }
            else if(x[i-1]==y[j-1]){
                dp[i][j]= 1+dp[i-1][j-1]; //increments the diagonal value
            }
            else{
                dp[i][j]= max(dp[i][j-1],dp[i-1][j]); //compares with above and behind
            }
        }
    }
    return dp[m][n];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


  /*  char x[5]= {'a','b','c','d'};
    char y[5]= {'a','b','c','d'};
*/

   char x[100];
   char y[100];

    cout<<"first array"<<endl;
   cin >> x ;
    

  cout<<"2nd array"<<endl;
    
    cin >> y;

    int result = lcs(x,y);

    cout<< result;

    return 0;

}