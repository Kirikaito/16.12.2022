#include <bits/stdc++.h>
using namespace std;
int main() {
    float k,t,x,y,r,distx,disty,diag,possible;
    cin >> k >> t;
    double max = t;
    vector<float> xn,yn,rn;
    for(int i = 0; i < k; i++){
        cin >> x >> y >> r;
        xn.push_back(x);
        yn.push_back(y);
        rn.push_back(r);
    }
    for(double i = 0; i < k - 1; i++){
        for(double j = i + 1; j < k; j++){
            distx = xn[j] - xn[i];
            disty = yn[j] - yn[i];
            diag = sqrt(pow(distx,2) + pow(disty,2));
            possible = (diag - rn[i] - rn[j])/2;
            if(possible < max) max = possible;
        }
    }
    cout << round(max*100)/100;
}
