func romanToInt(s string) int {
    m := make(map[string]int)
    m["I"] = 1
    m["V"] = 5
    m["X"] = 10
    m["L"] = 50
    m["C"] = 100
    m["D"] = 500
    m["M"] = 1000
    m["IV"] = 4
    m["IX"] = 9
    m["XL"] = 40
    m["XC"] = 90
    m["CD"] = 400
    m["CM"] = 900
    ans := 0
    for i := 0; i < len(s); i++ {
        k := 0
        cur := string(s[i])
        if i < len(s) - 1 {
            nx := string(s[i+1])
            if val, ok := m[cur + nx]; ok {
                k = val
                i++
            } 
        } 
        if k == 0 {
            k = m[cur]
        }
        ans += k
    }
    return ans
}
