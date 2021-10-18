/* 
    all value initailze with 0
    int alpha[26] = {0}; 
*/

/* 

    Error Handler

    int x, y;
    cin >> x >> y;
    try
    {
        if (y == 0)
            throw "Zero devider not allowed";
        int res = x / y;
        cout << res;
    }
    catch (const char *error)
    {
        cout << "Error :";
        cout << error;
    }

 */

/* 
    find the diff between two number and set max
    ret = max(ret,abs(inputArray[i]-inputArray[i-1])); 
*/

/* 
    min max || max min comparison
    minmax(20,10) == minmax(10,20) || true
 */

/* 
    debug 
    #define def(x) cerr<<#x<<" is "<<x<<endl; 
    def(x);
 */

/* 
    slinding window 
 */

/* 
    pair<dt,dt> p;
    p.make_pair(v,v);
    p.first
    p.second
 */

/* 
    // string palindrome
    bool isPalindrome(string s){
        for (int i = 0; i < s.size() / 2; i++){
            if (s[i] != s[s.size() - i - 1]){
                return 0;
            }
        }
    return 1;
    }

    // number palindrom 
    n =121
    temp = n , number = 0
    while(temp > 0){
        number = number * 10 + temp%10
        temp = temp / 10
    }
    if(n == number) return true
    else return false

 */

/* 
    int to string 
    int i = 10;
    string s = to_string(i);
 */

/* 
    form number of size k from array;
    for(int i =0 ; i < k ; i++) num = num * 10 + arr[i]
 */

/* 
    remove starting bit and add new bit
    123 => 23(New Number)
    here k = 3;
    num = (num % (int)pow(10,k-1)) * 10 + arr[i];
 */

/* 
    Perfect No:
    number = 6 why? 1,2,3
    sum of divisor is equal to that number
 */

/* 
    MAP
    int arr[] = {4,1,1,3,3,2,3,4};
    map<int,int> freq;
    for(int i : arr ) freq[i]++;
    for(auto it : freq) cout<<it.first<<" "<<it.second<<endl;
 */

/* 
    take input fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 */

/* 
    functor
    int power(int x) {return x * x;}
    transform(arr,arr+size,arr,power);

 */

/* 

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif
 */

/* 
    binary to int and int to binary
        string binary = bitset<40>(n).to_string();
    binary[binary.size() - k] = '0';
    return bitset<40>(binary).to_ulong();
    
 */

/* 
    test enviroment
    
#include<bits/stdc++.h>
using namespace std;

#define deb(x) cerr<<#x<<" is "<<x<<endl;

int test(){
    return 0;
}   

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt","w", stdout);
    #endif
    int T;
    cin>>T;
    
    for(int i = 0 ;i < T;i++){
        cout<<test()<<endl;
    }   
}
 */