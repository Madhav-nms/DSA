int hammingWeight(int n) {
    uint32_t in = (uint32_t) n;
    int counter = 0;
    for (int i = 0; i < 32; i++){
        if ((n&1) == 1) counter++;
        n = n >>1;
    }
    return counter;
}
