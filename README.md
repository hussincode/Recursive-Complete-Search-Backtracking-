# 🔹 Recursive Complete Search (Backtracking)

> 🧠 **Concept:**  
> Recursive complete search means exploring **every possible option** using **recursion** —  
> the function calls itself to explore all decision paths (include/exclude, swap/skip, etc.).

---

## 📘 Example 1 — Generate All Subsets

**🧩 Problem:**  
Print all subsets of `{1, 2, 3}`.

**💡 Idea:**  
At each step:  
1️⃣ Include the current element  
2️⃣ Or skip it  
→ Then recurse to the next index.

**🧱 Code:**
cpp
#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& arr, int index, vector<int>& current) {
    if (index == arr.size()) {
        cout << "{ ";
        for (int x : current) cout << x << " ";
        cout << "}" << endl;
        return;
    }

    current.push_back(arr[index]);
    generateSubsets(arr, index + 1, current);

    current.pop_back();
    generateSubsets(arr, index + 1, current);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> current;
    generateSubsets(arr, 0, current);
}
✅ Output:

Copy code
{}
{1}
{2}
{3}
{1,2}
{1,3}
{2,3}
{1,2,3}
📘 Example 2 — Generate All Permutations
🧩 Problem:
Print all permutations of {1, 2, 3}.

🧱 Code:

cpp
Copy code
#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int>& arr, int l, int r) {
    if (l == r) {
        for (int x : arr) cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(arr[l], arr[i]);
        permute(arr, l + 1, r);
        swap(arr[l], arr[i]); // backtrack
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    permute(arr, 0, arr.size() - 1);
}
✅ Output:

Copy code
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
💡 Key Notes
Concept	Description
Definition	Explore all possibilities using recursion
Technique	Make choice → Recurse → Undo choice
Base Case	When index reaches the end
Complexity	O(2ⁿ) for subsets / O(n!) for permutations
Common Uses	Subsets, permutations, Sudoku, N-Queens

🧠 Summary
🌿 Recursive Complete Search = “Explore all possible paths step by step.”
🔁 Each recursive call represents one decision.
🧩 When you master this, you’re ready for backtracking and dynamic programming!

🌊 Next Step:
👉 Greedy Algorithm ➜

Created by: Hussin Hesham
💻 Learning Problem Solving Paradigms in C++

yaml
Copy code

---

Would you like me to continue with the **Greedy Algorithm** next (with examples + GitHub README style)?
