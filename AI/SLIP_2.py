# #Q.1
# import calendar
# y = int(input("Enter year: "))
# m = int(input("Enter month (1-12): "))
# print(calendar.month(y, m))

# #Q.2
from collections import deque
g = {
    1: [2, 3],
    2: [4],
    3: [4],
    4: [6],
    5: [3, 4],
    6: [7],
    7: [5]
 }
v,d,goal,mode=set(),deque([1]),7,'dfs'  # change bfs→dfs and goal→your node
while d:
    n=d.popleft()if mode=='bfs'else d.pop()
    if n not in v:print(n,end=' ');v.add(n)
    if n==goal:print("\nGoal found!");break
    d+=g[n]
