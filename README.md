# Urinal-Selection-Optimization
This repository presents a theory and algorithm for determining the optimal position in an occupied row of urinals, with the goal of maximising privacy and minimising discomfort. The theory considers factors such as 
1. the proximity of occupied urinals 
2. the number of neighbouring urinals 
3. the relative distance to the centre of the row. 

By optimising the spatial arrangement, the approach ensures a comfortable and efficient use of public toilet facilities.

| **Aspect**                 | **Complexity** |
|----------------------------|----------------------|
| **Time Complexity**         | $O(n^2)$ (improvable)          |
| **Space Complexity**        | $O(1)$                |

## Statistics
![alt text](https://raw.githubusercontent.com/mark-rez/Urinal-Selection-Optimization/refs/heads/main/stats/7_options.png)

### Observations
- Options 1 and 7 dominate: These extremes are the most chosen, with around 35% to 40%.
- The middle options are unpopular: Options 2 to 6 have significantly lower selection rates, all below 10%.
- The pattern of choices reflects a mirror-like symmetry, with preferences decreasing steadily from the edges (1 and 7) towards the centre (4), which represents the axis of reflection.
- Due to the symmetry, the percentages vary and are not perfectly symmetrical, as there are ambiguities in the selection in some cases.
