int reverseBits(int n) {
    uint32_t in = (uint32_t)n; 
    uint32_t out = 0;
    for(int i = 0; i < 32; i++){
       out = out << 1;
       uint32_t status = (in & 1);
       out |= status;
       in = in >> 1;
    }
    return out;
}