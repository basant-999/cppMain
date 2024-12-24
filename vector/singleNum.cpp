class set {
    public:
    int singleNum(vector <int> &nums){
        int ans = 0;

        for(int val:nums){
            ans=ans^ val;

        }
        return ans;
    }
};