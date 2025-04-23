class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
       /* int count = 0;
        std::vector<int> bulb(n, 1);

        for (int i = 2; i <= n; ++i) {
            for (int bulbno = 0; bulbno < n; ++bulbno) {
                if (bulbno + 1 >= i && (bulbno + 1) % i == 0) {
                    if (bulb[bulbno] == 1) {
                        bulb[bulbno] = 0;
                    } else {
                        bulb[bulbno] = 1;
                    }
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            if (bulb[i] == 1) {
                ++count;
            }
        }
        return count;*/
    }
};