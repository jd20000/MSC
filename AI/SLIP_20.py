# #Q.1
# print("Hi! I'm CollegeInfoBot. Type 'bye' to exit.\n")
# info = {
#     "name":"M",
#     "college":"Audyogik Tantra Shikshan Sanstha, Pune",
#     "course":"M.Sc Computer Science",
#     "year":"1st Year",
#     "department":"Computer Science",
#     "roll":"16",
#     "email":"m@example.com"
#  }
# while True:
#     msg = input("You: ").lower()
#     if msg in ["hi","hello","hey"]:
#         print("Bot: Hello! How can I help you?")
#     elif "name" in msg: print(f"Bot: My name is {info['name']}.")
#     elif "college" in msg: print(f"Bot: I study at {info['college']}.")
#     elif "course" in msg: print(f"Bot: I am enrolled in{info['course']}.")
#     elif "year" in msg: print(f"Bot: I am in {info['year']}.")
#     elif "department" in msg: print(f"Bot: My department is {info['department']}.")
#     elif "roll" in msg: print(f"Bot: My roll number is {info['roll']}.")
#     elif "email" in msg: print(f"Bot: My email is {info['email']}.")
#     elif msg in ["bye","exit","quit"]: print("Bot: Goodbye!"); break
#     else: print("Bot: Ask about my name, college, course, year,department, roll, or email.")
#Q.2
def minimax(d,i,maxp,s,h):
    if d==h: return s[i]
    a=minimax(d+1,i*2,not maxp,s,h)
    b=minimax(d+1,i*2+1,not maxp,s,h)
    return max(a,b) if maxp else min(a,b)
s=[3,5,2,9,4,1,6,7]
h=3
print("Optimal value:", minimax(0,0,True,s,h))