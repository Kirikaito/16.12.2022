#include <bits/stdc++.h>

using namespace std;

int main(){
    double n,s = 650,max_v =s/24,sh,sm,eh,em,t;
    vector<string> name,start,end;
    string a,b,c,d,answ;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        while(a[a.size() - 1] != '\"'){
            cin >> d;
            a = a + ' ' + d;
        }
        cin >> b >> c;
        name.push_back(a);
        start.push_back(b);
        end.push_back(c);
    }
    for(int i = 0;i < n;i++){
        eh = (((int)(end[i][0]) - 48)*10 + (int)(end[i][1]) - 48);
        em = (((int)(end[i][3]) - 48)*10 + (int)(end[i][4]) - 48);
        sh = (((int)(start[i][0]) - 48)*10 + (int)(start[i][1]) - 48);
        sm = (((int)(start[i][3]) - 48)*10 + (int)(start[i][4]) - 48);
        t = eh*60 + em - sh*60 - sm;
        if(t <= 0) t += 24*60;
        if(s/(t/60) > max_v){
            max_v = s/(t/60);
            answ = name[i];
        }
    }
    cout << "The fastest train is " << answ << ".\n" << "It\'s speed is " << round(max_v) << " km/h, approximately.";
}
