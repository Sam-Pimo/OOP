#include <iostream>
using namespace std;
class AbstractEmployee{
    /*Abstract class with pure virtual function:
    This function should be implemented in every class 
    that inherits it.*/
    virtual void askForPromotion() = 0;
};
class Employee : AbstractEmployee{
    private:
    string Name;
    string Company;
    int Age;

public:
void setName(string name){
    Name = name;
}
string getName(){
    return Name;
}

void setCompany(string company){
    Company = company;
}
string getCompany(){
    return Company;
}

void setAge(int age){
    Age = age;
}
int getAge(){
    return Age;
}
    void introduceYourself() {
        cout << "Name- " << Name << endl;
        cout << "Company- " << Company << endl;
        cout << "Age- " << Age << endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void askForPromotion(){
        if (Age >= 30)
        cout<< Name << " got promoted!" <<endl;
        else cout << Name << ", sorry No promotion for you!" <<endl;
    }
};

int main() {
    Employee employee1 = Employee("Sam", "Liquid-Telecoms", 25);
    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.askForPromotion();
    employee1.askForPromotion();

}