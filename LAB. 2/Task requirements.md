# Task Requirements

**Lab 2. Variant 6.** Branching and conditions in C++.

---

## Exercise 1. Piecewise Function

Calculate the value of the function $f$ depending on the product $P = a \cdot b$ of two values entered from the keyboard:

$$
f =
\begin{cases}
\dfrac{b^2}{10 - a \cdot b}, & 0 < a \cdot b < 10 \\[2ex]
\dfrac{10 \cdot a^2}{b}, & a \cdot b > 10 \\[2ex]
1, & a \cdot b = 0
\end{cases}
$$

In all other cases ($a \cdot b < 0$ or $a \cdot b = 10$) the function is undefined and the program must report it.

* **Input Data:** real values $a$ and $b$ (entered via keyboard).
* **Result:** value of $f$, or the message `The function is undefined!`.
* **Implementation notes:** the condition is selected by a helper function `getConditionCode()` and processed with a `switch` statement.

### Example runs

| a | b | a·b | Output |
|----|---|----|---------------------------------|
| 2 | 3 | 6 | `f(x) = 2.25` |
| 5 | 4 | 20 | `f(x) = 62.5` |
| 0 | 7 | 0 | `f(x) = 1` |
| -2 | 3 | -6 | `The function is undefined!` |
| 2 | 5 | 10 | `The function is undefined!` |

---

## Exercise 2. Point in a Square

Determine whether a point with coordinates $(x, y)$, entered from the keyboard, lies inside the square (or on its border) given by the system of inequalities:

$$
\begin{cases}
|x - 7y| \le 25 \\
|7x + y| \le 25
\end{cases}
$$

* **Input Data:** real coordinates $x$ and $y$ of the point (entered via keyboard).
* **Result:** one of two messages:
  * `A point lies inside or on the border of the square.`
  * `A point does not lie in the square.`
* **Implementation notes:** the check is performed in the function `AreaSquare(x, y)`.

### Example runs

| x | y | Output |
|-----|----|------------------------------------------------------|
| 1 | 1 | `A point lies inside or on the border of the square.` |
| 3.5 | 0 | `A point lies inside or on the border of the square.` |
| 3 | -3 | `A point lies inside or on the border of the square.` |
| 4 | 0 | `A point does not lie in the square.` |
| 10 | 10 | `A point does not lie in the square.` |

---
