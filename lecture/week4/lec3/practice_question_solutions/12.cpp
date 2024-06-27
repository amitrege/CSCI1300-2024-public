bool similarity(int a[], int size1, int b[], int size2) {

    if(size1 != size2) {
        return false;
    }
    
    for(int i = 0; i < size1; i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}