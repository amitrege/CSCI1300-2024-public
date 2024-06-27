// Your job is to only write the function 'arr_proc'
// DO NOT write a main or include headers

string arr_proc(char arr[], int size) {
    
    string new_s = "";
    
    for(int i=0; i < size; i++) {
        if(isupper(arr[i])) {
            cout << arr[i] << endl;
        }
        
        new_s = new_s + arr[i];
    }
    
    return new_s;
}