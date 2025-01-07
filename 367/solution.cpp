class Solution {
public:
    bool isPerfectSquare(int x) {

     if( x == 0 || x == 1)
        return true;
     
      int low = 1 , high = x ;  //, mid = -1;
      while(low <= high){
        int mid = (high - low ) / 2 + low ;
   //     int  val = (mid * mid);
        if( mid ==  (x/mid) && mid*mid == x )
        {   return true;
        }
        else if (  mid >=  (x/mid)){
            high = mid - 1;
        }
        else {
              low = mid + 1;
        }
       
    }
     return false;

    }
};
