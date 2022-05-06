def least_moves(target):
    del_x = [2, 2, -2, -2, -1, -1, 1, 1]
    del_y = [1, -1, 1, -1, 2, -2, 2, -2]

    check = {}
    check["0,0"] = True

    reachable_states = [[0, 0]]
    steps = 0

    while(reachable_states != []):
        if(target in reachable_states):
            return steps
        else:
            u = len(reachable_states)
            for i in range(u):
                t = reachable_states[0]
                check[",".join(map(str, t))] = True
                reachable_states.pop(0)

                for i in range(8):
                    n = [t[0]+del_x[i], t[1]+del_y[i]]
                    if(n[0] >= 0 and n[0] <= 10**18 and n[1] >= 0 and n[1] <= 10**18 and (",".join(map(str, n)) not in check.keys())):
                        reachable_states.append(n)

            steps += 1


t = int(input())

while(t != 0):

    target = list(map(int, input().split(' ')))

    print(least_moves(target))
    t -= 1
