#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    map <string, int>mp;
    fstream f("student.txt", ios::in);
    while(!f.eof()) {
        string s;
        f >> s;
        mp[s]++;
    }
    string maxs="";
    int maxv=0;
    for(auto k: mp) {
        if (k.second>maxv) {
            maxv=k.second;
            maxs=k.first;
        }
    }
    cout << maxs << "\n";
    return 0;
}