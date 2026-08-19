#include <iostream>
using namespace std;
class AIML{
        public :
        inline int fun(int a,int b){
            return a+b;
        }

        int add(int a,int b){
            return a+b;

        }
        double add(double a,double b){
            return a+b;
        }
        int add(int a=2,int b=3){
            return a+b;
        }
    };
int main(){
        AIML c;
        int x,y;
        cout<<"enter your no.";
        cin>>x>>y;
        
        cout<<c.fun(x,y)<<endl;
        cout<<c.add(x,y)<<endl;
  

    return 0;
    }






























// #include <iostream>
// using namespace std;

// class Arithmetic
// {
// public:
   
//     inline int add(int a, int b)
//     {
//         return a + b;
//     }

   
//     int multiply(int a, int b = 2)
//     {
//         return a * b;
//     }

   
//     int subtract(int a, int b)
//     {
//         return a - b;
//     }

//     float subtract(float a, float b)
//     {
//         return a - b;
//     }
// };

// int main()
// {
//     Arithmetic obj;
//     int x, y;

//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     cout << "Addition = " << obj.add(x, y) << endl;

//     cout << "Multiplication (Default Argument) = " << obj.multiply(x) << endl;
//     cout << "Multiplication = " << obj.multiply(x, y) << endl;

//     cout << "Subtraction (Integer) = " << obj.subtract(x, y) << endl;
//     cout << "Subtraction (Float) = " << obj.subtract(20.5f, 10.5f) << endl;

//     return 0;
// }