#include<iostream>
#include<forward_list>
int main()
{
    std::forward_list<int> flst={0,4,3,2,5,8,9,7,6};
    std::cout<< "Delete before:"<<std::endl;
    for(auto l:flst)
        std::cout << l << " ";
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end())
    {
        if(*curr % 2)
            curr = flst.erase_after(prev);  // ɾ�����ƶ�curr
        else
        {
            prev = curr;  //�ƶ�curr,ָ����һ��Ԫ�أ�prevָ��curr֮ǰ��Ԫ��
            ++curr;
        }
    }

    std::cout << std::endl << "Delete after:" << std::endl;
    for(auto l:flst)
        std::cout << l <<" ";
    return 0;
}
