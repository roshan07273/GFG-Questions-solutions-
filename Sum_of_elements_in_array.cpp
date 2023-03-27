
public class Sum 
{
   public static void main(String args[])
  {
      int[] a = {3,1,2,3,7,9};
      int[] b = {3,4,5,1,7};
      int result[]=new int[(int)Math.max(a.length,b.length)];
      for(int i=0;i<result.length; i++) 
    {
    if(a.length>i && b.length>i) 
        result[i]=a[i] + b[i];

    else if(a.length<b.length)
        result[i]+=b[i];

    else if(a.length<b.length) 
        result[i]+=a[i];

    System.out.print(result[i]+"    ");
   }
  }
}
