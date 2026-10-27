
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) {
                return false;
            }
            char top = st.top();

            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        } else {

            return false;
        }
    }
    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (isValid(s)) {
            cout << s << " -> Balanced" << '\n';
        } else {
            cout << s << " -> Not Balanced" << '\n';
        }
    }
    return 0;
}

