using namespace std;

int main(){
    
    const int min{10};
    const int max{100};
    
    cout << "Enter a number between " << min << " and " << max << endl;
    
    if(num >= min){
        cout << num << "is greater than " << min << endl;
    } 
    cout << "Please enter num: ";
    int num;
    cin >> num;
    if(num < 10){
        num++;
            cout << "Num " << num << endl;
    }
  
    return 0;
}
