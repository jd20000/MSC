#Q1
# import random
# words = ["python", "hangman", "programming", "developer", "computer"]
# word = random.choice(words)
# guessed = ["_"] * len(word)
# attempts = 6
# letters = set()
# print("Word:", " ".join(guessed))
# while attempts > 0 and "_" in guessed:
#     g = input("Enter a letter: ").lower()
#     if g in letters or len(g) != 1 or not g.isalpha(): continue
#     letters.add(g)
#     if g in word:
#         for i, c in enumerate(word):
#             if c == g: guessed[i] = g
#     else: attempts -= 1
#     print("Word:", " ".join(guessed), "| Attempts left:", attempts)
# print("Congrats!" if "_" not in guessed else "Game over!", "Word was:", word)
#Q.2
from collections import deque
g = {
    1: [2, 3],
    2: [1, 4, 5],
    3: [1, 6, 7],
    4: [2, 8],
    5: [2, 8],
    6: [3, 8],
    7: [3, 8],
    8: [4, 5, 6, 7]
 }
v,d,goal,mode=set(),deque([1]),8,'bfs'  # change bfs→dfs and goal→your 

while d:
    n=d.popleft()if mode=='bfs'else d.pop()
    if n not in v:print(n,end=' ');v.add(n);
    if n==goal:print("\nGoal found!");break
    d+=g[n]