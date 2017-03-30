#include<iostream>
#include<cstring>
#include<string>
#include<vector>

class Person{
  private:
      string name;
      int age;
      string gender;
  public:
      Person(...);
      ~Person();
      string getName();
      int getAge();
      string getGender();
      void introduce();
};




