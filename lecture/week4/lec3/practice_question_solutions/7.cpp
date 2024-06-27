void findDuplicate(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i != j) {
                if(arr[i] == arr[j]) {
                    cout << arr[i] << endl;
                    return;
                }
            }
        }
    }
    
    cout << "-1" << endl;
}