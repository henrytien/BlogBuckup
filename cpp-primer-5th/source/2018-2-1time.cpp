#include <iostream>
#include <time.h>
using namespace std;
int main(void)
{
    time_t nowtime;
    nowtime = 1517556955; //��ȡ����ʱ��
    cout << nowtime << endl;  //���nowtime
    struct tm *local;

    local=localtime(&nowtime);  //��ȡ��ǰϵͳʱ��

    char buf[80];
    strftime(buf,sizeof(buf),"��ʽ�����:%Y-%m-%d %H:%M:%S",local);
    cout << buf << endl;
    return 0;
}
