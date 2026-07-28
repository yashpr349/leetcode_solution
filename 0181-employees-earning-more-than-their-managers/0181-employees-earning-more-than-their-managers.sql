# Write your MySQL query statement below
SELECT E1.name as Employee
    FROM Employee AS E1 
        WHERE 
            salary > (
                SELECT salary FROM Employee where id=E1.managerId
            );