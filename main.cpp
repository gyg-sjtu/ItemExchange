#include <iostream>
#include "ItemExchange.h"
using namespace std;


int main() {
    cout<<"��ӭʹ�á����������������Ʒ�������!"<<endl;
    cout<<"��������ѡ���ܣ�"<<endl;
    cout<<"1-������Ʒ"<<endl;
    cout<<"2-��ʾ��Ʒ�б�"<<endl;
    cout<<"3-������ɾ����Ʒ"<<endl;
    cout<<"4-�˳�ϵͳ"<<endl;
    cout<<"�����������ָ��Ϊ���ֻ�Ӣ��"<<endl;

    int command=0;
    itemstr item[500];
    int num=0;

    while(true){
        cin>>command;
        int itemNum;//case3ʹ��
        switch(command){
            case 1:
                addItem(item, num);
                num++;
                break;
            case 2:
                listItem(item, num);
                break;
            case 3:
                itemNum = searchItem(item, num);
                if(itemNum!=-1){
                    cout<<"�Ƿ���Ҫɾ����Ʒ��(y/n)"<<endl;
                    string flag;
                    cin>>flag;
                    if(flag=="y"){
                        removeItem(item, itemNum, num);
                        num--;
                    }
                    else{
                        cout<<endl;
                    }
                }
                break;
            case 4: return 0;
            default: cout<<"���ֳ�����Χ�����������룺"<<endl;
        }
        cout<<"��������ѡ���ܣ�"<<endl;
    }
    return 0;
}
