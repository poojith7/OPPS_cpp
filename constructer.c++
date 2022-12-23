#include<bits/stdc++.h>
using namespace std;
class Employee{
    // int unique_id;
public:

    string Name;
    string Company;
    int Age;
    void myself()
    {
        cout<<"NAME -"<<Name<<endl;
        cout<<"company -"<<Company<<endl;
        cout<<"age -"<<Age<<endl;
    }
    Employee(string name,string company,int age)//this is a constructor
    {  
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee emp1("poojith","snewkar",7);//here a constructer is invoked
    // emp1.name ="poojith";
    // emp1.company ="Snewkar";
    // emp1.age = 7;
    emp1.myself();

    Employee emp2("poo","snew",77);
    // emp2.name ="poo";
    // emp2.company ="Snew";
    // emp2.age = 77 ;
    emp2.myself();
}