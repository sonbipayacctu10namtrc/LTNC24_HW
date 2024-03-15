#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    int a = stoi(s.substr(0, 2));
    if (s.substr(8, 2) == "AM"){
        if (a >= 12){
            a -= 12;
            s[0] = '0', s[1] = (char) (a - '0');
        }
    }
    else{
        if (a < 12){
            a += 12;
            string c = to_string(a);
            s = c + s.substr(2);
        } 
    }
    s.erase(8,2);
    return s;
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";


    return 0;
}
