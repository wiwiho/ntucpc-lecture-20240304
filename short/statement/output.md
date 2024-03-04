輸出一行，包含 $N$ 個整數 $a_1,a_2,\dots,a_N$，表示一個可能的排隊順序。

你的答案會被視為正確若且唯若以下條件全部滿足：

- $1 \leq a_i \leq N$
- $\forall i \neq j,\ a_i \neq a_j$
- $b_i=\max_{1 \leq k \leq i} \{a_i\}$
