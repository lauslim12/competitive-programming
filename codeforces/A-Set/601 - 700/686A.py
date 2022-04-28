distressed_kids = 0
test_cases, ice_creams = map(int, input().split())

while test_cases > 0:
    # Requested Ice Creams will definitely be an integer.
    operator, requested_ice_creams = map(str, input().split())

    if operator == "-":
        if ice_creams - int(requested_ice_creams) < 0:
            distressed_kids += 1
        else:
            ice_creams -= int(requested_ice_creams)
    
    if operator == "+":
        ice_creams += int(requested_ice_creams)

    test_cases -= 1

print(ice_creams, distressed_kids)
