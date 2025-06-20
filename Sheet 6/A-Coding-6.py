from collections import Counter

text = input().strip()
N = int(input())

words = text.split()

word_counts = Counter(words)

filtered_words = [word for word, count in word_counts.items() if count >= N]

filtered_words.sort()


if filtered_words:
    print(' '.join(filtered_words))
else:
    print("NA")