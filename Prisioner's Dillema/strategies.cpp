#include "strategies.h"
#include <vector>

int titForTat(std::vector<int> rounds) {
    bool first = true;
    int result = 0;

    for (int round : rounds) {
        if (first) {
            // cooperate
            first = false;
        }
        else {
            if (rounds[round - 1]) { // cooperate
                result += 3;
            }
            else { // defect
                result += 0;
            }
        }
    }

    // call function to print both players sequences?

    return result;
}