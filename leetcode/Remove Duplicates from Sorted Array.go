func removeDuplicates(nums []int) int {
    if len(nums) == 0 {
        return 0
    }
    prev := 0
    ans := 0
    k := 0
    for i, item := range(nums) {
        if i == 0 || prev != item {
            ans++
            nums[k] = item
            k++
        }
        prev = item
    }
    return ans
}
