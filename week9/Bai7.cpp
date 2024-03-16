#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string a = "", b = "";
        int n = s.length();
        for (int i = 0; i < n / 2; ++i){
            a += s[2 * i];
            b += s[2 * i + 1];
        }
        if (n & 1) a += s[n - 1];
        cout << a << ' ' << b << endl;
    }
    return 0;
}
