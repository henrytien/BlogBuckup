#include<iostream>

int main()
{
    /*
    std::string str("some string");
    //ÿ����� str�е�һ���ַ�
    for(auto c : str)
        std::cout<<c<<std::endl;
    */

    /*
    std::string s("Hello World!!!");
    // punct_cnt �����ͺ�s.size�ķ�������һ��
    decltype(s.size()) punct_cnt = 0;
    for(auto c:s)
        if(ispunct(c))
            ++punct_cnt;
        std::cout<<punct_cnt
            <<" punctuation characters in "<< s <<std::endl;

      */

      std::string s("some string");
      for(decltype(s.size()) index = 0;
        index != s.size() && !isspace(s[index]);++index)
            s[index] = toupper(s[index]);
        std::cout<<s<<std::endl;

      std::string s1("hello !!!");
      //ת��Ϊ��д��ʽ
      for(auto &c:s1)      //����s�е�ÿ���ַ�(ע��:c������)
        c = toupper(c);     //c��һ������,��˸�ֵ��佫�ı�s���ַ���ֵ
      std::cout<<s1<<std::endl;
    return 0;
}
