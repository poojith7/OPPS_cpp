#include<bits/stdc++.h>
using namespace std;
class AbstractEmployee
{
    virtual void AskForpromotion()=0;
};
class Employee:AbstractEmployee{
    // int unique_id;
private:
   
    string Company;
    int Age;
protected:
    string Name;
public:

    void setName(string name)//this is a setter
    {
        Name = name;
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
    void AskForpromotion()//abstraction method 
    {
        if(Age>19) cout<<Name<<"Your promted"<<endl;
        else cout<<Name<<"not promted<<endl"<<endl;    
    }
};
class Developer:public Employee{
    public:
    string lang;
    Developer(string name,string company,int age ,string lang1):Employee(name , company,age)
    {
        lang = lang1;

    }
    void fixbug()
    {
        cout<<Name<<"is"<<lang<<endl;
    }
};
class Teacher:public Employee{
    public:
    string subject;
    Teacher(string name,string comapny,int age,string sub):Employee(name,comapny,age)
    {
        subject = sub;
    }
    void prepless()
    {
        cout<<Name<<"is preparing"<<subject<<"lesson"<<endl;
    }
};
int main()
{
    // Employee emp1("poojith","snewkar",7);//here a constructer is invoked
    // emp1.name ="poojith";
    // emp1.company ="Snewkar";
    // emp1.age = 7;
    // emp1.myself();

    // Employee emp2("poo","snew",77);
    // emp2.name ="poo";
    // emp2.company ="Snew";
    // emp2.age = 77 ;
    // emp2.myself();
    // emp1.setAge(5)
    // cout<<emp1.getName()<<"is"<<emp1.getAge()<<endl;
    // emp1.AskForpromotion();
    Developer dev = Developer("poojith1","company",7,"c++");
    dev.fixbug();
    dev.AskForpromotion();
    Teacher t("poojith5","lolo",77,"math");
    t.prepless();


    
}  