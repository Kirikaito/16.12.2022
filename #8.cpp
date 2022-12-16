#include <bits/stdc++.h>
using namespace std;
int main() {
    float b;
    int n = 1,m,ch = 0;
    string c;
    cin >> b;
    c = to_string(1.0/b);
    for(int j = 1; j <= (c.size()/2) - 1;j++){   
        for(int i = j + 2; i < c.size() - 1;i++){
            if(c[i] == c[i - j]){
                n += 1;
            }else{
                n = 1;
            }
        }
        if(n != 1){
            m = j;
            ch = 1;
            break;
        } 
    }
    while(n > 0){
        c.erase(c.end() - n);
        n--;
    }
    if((ch == 1)&&(c[c.end() - c.begin() - 1] != '0')){
        cout << "YES";
        return 0;
    }
    cout << "NO";
}
