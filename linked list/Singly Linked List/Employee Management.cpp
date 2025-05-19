// add
// delete
// search
// update 
// display 
// count 
// sort 
// reverse 
// exit 

#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        int id;
        string name;
        string department;
        float salary;

        Employee* next;

        Employee(int id, const string&name, const string&department, float salary){
            this->id = id;
            this->name = name;
            this->department = department;
            this->salary = salary;
            this->next = nullptr;
        }
};


Employee* addEmployee(Employee* head) {
    int id;
    string name, department;
    float salary;

    cout<<"Enter following details to add employee"<<endl;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Department: ";
    getline(cin, department);
    cout << "Enter Salary: ";
    cin >> salary;

    Employee* newEmp = new Employee(id, name, department, salary);
    if (!head) return newEmp;

    Employee* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newEmp;

    cout<<"Employee added successfully";

    return head;
}


Employee* updateEmployee(Employee* head, int id) {
    Employee* temp = head;
    while (temp) {
        if (temp->id == id) {
            cout << "Enter new Name: ";
            cin.ignore();
            getline(cin, temp->name);
            cout << "Enter new Department: ";
            getline(cin, temp->department);
            cout << "Enter new Salary: ";
            cin >> temp->salary;
            cout << "Employee updated successfully!" << endl;
            return head;
        }
        temp = temp->next;
    }
    cout << "Employee not found!" << endl;
    return head;
}

Employee* deleteEmployee(Employee* head, int id) {
    if (!head) return nullptr;

    if (head->id == id) {
        Employee* temp = head;
        head = head->next;
        delete temp;
        cout << "Employee deleted successfully!" << endl;
        return head;
    }

    Employee* current = head;
    while (current->next && current->next->id != id) {
        current = current->next;
    }

    if (current->next) {
        Employee* temp = current->next;
        current->next = temp->next;
        delete temp;
        cout << "Employee deleted successfully!" << endl;
    } else {
        cout << "Employee not found!" << endl;
    }

    return head;
}

Employee* searchEmployee(Employee* head, int id) {
    Employee* temp = head;
    while (temp) {
        if (temp->id == id) {
            cout << "ID: " << temp->id << ", Name: " << temp->name
                 << ", Department: " << temp->department
                 << ", Salary: " << temp->salary << endl;
            return temp;
        }
        temp = temp->next;
    }
    cout << "Employee not found!" << endl;
    return nullptr;
}

int countEmployee(Employee* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    cout << "Total Employees: " << count << endl;
    return count;
}

void sortEmployee(Employee* head) {
    if (!head || !head->next) return;

    for (Employee* i = head; i->next; i = i->next) {
        for (Employee* j = i->next; j; j = j->next) {
            if (i->id > j->id) {
                swap(i->id, j->id);
                swap(i->name, j->name);
                swap(i->department, j->department);
                swap(i->salary, j->salary);
            }
        }
    }
    cout << "Employees sorted by ID!" << endl;
}

void reverseEmployeeList(Employee*& head) {
    Employee* prev = nullptr;
    Employee* curr = head;
    Employee* next = nullptr;

    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    cout << "Employee list reversed!" << endl;
}

void displayallEmployees(Employee* head) {
    if (!head) {
        cout << "No employees to display." << endl;
        return;
    }

    while (head) {
        cout << "ID: " << head->id << ", Name: " << head->name
             << ", Department: " << head->department
             << ", Salary: " << head->salary << endl;
        head = head->next;
    }
}

void exitProgram(Employee* head) {
    while (head) {
        Employee* temp = head;
        head = head->next;
        delete temp;
    }
    cout << "Program exited and memory freed." << endl;
}


int main() {
    int choice, id;
    Employee* head = nullptr;

    while (true) {
        cout << "\n1. Add Employee"
             << "\n2. Update Employee"
             << "\n3. Delete Employee"
             << "\n4. Search Employee"
             << "\n5. Count Employees"
             << "\n6. Sort Employees"
             << "\n7. Reverse Employee List"
             << "\n8. Display All Employees"
             << "\n9. Exit"
             << "\n\nEnter your choice: ";
        cin >> choice;
        cout<<endl;

        switch (choice) {
            case 1:
                head = addEmployee(head);
                break;
            case 2:
                cout << "Enter ID to update: ";
                cin >> id;
                head = updateEmployee(head, id);
                break;
            case 3:
                cout << "Enter ID to delete: ";
                cin >> id;
                head = deleteEmployee(head, id);
                break;
            case 4:
                cout << "Enter ID to search: ";
                cin >> id;
                searchEmployee(head, id);
                break;
            case 5:
                countEmployee(head);
                break;
            case 6:
                sortEmployee(head);
                break;
            case 7:
                reverseEmployeeList(head);
                break;
            case 8:
                displayallEmployees(head);
                break;
            case 9:
                exitProgram(head);
                return 0;
            default:
                cout << "Invalid choice, try again." << endl;
        }
    }

    return 0;
}