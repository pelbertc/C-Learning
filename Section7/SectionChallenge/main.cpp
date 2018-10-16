#include <iostream>
#include <vector>

using namespace std;

int main(){
    //Declare 2 empty vector of int 
    vector <int> vector1 {};
    vector <int> vector2 {};
    
    //Add 10 and 20 to vector1 
    int score1 {};
    int score2 {};
    cout << "Please enter 2 scores to add to vector1 : ";
    cin >> score1 >> score2;
    vector1.push_back(score1);
    vector1.push_back(score2);
    cout << "\nThere are now " << vector1.size() << " scores in the vector1" << endl;
    
    //2 numbers to vector2 as well
    int score3 {};
    int score4 {};
    cout << "Please enter 2 scores to add to vector2 : ";
    cin >> score3 >> score4;
    vector2.push_back(score3);
    vector2.push_back(score4);
    cout << "\nThere are now " << vector2.size() << " scores in the vector2" << endl;
    
    //equating the value on vector1 to vector2 
    //for (int i = 0; i < 2; i++) { vector1.push_back(i * i); }
    //vector2 = vector1; // Now
    
    //cout << "\nThere are now " << vector1.size() << " scores in the vector1" << endl;
    //cout << "\nThere are now " << vector2.size() << " scores in the vector2" << endl;
    
    //trying to add vector1 to 2dimension vector
    vector <vector<int>> ddimen; 
    ddimen.push_back(vector1); //very important I could not find this anywhere
    ddimen.push_back(vector2);
    
    cout << "2D Vector : " << endl;
    cout << ddimen.at(0).at(0) << " " << ddimen.at(0).at(1) << endl;
    cout << ddimen.at(1).at(0) << " " << ddimen.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
    return 0;
}
