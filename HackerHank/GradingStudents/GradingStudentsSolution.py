def gradingStudents(grades):
    for i in range(0, len(grades)):
        if(grades[i] >= 38 and grades[i] % 5 >= 3):
            while(grades[i] % 5 != 0):
                grades[i] += 1
    return grades
