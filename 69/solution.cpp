class Solution {
public:
    int mySqrt(int x) 
    {
      if( x == 0 || x == 1)
        return x;
     


      int low = 1 , high = x , mid = -1;
      while(low <= high){
        int mid = (high - low ) / 2 + low ;
   //     int  val = (mid * mid);
        if( mid <=  (x/mid)){
            low = mid + 1;
        }
        else if (  mid >=  (x/mid)){
            high = mid - 1;
        }
        else return mid;
      }
      return int (high);
    }

};
