// class Solution {
// public:
//     string intToRoman(int num) {
//         vector<pair<int, string>> roman_map = {
//         {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
//         {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
//         {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
//     };

//     string roman_numeral = "";
    
//     for (auto &[value, symbol] : roman_map) {
//         while (num >= value) {
//             roman_numeral += symbol;
//             num -= value;
//         }
//     }

//     return roman_numeral;
//     }
// };
class Solution {
public:
    string intToRoman(int num) {
        int number[13] ={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string values[13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans;
        for(int i=0;i<13;i++){
            while(num>=number[i]){
                ans+=values[i];
                num-=number[i];
            }
        }
        return ans;
    }
};
