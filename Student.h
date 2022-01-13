#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>

using namespace std;

class Student{
 public:
  Student(char* newname);
  char* getName();
 private:
  char* name;
};
#endif
