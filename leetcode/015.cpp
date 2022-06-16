#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s = "cbaebabacd";
    string p = "abc";
    vector<int>vec(26,0);
    int num = 0;
    vector<int>res;
    int n = p.size(),m = s.size();
    if(n>m)cout << "[]";
    for(int i = 0;i < n;++i){
        vec[p[i]-'a']++;
        if(vec[p[i]-'a']==1)num++;
        vec[s[i]-'a']--;
        if(vec[s[i]-'a']==0)num--;
    }
    if(num==0)res.push_back(0);
    for(int j = n;j<m;++j){
        vec[s[j-n]-'a']++;
        if(vec[s[j-n]-'a']==1)num++;
        vec[s[j]-'a']--;
        if(vec[s[j]-'a']==0)num--;
        if(num==0)res.push_back(j-n+1);
    }
    for(auto x:res)cout<<x<<" ";
}
