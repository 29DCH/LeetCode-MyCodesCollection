public class Solution extends GuessGame {
     public int guessNumber(int n) {
     int low=1,high=n;
     while(low<=high) {
      int mid=(high-low)/2+low;
      int g=guess(mid);
      if(g==1)
       low=mid+1;
      else if(g==-1)
       high=mid-1;
      else return mid;
     }
     return -1;
}
}