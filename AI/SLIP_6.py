#Q.1
# import nltk
# from nltk.corpus import stopwords
# from nltk.tokenize import word_tokenize
# nltk.download('stopwords', quiet=True)
# nltk.download('punkt', quiet=True)
# text = open("input.txt").read()
# stop_words = set(stopwords.words('english'))
# filtered = [w for w in word_tokenize(text) if w.lower() not in 
# stop_words]
# print("Text without stopwords:\n", " ".join(filtered))
#Q.2
from collections import deque
g = {
    1: [2, 3, 4],
    2: [1, 4, 5],
    3: [1, 4],
    4: [1, 2, 3, 7],
    5: [2, 6, 7],
    6: [5, 7],
    7: [4, 5, 6]
}
v,d,goal,mode=set(),deque([2]),7,'bfs'  # change bfs→dfs and goal→your 
while d:
    n=d.popleft()if mode=='bfs'else d.pop()
    if n not in v:print(n,end=' ');v.add(n); 
    if n==goal:print("\nGoal found!");break
    d+=g[n]