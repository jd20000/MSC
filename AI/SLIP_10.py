#Q.1
# from itertools import permutations
# for t,w,o,f,u,r in permutations(range(10),6):
#     if t==0 or f==0: continue
#     if 100*t+10*w+o + 100*t+10*w+o == 1000*f+100*o+10*u+r:
#         print(f"TWO={100*t+10*w+o}, FOUR={1000*f+100*o+10*u+r}")
#         print(f"Mapping: T={t}, W={w}, O={o}, F={f}, U={u}, R={r}")
#         break
 
#  Q.2
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