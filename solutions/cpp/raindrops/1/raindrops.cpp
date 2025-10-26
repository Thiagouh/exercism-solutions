#include "raindrops.h"
#include <string>

namespace raindrops {
    std::string convert(int number) {
        std::string solution = "";
        if (number % 3 == 0) {
            solution.append("Pling");
        }
        if (number % 5 == 0) {
            solution.append("Plang");
        }
        if (number % 7 == 0) {
            solution.append("Plong");
        }
        return solution.size() != 0 ? solution : std::to_string(number);
    }
}
