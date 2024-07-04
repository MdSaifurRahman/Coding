
Select Product.product_name, Sales.year, Sales.price
From Sales
Left Join Product on Sales.product_id = Product.product_id