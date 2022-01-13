#include <iostream>
#include "Node.h"
#include "Student.h"
#include <cstring>

using namespace std;

int main() {
  char* studentname;

  cout << "Go!" << endl;
  
  cin >> studentname;
  Student* kid1 = new Student(studentname);
  Node* first = new Node(kid1);

  cin >> studentname;
  Student* kid2 = new Student(studentname);
  Node* second = new Node(kid2);

  cin >> studentname;
  Student* kid3 = new Student(studentname);
  Node* third = new Node(kid3);

  first->setNext(second);
  second->setNext(third);

  cout << first->getNext()->getStudent()->getName() << endl;

  delete second;

  first->setNext(third);

  cout << first->getNext()->getStudent()->getName() << endl;
  
  return 0;
}
