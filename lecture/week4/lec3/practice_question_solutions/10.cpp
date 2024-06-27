int addOddMinusEven(int low, int high) {
    int odd_sum = 0;
    int even_sum = 0;
    
    for(int i = low; i < high; i++) {
        if(i % 2 == 0) {
            even_sum = even_sum + i;
        }
        else {
            odd_sum = odd_sum + i;
        }
        
    }
    
    return odd_sum - even_sum;
}