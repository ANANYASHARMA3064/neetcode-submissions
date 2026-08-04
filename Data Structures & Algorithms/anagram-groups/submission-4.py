class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = {}

        for i in strs:
            alph = [0] * 26

            for a in i:
                alph[ord(a) - ord('a')] += 1

            key = tuple(alph)

            if key not in mp:
                mp[key] = []

            mp[key].append(i)

        return list(mp.values())
