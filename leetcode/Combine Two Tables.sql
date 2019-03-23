# Write your MySQL query statement below
SELECT
    p.FirstName as FirstName
    , p.LastName as LastName
    , a.City as City
    , a.State as State
FROM
    Person p
LEFT JOIN
    Address a
ON (p.PersonId = a.PersonId)
