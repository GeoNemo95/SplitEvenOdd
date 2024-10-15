#include <iostream>
#include "linkedList.h"
#include "unorderedLinkedList.h"
#include "intLinkedList.h"

int main() {
  intLinkedList<int> list;
  int values[] = {34, 62, 21, 10, 15, 90, 66, 53, 7, 120, 88, 36, 90, 11, 17, 24, 10, -999};

  for (int i = 0; i < 18; i++) {
    list.insertLast(values[i]);
  }

  linkedListIterator<int> iter;
  cout << "List: ";
  for (iter = list.begin(); iter != list.end(); ++iter)
    cout << *iter << " ";
  cout << endl;

  intLinkedList<int> even;
  intLinkedList<int> odd;

  list.splitEvensOdds(even,odd);

  cout << "Even: ";
  for (iter = even.begin(); iter != even.end(); ++iter)
    cout << *iter << " ";
  cout << endl;

  cout << "Odd: ";
  for (iter = odd.begin(); iter != odd.end(); ++iter)
    cout << *iter << " ";
  cout << endl;
  
  for (iter = list.begin(); iter != list.end(); ++iter)
    cout << "deletion test" << *iter << " ";
  cout << endl;
  
  return 0;
  
}