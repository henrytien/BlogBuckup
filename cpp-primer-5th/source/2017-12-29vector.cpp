#include<iostream>

using namespace std;

int main()
{
    string s("some string");
    if(s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }

    cout<<s<<endl;

    for(auto it =s.begin(); it!=s.end() && !isspace(*it);++it)
        *it = toupper(*it);
     cout<<s<<endl;

      for(auto it = s.cbegin(); it!=s.cend(); ++it)
        cout<<*it;

     string text;
     while(cin>>text)

     for(auto it = text.begin(); it!=text.end() && !it->empty(); ++it)
        cout<<*it;
    return 0;
}
