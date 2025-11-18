# import nltk
# from nltk.stem import WordNetLemmatizer
# nltk.download('wordnet', quiet=True)
# nltk.download('omw-1.4', quiet=True)
# lem = WordNetLemmatizer()
# words = ["running","flies","better","cars","feet"]
# for w in words: print(f"{w} -> {lem.lemmatize(w)}")
#  # With POS tags
# print("better (adj):", lem.lemmatize("better", pos="a"))
# print("feet (noun):", lem.lemmatize("feet", pos="n"))
# print("running (verb):", lem.lemmatize("running", pos="v"))

#Q.2
from collections import deque
g = {
    1: [2, 4],
    2: [3],
    3: [4, 5, 6],
    4: [2],
    5: [7, 8],
    6: [8],
    7: [8],
    8: []
 }
v,d,goal,mode=set(),deque([1]),8,'bfs'  # change bfs→dfs and goal→your node
while d:
    n=d.popleft()if mode=='bfs'else d.pop()
    if n not in v:print(n,end=' ');v.add(n);
    if n==goal:print("\nGoal found!");break
    d+=g[n]