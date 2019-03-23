func longestCommonPrefix(strs []string) string {
    answer := ""
    le := len(strs)
    if le == 0 {
        return answer
    }
    idx := 0
    com := true
    
    mn := 999999999
    for i := 0; i < le; i++ {
        c := len(strs[i])
        if mn > c {
            mn = c
        }
    }
    for com {
        if idx == mn {
            return answer
        }
        cur := strs[0][idx]
        for i := 1; i < le; i++ {
            if cur != strs[i][idx] {
                com = false
            }
        }
        if com {
            idx++
            answer += string(cur)
        }
    }
    return answer
}
