description = input()

if len(description) > 20:
    result = description[:20] + "..."
else:
    result = description
print(result)