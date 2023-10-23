def score(hung_scores, cuong_scores, nn):
    hung_wins = 0
    cuong_wins = 0
    for ii in range(nn):
        if hung_scores[ii] > cuong_scores[ii]:
            hung_wins += 1
        elif cuong_scores[ii] > hung_scores[ii]:
            cuong_wins += 1
    return hung_wins, cuong_wins

nn = int(input())
hung_scores = list(map(int, input().split()))
cuong_scores = list(map(int, input().split()))
result = score(hung_scores, cuong_scores, nn)
print(f"{result[0]} {result[1]}")
