#include<iostream>
using namespace std;
char &get_val(string &str, string::size_type  ix)
{
    return str[ix];
}

/*
vector<string> process()
{
    // ...
    // expected �� actual ��string����
    if(expected.empty())
    return {};
    else if(expected == actual)
    return {"functionX","okay"}; // �����б��ʼ����vector����
    else
    return{"functionX",expected,actual};
}
*/

int factorial(int val)
{
    if(val > 1)
        return factorial(val - 1)*val;
    return 1;
}

int main()
{
    string s("a value");
    cout<< s <<endl;
    get_val(s,0) ='A';
    cout << s <<endl;
    cout<< factorial(5) <<endl;
    return 0;
}
