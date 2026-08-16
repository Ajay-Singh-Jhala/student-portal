#include <iostream>
#include <string>

struct Session {
    bool isLoggedIn = false;
    int failedAttempts = 0;
};

bool validateCredentials(const std::string& username, const std::string& password) {
    return !username.empty() && !password.empty();
}
