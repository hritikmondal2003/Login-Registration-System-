#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser();
bool loginUser();
void forgotPassword();

int main() {
    int choice;
    
    while (true) {
        cout << "\n===== Login & Registration System =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Forgot Password\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                if (loginUser()) {
                    cout << "\nLogin Successful! Welcome!\n";
                } else {
                    cout << "\nLogin Failed! Invalid credentials.\n";
                }
                break;
            case 3:
                forgotPassword();
                break;
            case 4:
                cout << "\nExiting...\n";
                return 0;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    }
    return 0;
}

void registerUser() {
    string username, password;
    cout << "\nEnter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    
    ofstream file("users.txt", ios::app);
    file << username << " " << password << "\n";
    file.close();
    
    cout << "\nRegistration successful!\n";
}

bool loginUser() {
    string username, password, u, p;
    cout << "\nEnter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    
    ifstream file("users.txt");
    while (file >> u >> p) {
        if (u == username && p == password) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

void forgotPassword() {
    string username, u, p;
    cout << "\nEnter your username: ";
    cin >> username;
    
    ifstream file("users.txt");
    bool found = false;
    while (file >> u >> p) {
        if (u == username) {
            cout << "\nYour password is: " << p << "\n";
            found = true;
            break;
        }
    }
    file.close();
    
    if (!found) {
        cout << "\nUsername not found!\n";
    }
}
