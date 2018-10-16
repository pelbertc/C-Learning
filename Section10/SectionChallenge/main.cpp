#include <iostream>
#include <string>

using namespace std;

int main(){
    while(1){
    string alpha {" -abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'"};
    string key {"- QWEZXCVBNMLKJHGFDSA)(*&^%$#@!?><,./\][{}|~1234567890)"};
    
    string secret_message{};
    cout << "Enter secret message: ";
    getline(cin, secret_message);
    
    string encrypted_message{};
    
    cout << "\nEncrypting message..." << endl;
    for(char c: secret_message){
        size_t position = alpha.find(c);
        if(position != string::npos){
            char new_char{key.at(position)};
            encrypted_message += new_char;
            
        }else{
            encrypted_message += c;
        }
    }
    
    cout << "\nEncrypted message: " << encrypted_message << endl;
    
    string decrypted_message{};
    cout << "\nDecrypting message..." << endl;
    for(char c: encrypted_message){
        size_t position = key.find(c);
        if(position != string::npos){
            char new_char{alpha.at(position)};
            decrypted_message += new_char;
        }else{
            decrypted_message += c;
        }
    }
    cout << "\nDecrypted message: " << decrypted_message << endl;
    cout << endl;
    
    }
    return 0;
}
