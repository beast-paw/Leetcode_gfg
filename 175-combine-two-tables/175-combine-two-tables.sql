# Write your MySQL query statement below
SELECT firstname,lastname,city,state from Person Left outer Join Address on Person.personId = Address.personId ;