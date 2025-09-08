dict = {
    "Poblano": 1500,
    "Mirasol": 6000,
    "Serrano": 15500,
    "Cayenne": 40000,
    "Thai": 75000,
    "Habanero": 125000
}

s = 0
n = int(input())
for i in range(n):
    x = input()
    s += dict[x]

print(s)