#include<iostream>
#include<vector>

int main()
{
    std::vector<int> ivec;
    ivec.push_back(1);
    std::cout<<ivec[0]<<std::endl;

    //�б��ʼ��
    std::vector<std::string> articles = {"a","b","c"};
    for(int32_t i = 0;i<articles.size();i++)
    {
        std::cout<<articles[i];
    }
    std::cout<<std::endl;
    std::cout<<articles[0]<<std::endl;

    std::vector<int> ivec_same(10,-1);
    std::cout<<ivec_same[0]<<std::endl;

    int32_t i = 10;
    std::vector<int> iDefualtVec; // Ĭ�ϳ�ʼ��
    std::vector<int> iTestCopy(iDefualtVec);  //Ԫ�ؿ���
    std::vector<int> iCopyVec(10); //ֵ��ʼ��
    std::vector<int> iTest = iCopyVec;  //������ʼ��
    std::cout<<iTest[0]<<std::endl;
  //  std::cout<<iTestCopy[0]<<std::endl;

    std::vector<std::string> v5(10);
    std::cout<<v5[0]<<std::endl;

    std::vector<std::string> v6{10};  //10��Ĭ�ϳ�ʼ��Ԫ��
    std::cout<<v6[0]<<std::endl;

    std::vector<std::string> v7{2,"hello"};
    for(int32_t i  = 0;i < v7.size();i++)
    {
           std::cout<<v7[i];
    }

    return 0;
}
