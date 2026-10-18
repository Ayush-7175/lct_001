class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long int oddsum=0;
        long long int evensum=0;
        for(int i=0;i<n;i++)
        {
            oddsum= oddsum + ((2*i)+1);
        }
        for(int i=0;i<n;i++)
        {
            evensum=evensum+(2*i+2);
        }
        return gcd(evensum,oddsum);

    }
};