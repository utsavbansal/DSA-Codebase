# Minimum Window Substring

## Problem Description
Given two strings, `s` and `t`, the goal is to find the smallest substring in `s` that contains all the characters in `t`, including duplicates. If such a substring does not exist, return an empty string.

The problem guarantees that each test case will have a unique answer.

## Examples

### Example 1
**Input:**  
`s = "ADOBECODEBANC"`  
`t = "ABC"`  

**Output:**  
`"BANC"`  

**Explanation:**  
The substring `"BANC"` contains 'A', 'B', and 'C' from `t` with the minimum length.

### Example 2
**Input:**  
`s = "a"`  
`t = "a"`  

**Output:**  
`"a"`  

**Explanation:**  
The entire string `s` is the minimum window that contains `t`.

### Example 3
**Input:**  
`s = "a"`  
`t = "aa"`  

**Output:**  
`""`  

**Explanation:**  
`t` requires two 'a's, but `s` has only one, so no valid substring exists.

## Constraints
- \(1 \leq \text{s.length}, \text{t.length} \leq 10^5\)
- `s` and `t` consist of uppercase and lowercase English letters.

