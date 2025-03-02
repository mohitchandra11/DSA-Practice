#include <iostream>
#include <string>  

using namespace std;

class Teacher {
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;

        void changeDept(string newDept) {
            dept = newDept;
        }

        // Setter
        void setSalary(double s) {
            salary = s;
        }

        // Getter
        double getSalary() {   
            return salary;
        }
};

int main() {
    Teacher t1;
    t1.name = "XYZ"; 
    t1.dept = "Computer Science";
    t1.subject = "C++";
    t1.setSalary(50000); 

    cout << t1.name << endl;
    cout << t1.dept << endl;
    cout << t1.subject << endl;
    cout << t1.getSalary() << endl;

    return 0;
}
