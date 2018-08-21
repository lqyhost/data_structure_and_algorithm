//
// Created by Qianyong on 2018/8/19.
//

/******************
创建一个链表类
主函数中实现一个长度为10的链表赋值，并利用链表的特性读取并打印出来
 *****************/
#include<iostream>
#include<cstdlib>

using namespace::std;

class Node
{
public:
    Node() {next=0;}
    Node(int i,Node *in=0)
    {
        info = i;
        next = in;
    }

    int info;
    Node *next;
};

int main()
{
    Node a[10];
    int n = 10,i=0;
    for (i; i<n; i++)
    {
        a[i].info=rand()%100;
        if (i<9)
            a[i].next=&a[i+1];
    }
    i=0;
    Node *p = &a[0];
    while (p->next != 0)
    {
        cout<<p->info<<endl;
        p = p->next;
    }
}
