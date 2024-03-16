#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n & 1) cout << "Weird";
    else{
        if (n >= 6 && n <= 20) cout << "Weird";
        else cout << "Not Weird";
    }
}