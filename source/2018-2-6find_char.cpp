#include<iostream>
using namespace std;
string::size_type find_char(const string &s, char c,
                            string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(auto i = 0; i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;
            ++occurs;
        }
    }
    return ret;
}

int main()
{
    const string s="helloworld";
    cout<<s<<endl;
    string::size_type ctr;
    auto index = find_char(s,'l',ctr);
    cout<<index<<endl;
    cout<<ctr<<endl;
    return 0;

}
