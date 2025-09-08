w = int(input())
l = int(input())
h = int(input())
if min(w, l) / h >= 2.0 and max(w, l) <= 2 * min(w, l):
    print("good")
else:
    print("bad")
