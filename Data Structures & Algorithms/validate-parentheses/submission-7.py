class Solution:
    def isValid(self, s: str) -> bool:
        mp={'(':')','{':'}','[':']'}
        stk=[]
        
        for i in s:
            if i in mp.keys():
                stk.append(mp[i])
            if i in mp.values():
                if (len(stk)!=0):
                    if(stk[-1]==i):
                       stk.pop()
                    else: return False

                else: return False

                
        return (len(stk)==0)   


        