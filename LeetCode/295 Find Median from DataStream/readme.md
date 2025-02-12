# 295. Find Median from Data Stream

## Problem Description

The median is the middle value in an ordered integer list. If the size of the list is even, the median is the mean of the two middle values.

For example:
- For `arr = [2,3,4]`, the median is `3`.
- For `arr = [2,3]`, the median is `(2 + 3) / 2 = 2.5`.

You need to implement the `MedianFinder` class:

- `MedianFinder()` initializes the `MedianFinder` object.
- `void addNum(int num)` adds the integer `num` from the data stream to the data structure.
- `double findMedian()` returns the median of all elements so far. Answers within `10^-5` of the actual answer will be accepted.

### Example:

**Input**:
```plaintext
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
[[], [1], [2], [], [3], []]
