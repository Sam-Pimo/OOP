#include <iostream>
using namespace std;

class Employee{
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
};

int main() {
    Employee employee1 = Employee("Sam", "Liquid-Telecoms", 25);
    employee1.introduceYourself();

    Employee employee2 = Employee("John", "Amazon", 35);
    employee2.introduceYourself();

    employee2.setAge(42); //testing the setters and getters
    cout<< employee2.getName() << " is " << employee2.getAge() <<" years old." <<endl;
}