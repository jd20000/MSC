# Q1: Generate calendar for a given month and year
def s(b, r, n):
    if r == n:
        print(b)
        return
    for c in range(n):
        if all(b[i] != c and abs(b[i] - c) != r - i for i in 
range(r)):
            s(b + [c], r + 1, n)
n = 8  # change this for N queens
s([], 0, n)
#Q.2
# def minimax(d,i,maxp,s,h):
#     if d==h: return s[i]
#     a=minimax(d+1,i*2,not maxp,s,h)
#     b=minimax(d+1,i*2+1,not maxp,s,h)
#     return max(a,b) if maxp else min(a,b)
# s=[3,5,2,9,4,1,6,7]
# h=3
# print("Optimal value:", minimax(0,0,True,s,h))
# def minimax(depth, nodeIndex, isMax, scores, h):
#     if depth == h:
#         return scores[nodeIndex]
#     if isMax:
#         return max(minimax(depth+1, nodeIndex*2, False, scores, h),
#                    minimax(depth+1, nodeIndex*2+1, False, scores, h))
#     else:
#         return min(minimax(depth+1, nodeIndex*2, True, scores, h),
#                    minimax(depth+1, nodeIndex*2+1, True, scores, h))
#  # Example: game tree of height 3 (8 leaf nodes)
# scores = [3, 5, 2, 9, 4, 1, 6, 7]
# height = 3
# print("Optimal value:", minimax(0, 0, True, scores, height))