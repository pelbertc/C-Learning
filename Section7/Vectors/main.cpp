#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    //vector <char> vowels; //empty
    //vector <char> vowels(5); //5 initialized to zero
    vector <char> vowels {'a','e','i','o','u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
    //vector <int> test_scores (3); //3 elements all initialized to zero
    //vector <int> test_scores (3,100); //3 elements all initilized to zero
    
    vector <int> test_scores {100,98,89};
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    
    cout << "\nTest scores using vector syntax:" << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThe are " << test_scores.size() << " scores in the vector" << endl;
    
    cout << "\nEnter 3 test scores: ";
    
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "\nUpdate test scores: " << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    
    cout << "\nEnter a test score to add to the vector: ";
    
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "\n Test score update" << endl;
    
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
   //the Vector function does check for boundaries, example if I print below, it will crash the app
   //cout << test_scores.at(4) << endl;
   

    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;
    
    //Example of a 2D-vector
    vector <vector<int>> movie_ratings
    {
        {1,3,4,3},
        {3,2,9,2},
        {3,0,8,9}
    };
    
    cout << "\nHere are the movie rating for reviewer #using array syntax : " << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[2][1] << endl;
    
    return 0;
}
