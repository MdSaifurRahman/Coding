SELECT DATE_FORMAT(trans_date, '%Y-%m') AS month,
       country,
       COUNT(trans_date) AS trans_count,
       sum(Case when state='approved' then 1 else 0 end) as approved_count,
       sum(amount) as trans_total_amount,
       sum(Case when state='approved' then amount else 0 end)as approved_total_amount
FROM Transactions
GROUP BY country,Date_format(trans_date, '%Y-%m')
