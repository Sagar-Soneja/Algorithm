class Solution {
public:
    int hammingWeight(uint32_t n) {
        int t = __builtin_popcount(n) ;
        return t;
    }
};

unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
