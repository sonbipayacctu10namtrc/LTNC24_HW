#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int t;
    cin >> t;
    cin.ignore();
    map<string, string> s;
    while(t--){
        
        string a, b;
        cin >> a >> b;
        s.insert({a, b});
        cin.ignore();
    }
    int num = 1;
    while(num){
        string d;
        cin >> d;
        cin.ignore();
        if(d == ""){
            num = 0;
            break;
        }
        if (s.find(d) != s.end()){
            auto it = s.find(d);
            cout << (*it).first << '=' << (*it).second << endl;
        }
        else cout << "Not found" << endl;
    }
    return 0;
}