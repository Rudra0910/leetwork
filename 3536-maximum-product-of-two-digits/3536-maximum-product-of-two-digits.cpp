class Solution {
public:
    int maxProduct(int n) {
        vector<int> numbers;
        int product=0;
        while(n>0){
            int num=n%10;
            numbers.push_back(num);
            n/=10;
        }
        for(int i=0;i<numbers.size();i++){
            for(int j=(i+1);j<numbers.size();j++){
                product=max(product,numbers[i]*numbers[j]);
            }
        }
        return product;
    }

};