#Q.1
from itertools import permutations
import re
def solve(equation):
    letters = ''.join(set(re.findall(r'[A-Z]', equation)))
    words = re.findall(r'[A-Z]+', equation)
    for perm in permutations(range(10), len(letters)):
        m = dict(zip(letters, perm))
        if any(m[w[0]]==0 for w in words): continue
        if eval(''.join(str(m[c]) if c in m else c for c in equation)):
            print({l:m[l] for l in letters})
            break
solve("GO + TO == OUT")
