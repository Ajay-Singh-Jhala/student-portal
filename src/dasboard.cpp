#include <iostream>
#include <string>
#include <vector>

struct CourseGrade {
    std::string courseName;
    int grade;
};
double calculateAverage(const std::vector<CourseGrade>& grades) {
    if (grades.empty()) return 0.0;
    double sum = 0;
    for (const auto& g : grades) {
        sum += g.grade;
    }
    return sum / grades.size();
}
