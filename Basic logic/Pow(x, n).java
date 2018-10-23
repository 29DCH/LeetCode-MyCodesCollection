class Solution {
    public double myPow(double x, int n) {
        if(x>=0)
            return Math.pow(x,n);
        else
            return 1/Math.pow(x,-n);
    }
}