# #q1
# import math
#  # Initialize the board
# board = [' ' for _ in range(9)]
#  # Function to print the board
# def print_board():
#     print()
#     for i in range(3):
#         print(' | '.join(board[i*3:(i+1)*3]))
#         if i < 2:
#             print('---------')
#     print()
#  # Check for winner
# def check_winner(b, player):
#     win_cond = [(0,1,2), (3,4,5), (6,7,8),
#                 (0,3,6), (1,4,7), (2,5,8),
#                 (0,4,8), (2,4,6)]
#     return any(b[a] == b[b_] == b[c] == player for a,b_,c in win_cond)
#  # Check if draw
# def is_draw(b):
#     return ' ' not in b
#  # Minimax with Alpha-Beta pruning
# def minimax(b, depth, alpha, beta, is_maximizing):
#     if check_winner(b, 'O'):
#         return 1
#     if check_winner(b, 'X'):
#         return -1
#     if is_draw(b):
#         return 0
#     if is_maximizing:
#         best = -math.inf
#         for i in range(9):
#             if b[i] == ' ':
#                 b[i] = 'O'
#                 val = minimax(b, depth + 1, alpha, beta, False)
#                 b[i] = ' '
#                 best = max(best, val)
#                 alpha = max(alpha, best)
#                 if beta <= alpha:
#                     break
#         return best
#     else:
#         best = math.inf
#         for i in range(9):
#             if b[i] == ' ':
#                 b[i] = 'X'
#                 val = minimax(b, depth + 1, alpha, beta, True)
#                 b[i] = ' '
#                 best = min(best, val)
#                 beta = min(beta, best)
#                 if beta <= alpha:
#                     break
#         return best
#  # Find best move for AI
# def best_move():
#     best_val = -math.inf
#     move = -1
#     for i in range(9):
#         if board[i] == ' ':
#             board[i] = 'O'
#             val = minimax(board, 0, -math.inf, math.inf, False)
#             board[i] = ' '
#             if val > best_val:
#                 best_val = val
#                 move = i
#     return move
#  # Main game loop
# def play_game():
#     print("Welcome to Tic Tac Toe (AI uses Alpha-Beta Pruning)")
#     print_board()
#     while True:
#         # Player move
#         move = int(input("Enter your move (1-9): ")) - 1
#         if board[move] != ' ':
#             print("Invalid move! Try again.")
#             continue
#         board[move] = 'X'
#         print_board()
#         if check_winner(board, 'X'):
#             print("🎉 You win!")
#             break
#         if is_draw(board):
#             print("It's a draw!")
#             break
#         # AI move
#         print("AI is thinking...")
#         ai_move = best_move()
#         board[ai_move] = 'O'
#         print_board()
#         if check_winner(board, 'O'):
#             print(" AI wins!")
#             break
#         if is_draw(board):
#             print("It's a draw!")
#             break

# if __name__ == "__main__":
#     play_game()
#Q.2
print(" ChatBot: Hello! I'm your simple chatbot.") 
print("Type 'bye' to end the chat.\n")
while True:
    user = input("You: ").lower()
    if "hi" in user or "hello" in user:
        print(" ChatBot: Hi there! How can I help you?" )
    elif "name" in user:
        print(" ChatBot: I'm ChatBot, your virtual friend.")
    elif "how are you" in user:
        print(" ChatBot: I'm good! What about you?" )
    elif "fine" in user or "good" in user:
        print(" ChatBot: That's great to hear!" )
    elif "your creator" in user or "who made you" in user:
        print(" ChatBot: I was created by a computer science student.")
    elif "bye" in user:
        print(" ChatBot: Goodbye! Have a nice day ")
        break
    else:
        print(" ChatBot: Sorry, I didn’t understand that." )