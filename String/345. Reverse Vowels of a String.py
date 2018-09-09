class Solution(object):
    def reverseVowels(self, s):
        res = list(s)
        vowels = []
        for i in range(len(res)):
            if res[i] in ['a', 'o', 'e', 'i', 'u', 'A', 'O', 'E', 'I', 'U']:
                vowels.append((i, res[i]))
        for j in range(len(vowels)//2):
            res[vowels[j][0]] = vowels[len(vowels)-j-1][1]
            res[vowels[len(vowels)-j-1][0]] = vowels[j][1]
        return ''.join(res)



class Solution(object):
    def reverseVowels(self, s):
        vowels = re.findall('(?i)[aeiouAEIOU]', s)
        return re.sub('(?i)[aeiouAEIOU]', lambda m: vowels.pop(), s)


class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = {'a': True, 'o': True, 'e': True, 'i': True, 'u': True, 'A': True, 'O': True, 'E': True, 'I': True, 'U': True}
        res = list(s)
        pos = []
        for i in xrange(len(res)):
            if res[i] in vowels:
                pos.append((i, res[i]))
        for j in xrange(len(pos)/2):
            res[pos[j][0]] = pos[len(pos)-j-1][1]
            res[pos[len(pos)-j-1][0]] = pos[j][1]
        return ''.join(res)