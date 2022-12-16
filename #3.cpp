#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string m;
    cin >> n;
    m = to_string(pow(2,n));
    for(auto i : m){
        if(i =='.') break;
        cout << i;
    }
}
