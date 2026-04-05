#include<bits/stdc++.h>
using namespace std;

int maxx(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}


int lcs(char x[],char y[], int i,int j){
    if(x[i]== '\0' || y[j]=='\0'){
            return 0;
    }
    else if(x[i]==y[j]){
        return 1+lcs(x,y,i+1,j+1);
    }
    else{
        return maxx(lcs(x,y,i,j+1),lcs(x,y,i+1,j));
    }
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

/*
NOTEEE:: c++ doesnt support variable length arrays. VLAs are a GCC/Clang extension, 
but they are not part of standard C++. 
Code will fail to compile on MSVC and many other compilers.

Reason: C++ requires array sizes to be known at compile time. 
VLAs exist in C99, but C++ never adopted them (except for std::vector and std::array).

*/

char x[100];
char y[100];

cout << "populate first array in one go" <<endl;
cin >> x;
cout << "populate 2nd array in one go"<< endl;
cin >> y;

int result = lcs(x,y,0,0);

cout << result;

return 0;

}