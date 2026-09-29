#include <iostream>
using namespace std;
class Students{
    public:
      int id;
      string name;

      void display(){
        cout<<id<<" "<<name<<endl;

      }
};
int main(){
    Students s1={1,"Rahul"};
    Students *ptr=&s1;
    ptr->display();
    int n=3;
    Students *arr=new Students[n];
    for(int i=0;i<n;i++){
        arr[i].id=i+2;
        arr[i].name="student";
    }
    cout<<"Array of objective\n";
    for(int i=0;i<n;i++)
        arr[i].display();
    delete[] arr;
    return 0;

    
}