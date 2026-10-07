# Lab 3. Variant 8. Exercise 1

## Task

Write a C++ program that calculates the double sum

$$
S = \sum_{x=1}^{5} \sum_{k=0}^{\infty} (-1)^k \cdot \frac{(x+1)^{k-1}}{(k+1)(k+2)\cdots(k+x)}
$$

The inner sum over `k` is calculated until the absolute value of the current member becomes less than or equal to the given accuracy.

## Requirements

1. Use a `do...while` loop for the inner sum (parameter `k`) and a `for` loop for the outer sum (parameter `x`).
2. The accuracy of the calculation is entered by the user from the keyboard.
3. Calculate each member of the series from the previous one (recurrence), without recomputing the power and the product from scratch:
   - numerator: `N(k) = N(k-1) * (x+1)`, with `N(0) = 1 / (x+1)`
   - denominator: `D(k) = D(k-1) * (k+x) / k`, with `D(0) = x!`
4. Signs alternate: members with odd `k` are negative.
5. Check every member for `float` overflow. If the absolute value of the member goes out of the `float` range, print a message and break the inner cycle, then continue with the next `x`.
6. For every step, print `x`, `k`, the current member and the current sum in a table.
7. After all values of `x` are processed, print the total sum.
8. Let the user repeat the calculation with a new accuracy (`1` = continue, `0` = exit). The sum and the accuracy must be reset before each new calculation.
9. All console output must be in English.

## Example of the output table

```
==================================================
    x         k          member           sum
==================================================
```
