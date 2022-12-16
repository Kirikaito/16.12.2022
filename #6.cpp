#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,f;
    cin >> n;
    vector<int> prime;
    for(int i = 2; i < n;i++){
        f = 0;
        for(int j = 2; j <= i/2;j++){
            if( (i % j) == 0){
                f = 1;
                break;
            }
        }
        if(f == 0) prime.push_back(i);
    }
    for(auto i : prime){
        if(find(prime.begin(),prime.end(),n - i) != prime.end()){
            cout << i << ' ' << prime[find(prime.begin(),prime.end(),(n - i)) - prime.begin()];
            return 0;
        }
    }
}
