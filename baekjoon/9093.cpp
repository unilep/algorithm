#include<bits/stdc++.h>
using namespace std;

int T;
string temp;
string str;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    cin.ignore();
    for(int t=0; t<T; t++) {
        getline(cin, str);
        for(int i=0; i<str.length(); i++) {
            if(str[i] == ' ') {
                for(int j=temp.length()-1; j>=0; j--) cout << temp[j];
                cout << " ";
                temp = "";
            } else temp += str[i];
        }
        for(int j=temp.length()-1; j>=0; j--) cout << temp[j];
        temp = "";
        cout << '\n';
    }
}
