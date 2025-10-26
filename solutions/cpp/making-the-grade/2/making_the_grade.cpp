#include <array>
#include <string>
#include <vector>
#include <algorithm>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> truncated_student_scores{};
    for ( auto score : student_scores ) {
        int truncated_score = static_cast<int>(score);
        truncated_student_scores.emplace_back(truncated_score);
    }
    return truncated_student_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> students_scores) {
    // TODO: Implement count_failed_students
    return static_cast<int>
        (std::count_if(students_scores.begin(), students_scores.end(), [](const auto& score) { return score <= 40; }));
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int interval = (highest_score - 40) / 4;
    int limit_D = 41;
    int limit_C = 41 + interval;
    int limit_B = 41 + 2 * interval;
    int limit_A = 41 + 3 * interval; 
    std::array<int, 4> lower_limits = { limit_D, limit_C, limit_B, limit_A };
    return lower_limits;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking = {};
    for (int i = 0; i < student_names.size(); i++) {
        std::string position = std::to_string(i + 1) + ". " + student_names.at(i) + ": " + std::to_string(student_scores.at(i));
        ranking.push_back(position);
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    std::string higher_score = "";
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores.at(i) == 100) {
            higher_score = student_names.at(i);
            break;
        }
    }
    return higher_score;
}
