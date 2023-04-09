#include <iostream>
#include <string>
#include <map>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, vector<string>>s;
    for (int i = 0; i < n; i++) {
        int a;
        string b;
        cin >> a >> b;
        if (s.find(a) == s.end()) {
            s[a] = vector<string>();
        }
        if (i < n/2) {
            s[a].push_back("-");
        } else {
            s[a].push_back(b);
        }
    }
    for (auto it : s) {
        for (auto jt : it.second) {
            cout << jt << " ";
        }
    }
    cout << endl;
    return 0;
}
