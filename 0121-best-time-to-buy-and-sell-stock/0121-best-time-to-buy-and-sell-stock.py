class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        min_price = float('inf')
        max_profit = 0

        for price in prices:
            if price < min_price:
                min_price = price  # نشتري بسعر أقل
            elif price - min_price > max_profit:
                max_profit = price - min_price  # نبيع بأعلى ربح

        return max_profit
