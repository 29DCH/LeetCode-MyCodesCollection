class Solution {
    public int reverse(int x) {
        int n=x>0?x:-x;
        int a=0;
        long b=0;
       while(n>0)
       {
          a=n%10;
          b=b*10+a;
          n/=10;
       }
        if(x>0&&b>Integer.MAX_VALUE)
            return 0;
        else if(x>=0&&b<=Integer.MAX_VALUE)
            return (int)b;
        else if(x<0&&(-b)>=Integer.MIN_VALUE)
            return -(int)b;
        else if(x<0&&(-b)<Integer.MIN_VALUE)
            return 0;
        else
            return 0;
    }
}