SELECT Email FROM Person
GROUP BY email HAVING COUNT( * ) > 1
