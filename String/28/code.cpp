class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int k = needle.length();

    for (int i = 0 ; i <= n-k ; i++){
         string result = "";
         result = haystack.substr(i,k);

         if (result == needle) return i;
    }
    return -1;
    }
};
