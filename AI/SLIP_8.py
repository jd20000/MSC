#Q.1
# s = input("Enter a string: ")
# print("Uppercase:", sum(c.isupper() for c in s))
# print("Lowercase:", sum(c.islower() for c in s))

#Q.2
board = [" "]*9
def print_board():
    for i in range(0,9,3):
        print(" | ".join(board[i:i+3]))
        if i<6: print("--+---+--")
def check(p):
    return any(all(board[i]==p for i in line) for line in [[0,1,2],[3,4,5],[6,7,8],[0,3,6],[1,4,7],[2,5,8],[0,4,8],[2,4,6]])
player="X"
for _ in range(9):
    print_board()
    pos=int(input(f"Player {player} (0-8): "))
    if board[pos]==" ":
        board[pos]=player
    else:
        print("Taken!"); continue
    if check(player): print_board(); print(f"Player {player} wins!"); 
    player="O" if player=="X" else "X"
    break
    
else:
    print_board(); print("Draw!")