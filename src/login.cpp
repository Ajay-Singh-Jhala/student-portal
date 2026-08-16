#include <iostream>
#include <string>

struct Session {
    bool isLoggedIn = false;
    int failedAttempts = 0;
};

bool validateCredentials(const std::string& username, const std::string& password) {
    return !username.empty() && !password.empty();
}

bool login(Session& session, const std::string& username, const std::string& password) {
    if (session.failedAttempts >= 3) {
        std::cout << "Account locked. Too many failed attempts." << std::endl;
        return false;
    }
    if (!validateCredentials(username, password)) {
        session.failedAttempts++;
        std::cout << "Login failed. Attempt " << session.failedAttempts << " of 3." << std::endl;
        return false;
    }
    session.isLoggedIn = true;
    session.failedAttempts = 0;
    std::cout << "Login successful. Welcome, " << username << "!" << std::endl;
    return true;
}
void logout(Session& session) {
    session.isLoggedIn = false;
    std::cout << "User logged out." << std::endl;
}
