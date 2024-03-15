#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int cnt = 1, i = 0;
    while(s[i] != '\0'){
        if (isupper(s[i])) ++cnt;
        ++i;
    }
    return cnt;
}

int main()
{
    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout << result << "\n";
    return 0;
}
