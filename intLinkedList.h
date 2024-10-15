#ifndef H_intLinkedList
#define H_intLinkedList  

#include "linkedList.h"
#include "unorderedLinkedList.h"

using namespace std; 

template <class Type> 
class intLinkedList: public unorderedLinkedList<int>
{
private:
    
public:
    void splitEvensOdds(intLinkedList<int> &evenList, intLinkedList<int> &oddList)
    {
        nodeType<int> *current;
        current = this->first;
        while (current != nullptr){
            if (current->info % 2 == 0){
                if (evenList.count == 0){
                    evenList.first = current;
                }
                else{
                    evenList.last->link = current;
                }
                evenList.last = current;
                evenList.count++;
                current = current->link;
                evenList.last->link = nullptr;
            
            }
            else{
                if (oddList.count == 0){
                    oddList.first = current;
                }
                else{
                    oddList.last->link = current;
                }
                oddList.last = current;
                oddList.count++;
                current = current->link;
                oddList.last->link = nullptr;
            }
        }
        this->first = nullptr;
        this->last = nullptr;
        this->count = 0;
    }
};

#endif