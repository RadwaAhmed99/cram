#include <bits/stdc++.h>

using namespace std;

void cipher();
void decipher();

int main()
{
    int userChoice = -1;
    while(userChoice!=3){
        cout << "1- Cipher" << endl << "2- Decipher" << endl << "3- Exit" << endl;
        cin >> userChoice;

        if(userChoice == 1){
            cipher();
        }

        else if(userChoice == 2){
            decipher();
        }
    }
    return 0;
}

void cipher(){
    int charRep, counter = 1;
    char lowerCase[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char upperCase[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    string toBeCiphered = "";
    string charEncode = "aaaaa";
    string textEncode = "";

    cout << "Enter text to be ciphered: ";
    cin.ignore();
    getline(cin, toBeCiphered);

    for(int i=0; i<toBeCiphered.size(); i++){
        for(int j=0; j<26; j++){
            if(toBeCiphered[i] == lowerCase[j] || toBeCiphered[i] == upperCase[j]){
                charRep = j;
                while(charRep > 0 && counter <= charEncode.size()){
                    if(charRep % 2 != 0){
                        charEncode[charEncode.size()-counter] = 'b';
                    }
                    counter++;
                    charRep = floor(charRep / 2);
                }
                textEncode += charEncode;
                textEncode += " ";
                charEncode = "aaaaa";
                counter = 1;
                break;
            }
            else if(toBeCiphered[i] == ' '){
                textEncode += "bbaba ";
                break;
            }
        }
    }

    cout << textEncode << endl;
}

void decipher(){
        char lowerCase[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
        string code[27] = {"aaaaa","aaaab","aaaba","aaabb","aabaa","aabab","aabba","aabbb","abaaa","abaab","ababa","ababb","abbaa","abbab","abbba","abbbb","baaaa","baaab","baaba","baabb","babaa","babab","babba","babbb","bbaaa","bbaab","bbaba"};
        string toBeDeciphered;
        string encodedChar = "";
        string decipheredText = "";
        cout << "Enter text to be deciphered: ";
        cin.ignore();
        getline(cin, toBeDeciphered);

        for(int i=0; i<toBeDeciphered.size(); i++){
            if(i == toBeDeciphered.size()-1){
                encodedChar += toBeDeciphered[i];
            }
            if(toBeDeciphered[i] != ' ' && i != toBeDeciphered.size()-1){
                encodedChar += toBeDeciphered[i];
            }
            else{
                for(int j=0; j<27; j++){
                    if(encodedChar == code[j]){
                        decipheredText += lowerCase[j];
                        encodedChar = "";
                        break;
                    }
                }
            }
        }

        cout << decipheredText << endl;
}
