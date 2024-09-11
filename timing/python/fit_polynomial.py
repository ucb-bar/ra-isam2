import argparse
import numpy as np
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score

def main(infile):
    # Load data from file
    data = np.loadtxt(infile)
    X = data[:, :2]  # First two columns as input
    y = data[:, 2]   # Third column as output

    # Polynomial fitting with degree=3
    poly = PolynomialFeatures(degree=3)
    X_poly = poly.fit_transform(X)

    # Fit the polynomial model
    model = LinearRegression()
    model.fit(X_poly, y)

    # Predict and calculate goodness of fit
    y_pred = model.predict(X_poly)
    r2 = r2_score(y, y_pred)

    # Output the coefficients and goodness of fit
    print("Polynomial Coefficients:\n", model.coef_)
    print("Intercept:", model.intercept_)
    print("R-squared (Goodness of Fit):", r2)

if __name__ == "__main__":
    # Argument parsing
    parser = argparse.ArgumentParser(description="Polynomial fitting of 3rd value to first two in a file.")
    parser.add_argument('--infile', type=str, required=True, help="Input file with rows of 3 numbers.")
    args = parser.parse_args()
    
    main(args.infile)

