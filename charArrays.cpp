#include<iostream>
using namespace std;

// int main(){

//     char ch1 = 'D';

//     if(ch1 >= 'A' && ch1 <= 'Z'){
//         cout << ch1 << " is a upper case letter.\n";
//         ch1 = ch1 - 'Z' + 'z';
//         cout << ch1 << " is now a lower case letter."; 
//     }

//     return 0;
// }

// int main(){
//     string name = "Sia";

//     cout << name << "\n";

//     int size = name.size();

//     for(int i = 0; i < size; i++){
//         cout << name[i] << " ";
//     }


//     return 0;
// }


// int main(){

//     char name[10];

//     name[0] = 'S';
//     name[1] = '\0';
//     name[2] = 'i';
//     name[3] = 'a';
//     name[4] = '\0';

//     cout << name << "\n";
//     cout << name[0] << " " << name[1];

//     return 0;
// }

// Reading string with spaces

// int main(){

//     string name1;

//     getline(cin , name1);

//     cout << name1 << "\n";

//     char name2[50];

//     cin.getline(name2, 50);

//     cout << name2 << "\n";

//     return 0;
// }

// int main(){

//     int n;

//     cin >> n;

//     string sentences[n] = {"HI lavde", "Hello World", "Maa chuda"};

//     for(int i = 0; i < n; i++){
//         cout << sentences[i] << "\n";
//     }

//     return 0;
// }

// int main(){

//     string sentenz[5];

//     for(int i = 0; i < 5; i++){
//         cin >> sentenz[i];
//     }

//     for(int i = 0; i < 5; i++){
//         cout << sentenz[i] << " ";
//     }

//     return 0;
// }

// Escape Characters

// int main(){

//     // Some examples of escape characters are:
//     // \n = new line
//     // \t = tab
//     // \0 = null
//     // \" = "

//     cout << "Hello\tWorld" << "\n";
//     cout << "\0";
//     cout << "\"HI i am good wbu\"";


//     return 0;
// }

// int main(){

//     string words[] {"Cpp", "is", "challenging!"};

//     int n = 3;

//     string all;

//     for(int i = 0; i < n; i++){
//         all += words[i] + ","; 
//     }


//     cout << all;

//     return 0;
// }

// Char Array Practise

// ConC Strings

// int main(){

//     string str1, str2;

//     cin >> str1 >> str2;

//     int mx_size = str1.size();

//     if(mx_size < str2.size()){
//         mx_size = str2.size();
//     }

//     for(int i = 0; i < mx_size; i++){
//         if(i < str1.size()){
//             cout << str1[i];
//         }

//         if(i < str2. size()){
//             cout << str2[i];
//         }
//     }
    

//     return 0;
// }


// Letters Frequency

// int main(){

//     string letters;

//     cin >> letters;

//     int frequency[150] = {0};

//     for(int i = 0; i < letters.size(); i++){
//         frequency[letters[i]]++;
//     }

//     for(int i = 'a'; i <= 'z'; i++){
//         if(frequency[i]){
//             cout << (char) i << " " << frequency[i] << "\n";
//         }
//     }

//     return 0;
// }


// Special String Mapping

// int main(){

//     string from = "abcdefghijklmnopqrstuvwxyz0123456789";
//     string to   = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

//     char letter_map[150] = {0};

//     for(int i = 0; i < from.size(); i++){
//         letter_map[from[i]] = to[i];
//     }

//     string input;

//     cin >> input;

//     for(int i = 0; i < input.size(); i++){

//         if(input[i] >= 'A' && input[i] <= 'Z'){
//             continue;
//         }
//         input[i] = letter_map[input[i]];
        
//     }

//     cout << input;

//     return 0;
// }


// Is Prefix?

// int main(){

//     string input, str;

//     cin >> input >> str;

//     int count {0};

//     for(int i = 0; i < str.size(); i++){
//         if(str[i] == input[i]){
//             count++;
//         }
//     }

//     if(count == str.size()){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }

//     return 0;
// }




// Is Suffix?

// int main(){

//     string input, str;

//     cin >> input >> str;

//     if(str.size() > input.size()){
//         cout << "NO";
//         return 0;
//     }

//     int count = 0;
//     int temp1 = str.size()-1;
//     int temp2 = input.size()-1;

//     for(int i = 0; i < str.size(); i++){
//         if(str[temp1] == input[temp2]){
//             count++;
//             temp1--;
//             temp2--;
//         }
//     }

//     if(count == str.size()){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }

//     return 0;
// }





// Is Substring?

// int main(){

//     string input, str;

//     cin >> input >> str;

//     int count {0};

//     for(int i = 0; i < str.size(); i++){
//         for(int j = 0; j < input.size(); j++){
//             if(str[i] == input[j]){
//                 count++;
//             }
//         }
//     }

//     if(count == str.size()){
//         cout << "YES! A Subtring";
//     }else{
//         cout << "Not a Subtring";
//     }

//     return 0;
// }



// Is Subsequence??

// int main(){

//     string input, str;

//     cin >> input >> str;

//     if(str.size() > input.size()){
//         cout << "NO";
//         return 0;
//     }


//     for(int i = 0; i < input.size() - str.size() + 1; i++){
//         bool is_true = true;

//         for(int j = 0; j < str.size(); j++){
//             if(str[j] != input[i+j]){
//                 is_true = false;
//             }     
//         }

//         if(is_true){
//                 cout << "YES";
//                 return 0;
//             }
//     }

//     cout << "NO";

//     return 0;
// }




// Convert to Number

// int main(){

//     int number = 0;
    
//     string input;

//     cin >> input;

//     for(int i = 0; i < (int)input.size(); i++){
//         number  =  number*10 + (input[i] - '0');
//     }

//     cout << number << " " << number * 3;

//     return 0;
// }


// Grouping

// int main(){

//     string str;

//     cin >> str;

//     for(int i = 0; i < (int)str.size(); i++){
//         if(i != 0 && str[i-1] != str[i]){
//             cout << " ";
//         }
//         cout << str[i];
//     }

// }




// Compressing

// int main(){

//     string letters;

//     cin >> letters;

//     int frequency[150] = {0};

//     for(int i = 0; i < (int)letters.size(); i++){
//         frequency[letters[i]]++;
//     }

//     for(int i = 0; i < (int)letters.size(); i++){
//             if(letters[i] != letters[i-1]){
//                 cout << letters[i] << frequency[letters[i]];
//                 if(i < (int)letters.size() - 1){
//                     cout << "_";
//                 }
                
//             }
//         }

//     return 0;

//     }

    



// Compare Strings

// int main(){

//     string str1, str2;

//     cin >> str1 >> str2;

//     if(str1 > str2){
//         cout << "NO";
//     }

//     if(str1 <= str2){
//         cout << "YES";
//     }

//     return 0;
// }


// Add 5555

int main(){

    string input;
    cin >> input;

    string str = "5555";

    string temp = input;


    for(int i = (int)input.size() - 1; i > (int)input.size() - (int)str.size(); i++){
        input[i] = '5';
    }

    cout << input;
    


    return 0;
}


