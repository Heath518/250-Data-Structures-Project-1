#include "NUMBERLIST_H.h"
#include <iostream>
using namespace std;

NumberList::NumberList()
{
    head = nullptr;
}

NumberList::~NumberList()
{
    ListNode* nodePtr; 
    
    while(head)
    {
        nodePtr = head;
        head = head->next;
        delete nodePtr;
    }
}


void NumberList::appendNode(int ID, double GPA)
{
    ListNode* newNode = new ListNode;
    newNode->ID = ID;
    newNode->GPA = GPA;
    newNode->next = nullptr;
    
    
    if(!head)
    {
        head = newNode;
    }
    
    else
    {
        ListNode* nodePtr = head;
        
        while (nodePtr->next)
        {
            nodePtr = nodePtr->next;
        }
        
        nodePtr->next = newNode;
    
    }
}

void NumberList::displayList()const
{
    ListNode* nodePtr;
    nodePtr = head;
    
    while(nodePtr)
    {
        cout << nodePtr->ID << " " << nodePtr->GPA << endl;
        nodePtr = nodePtr->next;
    }
}

void NumberList::insertNode(int ID, double GPA)
{
    ListNode* newNode = new ListNode;
    ListNode* nodePtr;
    ListNode* prevNode;
    newNode->ID = ID;
    newNode->GPA = GPA;
    newNode->next = nullptr;
    
    if(!head || head->ID >= ID)
    {
        newNode->next = head;
        head = newNode;
    }
    
    else
    {
        nodePtr = head;
        prevNode = nullptr;
        
        while (nodePtr && nodePtr->ID < ID)
        {
            prevNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        
            prevNode->next = newNode;
            newNode->next = nodePtr;
    }
}


void NumberList::deleteNode(int ID)
{
    ListNode* nodePtr;
    ListNode* prevPtr = nullptr;
    
    if (!head)
    {
        cout << "\n Nothing to delete. \n";
        return;
    }
    
    if(head->ID == ID)
    {
        ListNode* temp = head;
        head = head->next;
        delete temp;
        
        return;
    }
    
    nodePtr = head;
    
        while(nodePtr && nodePtr->ID != ID)
        {
            prevPtr = nodePtr;
            nodePtr = nodePtr->next;
        }
        
        if(nodePtr)
        {
            prevPtr->next = nodePtr->next;
            delete nodePtr;
        }
}
