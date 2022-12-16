#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,in,max = 0;
    cin >> n;
    vector<int> list;
    for(int i = 0; i< n;i++){
        cin >> in;
        list.push_back(in);
    }
    for(int i = 0; i< n;i++){
        for(int j = i + 1; j < n;j++){
            if(list[i] == list[j]){
                if((j - i) > max) max = (j - i);
                break;
            }
        }
    }
    cout << max;
}
