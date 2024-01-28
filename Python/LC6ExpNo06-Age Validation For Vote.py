class VoteError(Exception):
    pass

class InvalidError(Exception):
    pass

try:
    name = input("Enter name:")
    age = int(input("Enter the age:"))

    if age <= 0:
        raise InvalidError
    elif age < 18:
        raise VoteError
    else:
        print("Eligible for voting")

except VoteError:
    print("Not eligible for voting")

except InvalidError:
    print("Enter a valid age")