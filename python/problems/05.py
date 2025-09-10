def better_than_average(class_points, your_points):
    average = sum(class_points) / len(class_points) #There is a sum feature in listss
    return your_points > average

# Example usage
class_scores = [70, 80, 90]
your_score = 85

if better_than_average(class_scores, your_score):
    print("You scored better than the average student!")
else:
    print("You did not score better than the average student.")

