#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;

void createStudent();
void addStudent(Student*, Node*);
void print(Node*);

Node* head = NULL;

int main(){

  
  
  return 0;
}


void createStudent(){
  char* first = new char[40];
  char* last = new char[40];
  int id = 0;
  float gpa = 0;
  cout << "Enter first name" << endl;
  cin.get(first, 40);
  cin.get();
  cout << "Enter last name" << endl;
  cin.get(last, 40);
  cin.get();
  cout << "Enter id number" << endl;
  cin >> id;
  cin.get();
  cout << "Enter gpa" << endl;
  cin >> gpa;
  cin.get();

  Student* newstudent = new Student(first);
  newstudent->setLastName(last);
  newstudent->setID(id);
  newstudent->setGPA(gpa);
  addStudent(newstudent);
  
}

void addStudent(Student* newstudent, Node* next){
  
  if (next->getNext() == NULL){
    next->setNext(new Node());
    next->getNext->setStudent(newstudent);
  }
  else if(next->getNext() != NULL){
    addStudent(newstudent, next->getNext());
  }
}


void print(Node* next){
  if (next == head){
    cout << "List: ";
  }
  if (next != NULL){
    cout << next->getStudent()->getFirstName() << " ";
    print(next->getNext());
  }
}
