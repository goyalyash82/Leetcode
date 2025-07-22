class Solution {
public:
    int binarySqrt(int n) {
        int s = 0;
        int e = n;
        long long int mid;
        long long int ans = -1;

        while (s <= e) {
            mid = s + (e - s) / 2;
            long long int square = mid * mid;

            if (square == n)
                return mid;

            if (square < n) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }

    int mySqrt(int x) {
        return binarySqrt(x);
    }
};