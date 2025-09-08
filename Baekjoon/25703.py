n = int(input())
print("int a;")
print("int *ptr = &a;")
for i in range(1, n):
    if i == 1:
        print("int %sptr%s = &ptr;" % ('*' * (i + 1), i + 1))
    else:
        print("int %sptr%s = &ptr%s;" % ('*' * (i + 1), i + 1, i))
