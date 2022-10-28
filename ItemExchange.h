//“你帮我助”软件的头文件
//目的：为主程序要实现的各功能提供基本代码
//作者：耿一戈

#ifndef ItemExchange_h
#define ItemExchange_h
   #include <iostream>
   #include <cstring>
#endif //ItemExchange_h

using namespace std;
struct itemstr{
    string itemName;
    string owner;
    string contact;
};                   //定义物品结构体，包含物品名，所有者和联系方式

void addItem(itemstr *item, int num){     //添加物品函数
    cout<<"请输入放入物品的名称（英文）："<<endl;
    string name;
    cin>>name;
    cout<<"请输入物品主人的姓名（英文）："<<endl;
    string ownerName;
    cin>>ownerName;
    cout<<"请输入联系方式："<<endl;
    string contactWay;
    cin>>contactWay;

    item[num].itemName = name;
    item[num].owner = ownerName;
    item[num].contact = contactWay;    //将输入值拷贝到物品数组中
    cout<<"物品已成功添加\n"<<endl;
}

void removeItem(itemstr *item, int itemNum, int num){    //删除物品函数   
    for(int i=itemNum;i<num;i++){
        item[i].itemName = item[i+1].itemName;
        item[i].owner = item[i+1].owner;
        item[i].contact = item[i+1].contact;    //从找到物品的位置覆盖，删除物品
    }
    cout<<"物品已删除\n"<<endl;
}

int searchItem(itemstr *item, int num){      //查找物品函数
    cout<<"请输入查找物品的名称（英文）："<<endl;
    string name;
    cin>>name;
    cout<<"请输入物品主人的姓名（英文）："<<endl;
    string ownerName;
    cin>>ownerName;

    int i=0;
    while(true){
        if(item[i].itemName==name && item[i].owner==ownerName){      //表示找到了物品
            cout<<"查找到物品：\n"<<item[i].itemName<<"\t"<<item[i].owner<<"\t"<<item[i].contact<<endl;  //输出物品信息
            return i;      //返回找到物品的位置
        }
        i++;
        if(i>=num){     //遍历物品栏也未找到
            cout<<"未查找到该物品信息\n"<<endl;
            return -1;
        }
    }


}

void listItem(itemstr *item, int num){    //显示物品列表函数
    cout<<"物品名称\t"<<"物品主人\t"<<"联系方式"<<endl;
    for(int i=0;i<num;i++){
        cout<<item[i].itemName<<"\t"<<item[i].owner<<"\t"<<item[i].contact<<endl;
    }                //遍历物品数组，逐一输出
    cout<<endl;
}
