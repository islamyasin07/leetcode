class Solution:
    def romanToInt(self, s: str) -> int:
        values = {
            'I': 1, 'V': 5, 'X': 10,
            'L': 50, 'C': 100, 'D': 500, 'M': 1000
        }

        total = 0
        last = 0

        for letter in reversed(s):
            num = values[letter]
            if num < last:
                total = total - num
            else:
                total = total + num
            last = num

        return total
