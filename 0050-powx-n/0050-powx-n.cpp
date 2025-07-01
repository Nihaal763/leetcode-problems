class Solution {
public:
    double negPow(double c, long d) // Change d to long
    {
        if(d == 0)
        {
            return 1;
        }
        double t = myPow(c, d / 2);  // ✅ Corrected argument order
        if(d % 2 == 0)
        {
            return 1 / (t * t);
        }
        else
        {
            return 1 / (t * t * c);
        }
    }

    double myPow(double x, int n)
    {
        long N = n; // Convert to long first
        if(N < 0)
        {
            N = -N; // Now safe because N is long
            return negPow(x, N);
        }
        if(N == 0)
        {
            return 1;
        }
        double t = myPow(x, N / 2);
        if(N % 2 == 0)
        {
            return t * t;
        }
        else
        {
            return t * t * x;
        }
    }
};
