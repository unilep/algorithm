func strStr(haystack string, needle string) int {
    if needle == "" || haystack == needle {
        return 0
    }
    length := len(haystack)
    needleLength := len(needle)
    for i := 0; i + needleLength - 1 < length; i++ {
        if needle == haystack[i:i+needleLength] {
            return i
        }
    }
    return -1
}
