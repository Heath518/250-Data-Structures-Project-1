#ifndef NUMBERLIST_H_h
#define NUMBERLIST_H_h

class NumberList
{
private:
    struct ListNode
    {
        int ID;
        double GPA;
        ListNode* next;
    };
    
ListNode* head; 
    
public:
NumberList();
~NumberList();

void appendNode(int, double);
void deleteNode(int);
void insertNode(int, double);
void displayList() const;

};


#endif /* NUMBERLIST_H_h */
