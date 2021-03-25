给定一个正整数，检查它的二进制表示是否总是 0、1 交替出现：
换句话说，就是二进制表示中相邻两位的数字永不相同。

 

class Solution {
    public boolean hasAlternatingBits(int n) {
        String ret= Integer.toBinaryString(n);
        char [] arr=ret.toCharArray();
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]==arr[i+1]){
                return false;
            }
        }
        return true;


    }
}