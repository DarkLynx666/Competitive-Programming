#include<bits/stdc++.h>
using namespace std;


/* fao[i] && lao[i]
This line checks whether both strings have characters at the current index 
or in other words loop till both strings hit null */

int main(){
    char fao[1000];
    char lao[1000];

    
    cin >> fao;
    cin >> lao;

     for(int i =0; i<strlen(fao); i++){
        fao[i] = tolower(fao[i]);
     }

      for(int i =0; i<strlen(lao); i++){
        lao[i] = tolower(lao[i]);
     }


        for(int i = 0;i<fao[i] && lao[i];i++){
            if(fao[i]>lao[i]){
               cout << 1 << endl;
             return 0;
            }
            else if(lao[i]>fao[i]){
               cout << -1 << endl;
               return 0;
            }
            
        }

       cout << 0 << endl;


 return 0;
}