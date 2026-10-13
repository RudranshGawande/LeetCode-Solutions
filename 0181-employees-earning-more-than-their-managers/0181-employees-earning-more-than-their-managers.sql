# Write your MySQL query statement below
SELECT Employee.name AS Employee
FROM Employee Employee
JOIN Employee managerId
    ON Employee.managerId = managerId.id
WHERE Employee.salary > managerId.salary;