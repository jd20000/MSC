#Q.1
# def monkey_banana_problem():
#     # Initial State
#     state = ('A', 'B', False, False)
#     goal_state = ('C', 'C', True, True)
#     print("Initial State:", state)
#     print("Goal State:", goal_state)
#     print("\n--- Steps ---")
#     path = []  # store sequence of actions
#     while state != goal_state:
#         monkey, box, on_box, has_banana = state
#         # Step 1: Move Monkey to Box
#         if monkey != box and not on_box:
#             path.append(f"Monkey moves from {monkey} to {box}")
#             state = (box, box, False, has_banana)
#         # Step 2: Push Box to Banana position (C)
#         elif box != 'C' and not on_box:
#             path.append("Monkey pushes box to position C")
#             state = ('C', 'C', False, has_banana)
#         # Step 3: Climb on the Box
#         elif not on_box and not has_banana:
#             path.append("Monkey climbs on the box")
#             state = (box, box, True, has_banana)
#         # Step 4: Grab the Banana
#         elif on_box and not has_banana:
#             path.append("Monkey grabs the banana")
#             state = (box, box, True, True)
#         else:
#             break  # done
#     # Display actions
#     for i, step in enumerate(path, 1):
#         print(f"Step {i}: {step}")
#     print("\nFinal State:", state)
#     if state == goal_state:
#         print("Monkey got the banana!")
#  # Run the program
# if __name__ == "__main__":
#     monkey_banana_problem()
#Q.2
from collections import deque
g = {
    'A': ['B', 'C'],
    'B': ['D','E'],
    'C': ['F', 'G'],
    'D': ['H','I'],
    'F': ['K'],
    'E':[],'G':[],'H':[],'I':[],'K':[]
 }
v,d,goal,mode=set(),deque(['A']),'G','dfs'  # change bfs→dfs and 
while d:
    n=d.popleft()if mode=='bfs'else d.pop()
    if n not in v:print(n,end=' ');v.add(n);
    if n==goal:print("\nGoal found!");break
    d+=g[n]
 # d=data, n= node, v=visited, g=graph