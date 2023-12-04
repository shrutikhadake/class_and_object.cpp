//using friend function

#include <iostream>

class ExamResultAnalyzer {
private:
    int passedCount = 0;
    int failedCount = 0;

public:
    void enterTestResult(int result) {
        if (result == 1) {
            passedCount++;
        } else if (result == 2) {
            failedCount++;
        } else {
            std::cout << "Invalid input: Result must be 1 (passed) or 2 (failed)." << std::endl;
        }
    }

    friend void displaySummary(const ExamResultAnalyzer& analyzer);
};

void displaySummary(const ExamResultAnalyzer& analyzer) {
    std::cout << "Summary of Exam Results:" << std::endl;
    std::cout << "Number of students who passed: " << analyzer.passedCount << std::endl;
    std::cout << "Number of students who failed: " << analyzer.failedCount << std::endl;

    if (analyzer.passedCount > 8) {
        std::cout << "Raise tuition." << std::endl;
    }
}

int main() {
    ExamResultAnalyzer analyzer;

    for (int i = 0; i < 10; i++) {
        int result;
        std::cout << "Enter result (1 for passed, 2 for failed): ";
        std::cin >> result;
        analyzer.enterTestResult(result);
    }

    displaySummary(analyzer);

    return 0;
}
