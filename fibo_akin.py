def length_sup_u_k(n, k):
    # your code
    seq = []
    count = 0
    for i in range(n):
        if i <= 1:
            seq.append(1)
        else:
            first_index = i - seq[i-1]
            second_index = i - seq[i-2]
            new_term = seq[first_index] + seq[second_index]
            seq.append(new_term)
            if new_term >= k:
                count += 1
        
    return count


def comp(n):
    # your code
    seq = []
    count = 0
    for i in range(n):
        if i <= 1:
            seq.append(1)
        else:
            first_index = i - seq[i-1]
            second_index = i - seq[i-2]
            new_term = seq[first_index] + seq[second_index]
            seq.append(new_term)
            if new_term < seq[i-1]:
                count += 1