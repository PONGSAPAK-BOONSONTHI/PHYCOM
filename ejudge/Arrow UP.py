"""Arrow UP """
def main():
    """Arrow UP """
    n = int(input())
    M = n
    for i in range(n + 3):
        if i <= M:
            loop_j = M + i
        else:
            loop_j = M
        for j in range(loop_j + 1):
            L = M - i
            R = M + i
            if j == M or j == L or j == R:
                print("*",end="")
            else:
                print(" ",end="")
        print("")
main()
