#include <iostream>
#include "NUMBERLIST_H.h"
using namespace std;

int main()
{
    NumberList list;
    
    cout << "Appending...." <<  endl;
    list.appendNode(22, 3.5);
    list.appendNode(55, 3.7);
    list.appendNode(88, 3.1);
    list.appendNode(111, 3.8);
    list.appendNode(210, 3.3);
    
    list.displayList();
    
    cout << "\n" << endl;
    cout << "Inserting 31, 2.9 and 1 , 2.9!" << endl;
    list.insertNode(31,3.4);
    list.insertNode(1, 2.9);
    
    list.displayList();
    
    cout << "\n" << endl;
    cout << "Deleting 111, 3.8 and 22, 3.5!"<< endl;;
    list.deleteNode(111);
    list.deleteNode(22);
    
    list.displayList();
    cout << endl;
    
    return 0;
}
