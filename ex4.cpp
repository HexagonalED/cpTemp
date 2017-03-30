#include<iostream>
#include<cstring>
#include<string>
#include<vector>

using namespace std;

class Member{
  private:
    string name;
    int age;
    string department;
  public:
    Member(string name, int age, string department){
      Member::name = name;
      Member::age = age;
      Member::department=department;
      cout<<"hey!"<<endl;
    }
    string getName(){
      return name;
    }
    int getAge(){
      return age;
    }
    string getDept(){
      return department;
    }
    void print(){
      cout<<name<<" "<<age<<" "<<department<<endl;
    }
};


int main(){
  string name,department;
  int age;
  vector<Member> li;
  int i=0;
  bool out = false;
  while(!out){
    cin>>name>>age>>department;
    if(name.compare("QUIT")==0 || department.compare("QUIT")==0||age==0){
      out=true;
      continue;
    }
    Member a(name,age,department);
    li.push_back(a);
  }
  for(i=0;i<li.size();i++){
    li.at(i).print();
  }
  return 0;
}
