#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter the String \n";
    cin>>s;
    //Pre Computation
    int hash[26]={0};
    for (int i=0;i<s.size();i++) {
        hash[s[i]-'a']++;
    }
    cout<<"Enter the Number of Queries"<<endl;
    int q;
    cin>>q;
    while (q--) {
        char c;
        cout<<"Enter the Character \n";
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}