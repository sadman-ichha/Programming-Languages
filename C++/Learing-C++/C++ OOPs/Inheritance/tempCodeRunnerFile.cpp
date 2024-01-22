#include <iostream>
using namespace std;

class Person{
    public:
    void display(){
        cout<<" I'm a Person."<<endl;
    }
};
class Student: public Person{
    public:
    void display()override{
        cout<<" I'm a Student."<<endl;
    }
};
class Teacher: public Student{
    public:
    void display()override{
        cout<<" I'm a Teacher."<<endl;
    }
};

int main() {

    Person p;
    p.display();
    Student s;
    s.display();

    Teacher t;
    t.display();
    
    return 0;
}