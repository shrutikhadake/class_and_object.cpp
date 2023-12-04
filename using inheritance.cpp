//using inheriantance

#include <iostream>

class ExamResults {
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

    void displaySummary() {
        std::cout << "Summary of Exam Results:" << std::endl;
        std::cout << "Number of students who passed: " << passedCount << std::endl;
        std::cout << "Number of students who failed: " << failedCount << std::endl;

        if (passedCount > 8) {
            std::cout << "Raise tuition." << std::endl;
        }
    }
};

int main() {
    ExamResults results;

    for (int i = 0; i < 10; i++) {
        int result;
        std::cout << "Enter result (1 for passed, 2 for failed): ";
        std::cin >> result;
        results.enterTestResult(result);
    }

    results.displaySummary();

    return 0;
}
