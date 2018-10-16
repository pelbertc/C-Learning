//Section 19
//Challenge 2 answer

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void print_header(){
    cout << std::setw(15) << std::left << "Student"
         << std::setw(5) << "Score" << endl;
    cout << std::setw(20) << std::setfill('-') << "" << endl;
    cout << std::setfill(' ');
}

void print_footer(double average){
    cout << std::setw(20) << std::setfill('-') << "" << endl;
    cout << std::setfill(' ');
    cout << std::setw(15) << std::left << "Average score"
         << std::setw(5) << std::right << average;
}

void print_student(const std::string &student, int score){
    cout << std::setprecision(1) << std::fixed;
    cout << std::setw(15) << std::left << student
         << std::setw(5) << std::right << score << endl;
}

//return the number of correct responses
int process_response(const std::string &response, const std::string &answer_key){
        int score{0};
        for(size_t i=0; i<answer_key.size(); ++i){
            if(response.at(i) == answer_key.at(i))
                score++;
        }
        
        return score;
}

int main(){
    ifstream in_file;
    string answer_key{};
    string name{};
    string response{};
    int running_sum{0};
    int total_students{0};
    double average_score{0.0};
    
    in_file.open("../responses.txt");
    if(!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    //Reading first string in the file and storing it in answer key [ABCDE]
    in_file >> answer_key;
    
    //Display - Student and Score with dash underneath
    print_header();
    
    while(in_file >> name >> response){
        ++total_students;
        //Comparing the student response to the answer key
        int score = process_response(response, answer_key);
        running_sum += score;
        print_student(name, score);
    }
    
    //Calculating the total average score
    if(total_students != 0)
        average_score = static_cast<double>(running_sum)/total_students;
        
    print_footer(average_score);
    
    //Closing the file
    in_file.close();
    cout << endl << endl;
 
    return 0;
}
