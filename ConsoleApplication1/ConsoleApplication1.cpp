// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

nt main() {
    // Summary:
    // Inputs:
    //   originalPrice: The original price of the item sold
    //   markupPercentage: The percentage of the marked-up price
    //   salesTaxRate: The sales tax rate
    // Process:
    //   1. Prompt the user for the original price, markup percentage, and sales tax rate.
    //   2. Calculate the selling price using the original price and markup percentage.
    //   3. Calculate the sales tax using the selling price and sales tax rate.
    //   4. Calculate the final price by adding the selling price and sales tax.
    // Outputs:
    //   originalPrice: The original price of the item
    //   markupPercentage: The percentage of the mark-up
    //   sellingPrice: The store's selling price of the item
    //   salesTax: The amount of the sales tax
    //   finalPrice: The final price of the item including tax

    // Declare variables
    double originalPrice, markupPercentage, salesTaxRate;

    // Prompt for input
    cout << "Enter the original price of the item: $";
    cin >> originalPrice;

    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    cout << "Enter the sales tax rate: ";
    cin >> salesTaxRate;

    // Calculate the selling price
    double sellingPrice = originalPrice * (1 + markupPercentage / 100.0);

    // Calculate the sales tax
    double salesTax = sellingPrice * (salesTaxRate / 100.0);

    // Calculate the final price
    double finalPrice = sellingPrice + salesTax;

    // Output the results
    cout << fixed << setprecision(2);
    cout << "Original price of the item: $" << originalPrice << endl;
    cout << "Markup percentage: " << markupPercentage << "%" << endl;
    cout << "Store's selling price of the item: $" << sellingPrice << endl;
    cout << "Amount of sales tax: $" << salesTax << endl;
    cout << "Final price of the item: $" << finalPrice << endl;

    return 0;
}
