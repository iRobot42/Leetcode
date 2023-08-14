DELETE A FROM Person AS A, Person AS B
WHERE A.email = B.email AND A.id > B.id
