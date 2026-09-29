#include <iostream>
#include <memory>
using namespace std;
class Students
{

public:
 Students(){
    cout<<"Object created\n";
 }
 ~Students(){
    cout<<"Objects destroyed\n";
 }
 void display(){
    cout<<"students objects\n";
 }

};
int main(){
    unique_ptr<Students>p1=make_unique<Students>();
    p1->display();

    shared_ptr<Students> p2=make_shared<Students>();
    shared_ptr<Students>p3=p2;
    p2->display();
    cout<<"Reference:"<<p2.use_count()<<endl;
    return 0;
}