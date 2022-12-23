#include<bits/stdc++.h>
using namespace std;
class Employee{
    // int unique_id;
public:

    string name;
    string company;
    int age;
    void myself()
    {
        cout<<"NAME -"<<name<<endl;
        cout<<"company -"<<company<<endl;
        cout<<"age -"<<age<<endl;
    }
};
int main()
{
    Employee emp1;
    emp1.name ="poojith";
    emp1.company ="Snewkar";
    emp1.age = 7;
    emp1.myself();

    Employee emp2;
    emp2.name ="poo";
    emp2.company ="Snew";
    emp2.age = 77 ;
    emp2.myself();
}