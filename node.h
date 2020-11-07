#include <iostream>
#include <cstring>

using namespace std;

class Node{
 public:
  Node();
  ~Node();
  void setStudent(Student*);
  Student* getStudent();
  void setNext(Node*);
  Node* getNext();
 private:
  Node* next;
  Student* student;
};
