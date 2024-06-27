// Approach 1 - start looking for the character from the back of the string
int getLastIndex(char c, string s) {
    
    if (s == "") {
        return -1;
    }
    for(int i = s.length() - 1; i >= 0; i--) {
        if(s[i] == c) {
            return i;
        }
    }
    
    return -2;
}

// Approach 2 - reverse the string and then look for the character
// A little convoluted 

int getLastIndex(char c, string s) {
    
    if (s == "") {
        return -1;
    }
    
    string new_s = "";
    
    for(int i = s.length() - 1; i >= 0; i--){
        new_s = new_s + s[i];
    }
    
    // cout << new_s << endl;
    
    for(int i = 0; i < new_s.length(); i++){
        if(new_s[i] == c){
            return (s.length() - i - 1); //the index is now reversed
        }
    }
    
    return -2;
}