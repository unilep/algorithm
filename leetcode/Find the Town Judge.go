func findJudge(N int, trust [][]int) int {
    if len(trust) == 0 {
        return 1
    }
    
    check := make([]int, N+1, N+1)
    trusts := make([]int, N+1, N+1)
    max, idx := 0, 0
    
    for _, pair := range trust {
        check[pair[1]]++;
        trusts[pair[0]]++;
        
        if max < check[pair[1]] {
            max = check[pair[1]]
            idx = pair[1]
        }
    }
    
    for i := 1; i <= N; i++ {
        if idx == i {
            continue
        }
        if check[i] == max {
            return -1
        }
    }
    if trusts[idx] == 0 {
        return idx
    }
    return -1
}
