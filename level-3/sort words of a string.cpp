Input :
=============
Thi$ is s@mple

Output :
=============
Thi$ is e@lmps

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    vector<string>v;
    string dup="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            dup=dup+s[i];
        }
        else{
            v.push_back(dup);
            dup="";
        }
    }
    if(dup.length()>=1)
    {
        v.push_back(dup);
    }
    vector<string>ans;
    for(auto it:v)
    {
        string s1=it;
        vector<char>cons;
        for(int i=0;i<s1.length();i++)
        {
            if((s1[i]>='a' and s1[i]<='z') or (s1[i]>='A' and s1[i]<='Z'))
            {
                cons.push_back(s1[i]);
            }
        }
        sort(cons.begin(),cons.end());
        int j=0;
        for(int i=0;i<s1.length();i++)
        {
            if((s1[i]>='a' and s1[i]<='z') or (s1[i]>='A' and s1[i]<'Z'))
            {
               s1[i]=cons[j];
               j++;
            }
        }
        ans.push_back(s1);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
