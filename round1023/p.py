import numpy as np
import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

# Step 1: Define values of random variables X and Y
X = [0, 1, 2]
Y = [1, 2]

# Step 2: Define the joint probability distribution P(X, Y)
# Rows: X values, Columns: Y values
joint_prob = np.array([
    [0.1, 0.2],   # P(X=0, Y=1), P(X=0, Y=2)
    [0.2, 0.1],   # P(X=1, Y=1), P(X=1, Y=2)
    [0.3, 0.1]    # P(X=2, Y=1), P(X=2, Y=2)
])

# Verify that the total probability sums to 1
print("Sum of all joint probabilities:", joint_prob.sum())

# Step 3: Create a DataFrame for visualization
df = pd.DataFrame(joint_prob, index=[f"X={x}" for x in X], columns=[f"Y={y}" for y in Y])
print("\nJoint Probability Table:\n", df)

# Step 4: Marginal Distributions
P_X = joint_prob.sum(axis=1)
P_Y = joint_prob.sum(axis=0)

print("\nMarginal P(X):", dict(zip(X, P_X)))
print("Marginal P(Y):", dict(zip(Y, P_Y)))

# Step 5: Conditional Probability P(Y=1 | X=0)
cond_prob = joint_prob[0][0] / P_X[0]
print("\nConditional P(Y=1 | X=0):", cond_prob)

# Step 6: Heatmap visualization
plt.figure(figsize=(6, 4))
sns.heatmap(df, annot=True, cmap="YlGnBu", fmt=".2f")
plt.title("Joint Probability Heatmap")
plt.xlabel("Y")
plt.ylabel("X")
plt.show()
