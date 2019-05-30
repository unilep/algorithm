func removeElement(nums []int, val int) int {
    c := 0
    for _, v := range nums {
        if v != val {
            nums[c] = v
            c += 1
        }
    }
    return c
}
