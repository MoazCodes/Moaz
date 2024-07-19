//
//created by Moaz Mohamed
//

#include <bits/stdc++.h>

using namespace std;

//macros
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define sz(v) (int)(v.size())
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define endl "\n"
#define moaz ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    string str1,str2,tmp="|";
    getline(cin,str1);
    getline(cin,str2);
    vector<string> ans1,ans2;
    for (int i = 0; i < sz(str1); ++i) {
        tmp.pop_back();
        tmp+=str1[i];
        tmp+='|';
        ans1.push_back(tmp);
    }
//    for(auto s:ans1)cout<<s<<endl;

//    for (int i = 0; i < 2; ++i)
    {
        tmp.pop_back();
        ans1.push_back(tmp);
        tmp+='|';
        ans1.push_back(tmp);
    }


    tmp="|";
    for (int i = 0; i < sz(str2); ++i) {
        tmp.pop_back();
        tmp+=str2[i];
        tmp+='|';
        ans2.push_back(tmp);
    }
//    for (int i = 0; i < 2; ++i)
   {
        tmp.pop_back();
        ans2.push_back(tmp);
        tmp+='|';
        ans2.push_back(tmp);
    }

//    for(auto s:ans2)cout<<s<<endl;

    float diff = 100.0 / ((sz(ans1)+ sz(ans2))*2) ;

    float cur=0;
    for (int i = 0; i < sz(ans1); ++i) {
        printf(" %f% { \n content : \" %s \"; \n } \n",cur, ans1[i].c_str());
        cur+=diff;
    }
    for (int i = sz(ans1) -1 ; i >= 0 ; --i) {
        printf(" %f% { \n content : \" %s \";  \n } \n",cur, ans1[i].c_str());
        cur+=diff;
    }


    for (int i = 0; i < sz(ans2); ++i) {
        printf(" %f% { \n content : \" %s \";  \n } \n",cur, ans2[i].c_str());
        cur+=diff;
    }
    for (int i = sz(ans2) -1 ; i >= 0 ; --i) {
        printf(" %f% { \n content : \" %s \";  \n } \n",cur, ans2[i].c_str());
        cur+=diff;
    }
};

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    moaz
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}


//second approach
/*
 *
 *   for (int i = 0; i < sz(str1); ++i) {
        tmp.pop_back();
        ans1.push_back(tmp);

        tmp+='|';
        ans1.push_back(tmp);

        tmp.pop_back();
        ans1.push_back(tmp);

        tmp+=str1[i];
        tmp+='|';
        ans1.push_back(tmp);
    }
//    for(auto s:ans1)cout<<s<<endl;
    tmp="|";
    for (int i = 0; i < sz(str2); ++i) {
        tmp.pop_back();
        ans2.push_back(tmp);

        tmp+='|';
        ans2.push_back(tmp);

        tmp.pop_back();
        ans2.push_back(tmp);

        tmp+=str2[i];
        tmp+='|';
        ans2.push_back(tmp);
    }
//    for(auto s:ans2)cout<<s<<endl;
 */