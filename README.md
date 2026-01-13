# Ascending Character Counter

This project implements a string analysis algorithm in C that counts occurrences where a character is strictly greater than the one preceding it.

## ⚙️ Logic

1.  **Input:** Reads a string (e.g., `abcdezmf`).
2.  **Comparison:** Iterates through the array comparing pairs:
    * Condition: `str[i+1] > str[i]`
    * If true, increment `sum`.

## 🚀 Example Output

Based on Question 5:
**Input:** `abcdezmf`

**Matches Found:**
1.  `b` > `a`
2.  `c` > `b`
3.  `d` > `c`
4.  `e` > `d`
5.  `z` > `e`
*(Comparison `m` > `z` is False)*

```text
String ifadeyi giriniz: abcdezmf

--- Analiz Sonucu ---
Metin: abcdezmf
Kendisinden buyuk karakter sayisi: 5
