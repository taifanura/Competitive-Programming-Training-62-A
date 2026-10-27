
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        s.insert(val);
    }

    cout << "Total unique elements: " << s.size() << endl;

    cout << "Elements in sorted order: ";
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    int target;
    cin >> target;

    if (s.count(target) > 0) {
        cout << target << " is present in the set." << endl;
    } else {
        cout << target << " is NOT present in the set." << endl;
    }

    return 0;
}


