#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int perfectSubstring(string s, int k) {
    int count = 0;

    for (int i = 0; i < s.size(); ++i) {
        vector<int> freq(10, 0);

        for (int j = i; j < s.size(); ++j) {
            freq[s[j] - '0']++;
            
            bool isPerfect = true;

            for (int x : freq) {
                if (x != 0 && x != k) {
                    isPerfect = false;
                    break;
                }
            }

            if (isPerfect) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    int result = perfectSubstring(s, k);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
