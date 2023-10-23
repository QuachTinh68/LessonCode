def repeat_symbol(S, a):
    for x in a:
        result = S * x
        print(result)

def main():
        S = input()
        N = int(input())
        a=list(map(int,input().split()[:N]))

        repeat_symbol(S, a)

if __name__ == "__main__":
    main()
