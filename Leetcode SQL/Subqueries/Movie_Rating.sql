-- Step 1: Find the user who has rated the greatest number of movies
SELECT u.name AS results
FROM Users u
JOIN (
    SELECT user_id
    FROM MovieRating
    GROUP BY user_id
    ORDER BY COUNT(movie_id) DESC, (SELECT name FROM Users WHERE Users.user_id = MovieRating.user_id) ASC
    LIMIT 1
) max_ratings ON u.user_id = max_ratings.user_id

UNION ALL

-- Step 2: Find the movie with the highest average rating in February 2020
SELECT m.title AS results
FROM Movies m
JOIN (
    SELECT movie_id
    FROM MovieRating
    WHERE created_at LIKE '2020-02-%'
    GROUP BY movie_id
    ORDER BY AVG(rating) DESC, (SELECT title FROM Movies WHERE Movies.movie_id = MovieRating.movie_id) ASC
    LIMIT 1
) highest_rated ON m.movie_id = highest_rated.movie_id;
