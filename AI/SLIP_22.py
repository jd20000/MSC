# #Q.1
# import math
# def alphabeta(depth, idx, maxP, vals, a, b):
#     if depth == 3: return vals[idx]
#     if maxP:
#         best = -math.inf
#         for i in range(2):
#             best = max(best, alphabeta(depth+1, idx*2+i, False, vals,a, b))
#             a = max(a, best)
#             if b <= a: break
#         return best
#     else:
#         best = math.inf
#         for i in range(2):
#             best = min(best, alphabeta(depth+1, idx*2+i, True, vals, a, b))
#             b = min(b, best)
#             if b <= a: break
#         return best
# vals = [3, 5, 6, 9, 1, 2, 0, -1]
# print("Optimal value:", alphabeta(0, 0, True, vals, -math.inf, 
# math.inf))
#Q.2
print("Hi! I'm ChatBot. Type 'bye' to exit.\n")
while True:
    msg = input("You: ").lower()
    if msg in ["hi","hello","hey"]:
        print("Bot: Hello! How can I help you?")
    elif msg in ["how are you","how are you doing"]:
        print("Bot: I'm fine! How about you?")
    elif msg in ["what is your name","who are you"]:
        print("Bot: I'm a simple Python chatbot.")
    elif "your creator" in msg:
        print("Bot: I was made by a Python programmer.")
    elif "thank" in msg:
        print("Bot: You're welcome!")
    elif msg in ["bye","exit","quit"]:
        print("Bot: Goodbye!"); break
    else:
        print("Bot: Sorry, I didn't understand!")