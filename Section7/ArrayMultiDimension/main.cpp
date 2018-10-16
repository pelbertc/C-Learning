#include <iostream>

using namespace std;

int main(){
    const int rows {3};
    const int cols {4};
    
   // int movie_rating [rows][cols];
    //initializing multi-dimensional arrays
    int movie_rating [3][4];
    {
        {0,4,3,5},{2,3,4,3},{2,0,8,4};
    };
    cin >> movie_rating[1][2];
    cout << movie_rating[1][2];
    
    return 0;
}
