#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateStrings(vector<string>& result, string prefix, const string& characters, int length) {
    if (length == 0) {
        result.push_back(prefix);
        return;
    }

    for (char c : characters) {
        string newPrefix = prefix + c;
        generateStrings(result, newPrefix, characters, length - 1);
    }
}

int main() {
    vector<string> result;
    string characters = "abcd";
    int length = 3;

    generateStrings(result, "", characters, length);

    // In k?t qu?
    for (const string& str : result) {
        cout << str << endl;
    }

    return 0;
}
