from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        word_1 = Counter(s)
        word_2 = Counter(t)

        return word_1 == word_2