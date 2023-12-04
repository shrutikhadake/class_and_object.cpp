// using virtual function


#include <iostream>

class ExamResultAnalyzer {
public:
    virtual void enterTestResult(int result) = 0;
    virtual void displaySummary() = 0;
};

class InteractiveExamResultAnalyzer : public ExamResultAnalyzer {
private:
    int passedCount = 0;
    int failedCount = 0;

public:
    void enterTestResult(int result) override {
        if (result == 1) {
            passedCount++;
        } else if (result == 2) {
            failedCount++;
        } else {
            std::cout << "Invalid input: Result must be 1 (passed) or 2 (failed)." << std::endl;
        }
    }

    void displaySummary() override {
        std::cout << "Summary of Exam Results:" << std::endl;
        std::cout << "Number of students who passed: " << passedCount << std::endl;
        std::cout << "Number of students who failed: " << failedCount << std::endl;

        if (passedCount > 8) {
            std::cout << "Raise tuition." << std::endl;
        }
    }
};

int main() {
    InteractiveExamResultAnalyzer analyzer;

    for (int i = 0; i < 10; i++) {
        int result;
        std::cout << "Enter result (1 for passed, 2 for failed): ";
        std::cin >> result;
        analyzer.enterTestResult(result);
    }

    analyzer.displaySummary();

    return 0;
}

//using virtual function

#include <iostream>

class ExamResultAnalyzer {
public:
    virtual void enterTestResult(int result) = 0;
    virtual void displaySummary() = 0;
};

class InteractiveExamResultAnalyzer : public ExamResultAnalyzer {
private:
    int passedCount = 0;
    int failedCount = 0;

public:
    void enterTestResult(int result) override {
        if (result == 1) {
            passedCount++;
        } else if (result == 2) {
            failedCount++;
        } else {
            std::cout << "Invalid input: Result must be 1 (passed) or 2 (failed)." << std::endl;
        }
    }

    void displaySummary() override {
        std::cout << "Summary of Exam Results:" << std::endl;
        std::cout << "Number of students who passed: " << passedCount << std::endl;
        std::cout << "Number of students who failed: " << failedCount << std::endl;

        if (passedCount > 8) {
            std::cout << "Raise tuition." << std::endl;
        }
    }
};

int main() {
    InteractiveExamResultAnalyzer analyzer;

    for (int i = 0; i < 10; i++) {
        int result;
        std::cout << "Enter result (1 for passed, 2 for failed): ";
        std::cin >> result;
        analyzer.enterTestResult(result);
    }

    analyzer.displaySummary();

    return 0;
}
