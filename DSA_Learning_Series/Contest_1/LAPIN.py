from collections import defaultdict

def is_lapindrome(s):
    left = defaultdict(lambda: 0)
    right = defaultdict(lambda: 0)
    if len(s) % 2:
        lm = len(s) // 2
        rm = lm + 1
    else:
        lm = len(s) // 2
        rm = lm
    for x in range(lm):
        left[s[x]] += 1
    for x in range(rm, len(s)):
        right[s[x]] += 1
    return left == right
    
if __name__ == "__main__":
    for _ in range(int(input())):
        s = input();
        if is_lapindrome(s):
            print("YES")
        else:
            print("NO")

