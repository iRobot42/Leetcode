SELECT E.name AS 'Employee'
FROM Employee AS E, Employee AS M
WHERE E.managerID = M.ID AND E.salary > M.salary
