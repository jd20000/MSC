#Q.1
# s = input("Enter a sentence: ")
# print("Sorted sentence:", " ".join(sorted(s.split())))
#Q.2
def solve(board, row, n):
    if row == n:
        print(board)
        return
    for col in range(n):
        if all(board[i] != col and abs(board[i] - col) != row - i for 
i in range(row)):
            solve(board + [col], row + 1, n)
n = 5  # change this for N queens
solve([], 0, n)