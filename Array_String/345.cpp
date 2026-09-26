/*
给你一个字符串 s ，仅反转字符串中的所有元音字母，并返回结果字符串。

元音字母包括 'a'、'e'、'i'、'o'、'u'，且可能以大小写两种形式出现不止一次。

 

示例 1：

输入：s = "IceCreAm"

输出："AceCreIm"

解释：

s 中的元音是 ['I', 'e', 'e', 'A']。反转这些元音，s 变为 "AceCreIm".

示例 2：

输入：s = "leetcode"

输出："leotcede"

 

提示：

    1 <= s.length <= 3 * 105
    s 由 可打印的 ASCII 字符组成

*/

class Solution {
    bool Is_it_a_vowel(char c){
        return tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u';
    }
    void swap(char& c1, char& c2){
        char temp = c1;
        c1 = c2;
        c2 = temp;
    }
public:
    string reverseVowels(string s) {
        for(int i = 0, j = s.length() - 1; i < j;){
            if(Is_it_a_vowel(s[i]) && Is_it_a_vowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            if(Is_it_a_vowel(s[i])){
            }else i++;
            if(Is_it_a_vowel(s[j])){
            }else j--;
        }
        return s;
    }
};

/*
    利用双指针，进行首位同时判断，循环查找，直至指针相交，较传统方式少了一个循环
*/