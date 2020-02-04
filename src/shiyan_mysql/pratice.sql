SELECT name, people_num, COUNT(proj_name) AS count_project
FROM employee, department, project
WHERE in_dpt = dpt_name AND of_dpt = dpt_name
GROUP BY name, people_num;
