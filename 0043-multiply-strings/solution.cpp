class Solution {
public:
    string multiply(string num1, string num2) {
        
        if(num1 == "0" || num2 == "0")
            return "0";

        int n = num1.size();
        int m = num2.size();

        vector<int> result(n + m, 0);

        for(int i = n - 1; i >= 0; i--)
        {
            int x = num1[i] - '0';

            for(int j = m - 1; j >= 0; j--)
            {
                int y = num2[j] - '0';

                int pdt = x * y;

                int pos1 = i + j;
                int pos2 = i + j + 1;

                int sum = pdt + result[pos2];

                result[pos2] = sum % 10;
                result[pos1] += sum / 10;
            }
        }

        string res = "";

        int i = 0;

        while(i < result.size() && result[i] == 0)
            i++;

        while(i < result.size())
        {
            res += result[i] + '0';
            i++;
        }

        return res;
    }
};
