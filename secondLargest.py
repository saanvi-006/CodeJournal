def getSecondLargest(arr):

        if len(arr)<2:
            return -1
        new_arr=list(set(arr))
        if len(new_arr)<2:
            return -1
        new_arr.sort()
        return(new_arr[-2])
arr=[22,5,7,8,2,22,22]
print(getSecondLargest(arr))
