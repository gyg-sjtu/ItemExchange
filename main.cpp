//“你帮我助”软件的主程序
//目的：用于实现添加删除物品等功能
//作者：耿一戈
#include <iostream>
#include "ItemExchange.h"
using namespace std;

int main() {
    cout<<"欢迎使用“你帮我助”疫情物品交换软件!"<<endl;
    cout<<"输入数字选择功能："<<endl;
    cout<<"1-放入物品"<<endl;
    cout<<"2-显示物品列表"<<endl;
    cout<<"3-查找与删除物品"<<endl;
    cout<<"4-退出系统"<<endl;        //用户使用提示

    int command=0;          //用户指令
    itemstr item[500];      //物品数组，使用头文件定义的结构体
    int num=0;              //现有物品总数  

    while(true){
        cin>>command;       //用户输入指令
        int itemNum;        //所要查找物品的数量,case3使用
        switch(command){
            case 1:         //添加物品
                addItem(item, num);
                num++;
                break;
            case 2:         //显示物品列表
                listItem(item, num);
                break;
            case 3:         //查找与删除物品
                itemNum = searchItem(item, num);
                if(itemNum!=-1){
                    cout<<"是否需要删除物品？(y/n)"<<endl;
                    string flag;
                    cin>>flag;      //输入是否删除指令
                    if(flag=="y"){      //删除物品
                        removeItem(item, itemNum, num);
                        num--;
                    }
                    else{           //不删除物品
                        cout<<endl;
                    }
                }
                break;
            case 4: return 0;    //退出软件
            default: cout<<"数字超出范围，请重新输入："<<endl;     //报错指令
        }
        cout<<"输入数字选择功能："<<endl;
    }
    return 0;
}
