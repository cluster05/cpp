/*
 #include <bits/stdc++.h>
using namespace std;

int memo[1000];

int fib(int n){
    if(n == 1 || n == 0 ) return 0;
    if(n == 2 ) return 1;
    if(memo[n] != -1) return memo[n];
    memo[n] =  fib(n-1) + fib(n-2);
    return memo[n];
}

int main(){
    fill_n(memo,1000,-1);
    int num = 40;
    cout<<fib(num)<<endl;
    for(int i = 0 ; i <= num;i++){
        cout<<memo[i]<<" ";
    }
} 

*/


/* 

#include <bits/stdc++.h>
using namespace std;


int main(){
    int num = 40;
    vector<int> vi(num+1);
    vi[0] =0;
    vi[1] =0;
    vi[2] =1;

    for(int i=3 ; i<= num;i++){
        vi[i] = vi[i-1] + vi[i-2];
    }
    cout<<vi[num];

}

 */