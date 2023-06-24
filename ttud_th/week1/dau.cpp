#include<bits/stdc++.h>

using namespace std;
pair<char, char> p1, p2, p3;
bool check( string s) {
    stack<char> st;
    for(int i =0; i< s.length();i++) {
      if(st.empty() || s[i] == '[' || s[i] == '{' || s[i] == '(' ) st.push(s[i]);
      else if ( s[i] == ']' && st.top() != '[') return 0;
      else if ( s[i] == '}' && st.top() != '{') return 0;
      else if ( s[i] == ')' && st.top() != '(') return 0;
      else st.pop();
    }
     if(st.empty()) return 1;
     return 0;
}
int main() {
    string s;
    cin>>s;
   cout<<check(s);

}