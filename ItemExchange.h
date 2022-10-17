//
// Created by �� on 2022/10/17.
//

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
};

void addItem(itemstr *item, int num){
    cout<<"�����������Ʒ�����ƣ�"<<endl;
    string name;
    cin>>name;
    cout<<"��������Ʒ���˵�������"<<endl;
    string ownerName;
    cin>>ownerName;
    cout<<"��������ϵ��ʽ��"<<endl;
    string contactWay;
    cin>>contactWay;

    item[num].itemName = name;
    item[num].owner = ownerName;
    item[num].contact = contactWay;
    cout<<"��Ʒ�ѳɹ����\n"<<endl;
}

void removeItem(itemstr *item, int itemNum, int num){
    for(int i=itemNum;i<num;i++){
        item[i].itemName = item[i+1].itemName;
        item[i].owner = item[i+1].owner;
        item[i].contact = item[i+1].contact;
    }
    cout<<"��Ʒ��ɾ��\n"<<endl;
}

int searchItem(itemstr *item, int num){
    cout<<"�����������Ʒ�����ƣ�"<<endl;
    string name;
    cin>>name;
    cout<<"��������Ʒ���˵�������"<<endl;
    string ownerName;
    cin>>ownerName;

    int i=0;
    while(true){
        if(item[i].itemName==name && item[i].owner==ownerName){
            cout<<"���ҵ���Ʒ��\n"<<item[i].itemName<<"\t"<<item[i].owner<<"\t"<<item[i].contact<<endl;
            return i;
        }
        i++;
        if(i>=num){
            cout<<"δ���ҵ�����Ʒ��Ϣ\n"<<endl;
            return -1;
        }
    }


}

void listItem(itemstr *item, int num){
    cout<<"��Ʒ����\t"<<"��Ʒ����\t"<<"��ϵ��ʽ"<<endl;
    for(int i=0;i<num;i++){
        cout<<item[i].itemName<<"\t"<<item[i].owner<<"\t"<<item[i].contact<<endl;
    }
    cout<<endl;
}