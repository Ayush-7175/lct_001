class Solution {
public:
    int totalNumbers(auto& digits) {
        int f[10] = {0};
        int res = 0;

        for (auto& d : digits)
            f[d]++;

        for (int i = 1; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 9; k += 2) { 
                    if (f[i] > 0) {
                        int j1 = (i == j) ? 2 : 1;
                        if (f[j] >= j1) {
                            int k1 = 1;
                            if (i == k) k1++;
                            if (j == k) k1++;
                            
                            if (f[k] >= k1) { 
                                res++;
                            }
                        }
                    }
                }
            }
        }

        return res; 
    }
};