# # Q.1
import random
def f(x): return -x**2 + 4*x
x = random.uniform(0, 5)
for _ in range(100):
    nx = max([x-0.1, x+0.1], key=f)
    if f(nx) > f(x): x = nx
    else: break
print(f"Best x={x:.2f}, f(x)={f(x):.2f}")


# #Q.2
# from collections import deque
# g= { 1: [2, 3],2: [1, 4, 5],3: [1, 6, 7],4: [2, 8],5: [2, 8],6: [3, 8],7: [3, 8],8: [4, 5, 6, 7]}
# v,d,goal,mode=set(),deque([1]),8,'dfs'  # change bfs→dfs and goal→your node
# while d:
#     n=d.popleft()if mode=='bfs'else d.pop()
#     if n not in v:print(n,end=' ');v.add(n); 
#     if n==goal:print("\nGoal found!");break
#     d+=g[n]