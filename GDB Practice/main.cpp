#include <iostream>
#include <vector>
#include <string>

// ─── Bug 1: Wrong loop bound (off-by-one) ───────────────────────────────────
void printScores(const std::vector<int>& scores) {
    std::cout << "=== Scores ===" << std::endl;
    for (int i = 0; i <= scores.size(); i++) {   // BUG: should be <, not <=
        std::cout << "Score " << i << ": " << scores[i] << std::endl;
    }
}

// ─── Bug 2: Wrong formula ────────────────────────────────────────────────────
double calcAverage(const std::vector<int>& scores) {
    int sum = 0;
    for (int i = 0; i < scores.size(); i++) {
        sum += scores[i];
    }
    return sum / scores.size();   // BUG: integer division, should cast to double
}

// ─── Bug 3: Null pointer dereference ─────────────────────────────────────────
void printName(std::string* name) {
    std::cout << "Student: " << *name << std::endl;   // BUG: name can be nullptr
}

// ─── Bug 4: Uninitialized variable ───────────────────────────────────────────
int countPassing(const std::vector<int>& scores, int threshold) {
    int count;   // BUG: not initialized — undefined behavior
    for (int score : scores) {
        if (score >= threshold) count++;
    }
    return count;
}

// ─── Bug 5: Infinite loop ─────────────────────────────────────────────────────
int findFirst(const std::vector<int>& scores, int target) {
    int i = 0;
    while (scores[i] != target) {
        i++;   // BUG: if target not in vector, this goes out of bounds forever
    }
    return i;
}

int main() {
    std::vector<int> scores = {72, 85, 90, 61, 78};

    // Exercise 1: step through main, inspect 'scores' with 'print scores'
    std::cout << "Number of students: " << scores.size() << std::endl;

    // Exercise 2: step into calcAverage, watch 'sum' accumulate
    double avg = calcAverage(scores);
    std::cout << "Average: " << avg << std::endl;   // will print 77, not 77.2

    // Exercise 3: step into countPassing, inspect 'count' before the loop
    int passing = countPassing(scores, 70);
    std::cout << "Passing (>=70): " << passing << std::endl;   // garbage value

    // Exercise 4: set a breakpoint in printName, call with nullptr intentionally
    std::string* name = nullptr;
    //printName(name);   // crash here — use 'bt' after to see call stack

    // Exercise 5 & 6 below won't run due to crash above,
    // but you can comment out Exercise 4 to reach them
    printScores(scores);       // off-by-one crash
    int idx = findFirst(scores, 999);   // infinite loop / out-of-bounds
    std::cout << "Found at index: " << idx << std::endl;

    return 0;
}