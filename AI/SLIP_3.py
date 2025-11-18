# #Q.1
# import string
# s = input("Enter a string: ")
# print(''.join(c for c in s if c not in string.punctuation))

# #Q.2
from collections import deque
g = {
    1: [2, 3, 4],
    2: [1, 4, 5],
    3: [1, 4],
    4: [1, 2, 3, 7],
    5: [2, 6, 7],
    6: [5, 7],
    7: [4, 5, 6]
 }
v,d,goal,mode=set(),deque([2]),7,'dfs'  # change bfs→dfs and goal→your node
while d:
    n=d.popleft()if mode=='bfs'else d.pop()
    if n not in v:print(n,end=' ');v.add(n)
    if n==goal:print("\nGoal found!");break
    d+=g[n]