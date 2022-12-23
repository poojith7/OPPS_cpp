#include<bits/stdc++.h>
using namespace std;
class Employee{
    // int unique_id;
private:
    string Name;
    string Company;
    int Age;
public:

    void setName(string name)//this is a setter
    {
        Name =name;
    }
    string getName()//this is a geeter 
    {
        return Name;
    }
    void setCompany(string company)//this is a setter
    {
        Company = company;
    }
    string getCompany()//this is a geeter 
    {
        return Company;
    }
    void setAge(int age)//this is a setter
    {
       if(age>=18) Age =age;
    }
    int  getAge()//this is a geeter 
    {
        return Age;
    }
   
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
    emp1.setAge(5);
    cout<<emp1.getName()<<"is"<<emp1.getAge()<<endl;


    
} 