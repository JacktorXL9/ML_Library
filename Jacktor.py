import numpy as np 

class LinearRegression:
    def __init__(self):
        """
        self.X_train = np.zeros((1,1))
        self.y_train = np.zeros((1,1))

        self.X_test = np.zeros((1,1))
        self.y_test = np.zeros((1,1))
        """
        self.Beta = np.zeros((1,1))
    
    def fit(self, X_train, y_train):
        """
        if type(X_train).__module__ != np.__name__ and type(y_train).__module__ != np.__name__:
            print("Please insert two numpy arrays")
        """
        X_train = np.append(np.ones((X_train.shape[0],1)), X_train, axis = 1)
        self.Beta = np.linalg.inv(np.transpose(X_train) @ X_train) @ np.transpose(X_train) @ y_train
    def test(self, X_test):
        X_test = np.append(np.ones((X_test.shape[0],1)), X_test, axis = 1)
        results = X_test @ self.Beta
        return results




X = np.array ([[0.18, 0.89], [1.0, 0.26], [0.92, 0.11], [0.07, 0.37], [0.85, 0.16], [0.99, 0.41], [0.87, 0.47]])
print(X)
y = np.array([[109.85], [155.72], [137.66], [76.17], [139.75], [162.6], [151.77]])
print(y)
X_t = np.array([[0.49, 0.18], [0.57, 0.83], [0.56, 0.64], [0.76, 0.18]])
model = LinearRegression()
print(model.Beta)
model.fit(X, y)
print(model.Beta)

print(model.test(X_t))