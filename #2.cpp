#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,k = -100;
    string n,m;
    cin >> n; 
    cin >> m;
    for(int e = 0; e <= (n.size() - m.size());e++){
        c = 1;
        for(int i = 0; i < m.size() - 1;i++){
            if((n[e + i] - m[i]) == (n[e + i + 1] - m[i + 1])){
                c++;
            }
        }
        if(c == m.size()){
            k = n[e] - m[0];
            break;
        }
    }
    if(k == -100){
        cout << "IMPOSSIBLE";
        return 0;
    }
    for(auto i : n) cout << (char)(i - k); 
    return 0;
}
