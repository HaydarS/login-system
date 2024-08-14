#include <iostream>
#include <string>

using namespace std;

int main() {

    const string correctUsername = "admin";
    const string correctPassword = "anan";

    string username;
    string password;
    int attempt = 0;
    const int maxAttempts = 3;

    while (attempt < maxAttempts) {

        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Giris basarili!" << endl;
        }
        else {
            cout << "Giris basarisiz!" << endl;
        }
    }
    return 0;

}