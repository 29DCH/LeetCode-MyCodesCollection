class Solution {
    public int[] sortArrayByParityII(int[] A) {
    int[] a=new int[10010];
    int[] b=new int[10010];
    int j=0,k=0;
    for(int i=0;i<A.length;i++)
    {
        if(A[i]%2==1)
            a[j++]=A[i];
        else
            b[k++]=A[i];
    }
    for(int i=0;i<A.length;i++)
    {
        if(i%2==1)
            A[i]=a[--j];
        else
            A[i]=b[--k];
    }
    return A;
}
}