class Solution {
public:
    int maxProduct(int n) {
        int arr[10]; // Max 10 digits for a 32-bit int
        int i = 0;
        while (n > 0) {
            arr[i] = n % 10;
            i++;
            n /= 10;
        }
        sort(arr, arr + i); // Pass pointer to start and end
        return arr[i - 1] * arr[i - 2];
    }
};