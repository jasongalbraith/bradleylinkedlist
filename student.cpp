#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"

using namespace std;

Student::Student(char* input){
  firstname = input;
}

char* Student::getFirstName(){
  return firstname;
}

void Student::setLastName(char* input){
  lastname = input;
}

char* Student::getLastName(){
  return lastname;
}

void Student::setID(int input){
  id = input;
}

int Student::getID(){
  return id;
}

void Student::setGPA(float input){
  gpa = input;
}

float Student::getGPA(){
  return gpa;
}
