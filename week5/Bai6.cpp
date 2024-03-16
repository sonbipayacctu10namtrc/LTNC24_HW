#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    map<string, int> mp;
    while(t--){
        int x;
        cin >> x;
        if (x == 1){
            string d;
            int c;
            cin >> d >> c;
            if (mp.find(d) != mp.end()){
                mp[d] += c;
                continue;
            } 
            mp.insert(make_pair(d, c));
        }
        else if (x == 2){
            string d;
            cin >> d;
            mp.erase(d);
        }
        else{
            string d;
            cin >> d;
            if (mp.find(d) != mp.end())
                cout << mp[d] << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}



