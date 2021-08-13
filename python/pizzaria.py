available_toppings=['mushrooms','green peppers','extra cheese','olives','pepperoni','pineapple']
requested_toppings=['mushrooms','french fries','extra cheese']
for requested_topping in requested_toppings:
    if requested_topping in available_toppings:
        print(f"Adding {requested_topping}.")
    else:
        print(f"Sorry,We don't have {requested_topping}.")
print("\nFinished making your pizza!")