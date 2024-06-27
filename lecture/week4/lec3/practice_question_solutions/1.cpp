int countVowels(string s) {
    
    if (s == "") {
        return -1;
    }
    
    int count = 0;
    
    string new_s = "";
    for (int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])) {
            char c = tolower(s[i]);
            new_s = new_s + c;
        }
        else{
            new_s = new_s + s[i];
        }
    }
    
    // cout << new_s << endl; 
    
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (new_s[i] == 'a' || new_s[i] == 'e' || new_s[i] == 'i' || new_s[i] == 'o' || new_s[i] == 'u') {
                count++;
            }
        }
    }
    
    return count;
}