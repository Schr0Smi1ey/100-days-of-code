class Solution
{
    private:
        long long unsigned int mod = 1e9 + 7;
    public:
        long long unsigned int decimalValue(Node *head)
        {
           long long unsigned int ans = 0;
           while(head){
               ans = (ans*2 + head->data) % mod;
               head = head->next;
           }
           return ans;
        }
};