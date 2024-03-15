#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
    string d = "", m = "hackerrank";
    int i = 0, j = 0;
    while(i < s.length() && j < 10){
        if (s[i] == m[j]){
            d += m[j];
            ++j;
        }
        ++i;
    }
    if (d == m) return "YES";
    return "NO";
}

int main()
{
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        string result = hackerrankInString(s);

        cout << result << "\n";
    }

    return 0;
}
