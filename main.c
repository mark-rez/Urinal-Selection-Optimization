#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int find_best_position(int row[], int size) {
    int best_index = -1;
    int max_distance = 0;
    int min_neighbors = INT_MAX;

    for (int i = 0; i < size; i++) {
        // Skip occupied positions
        if (row[i] != 0) continue; 

        int nearest_distance = INT_MAX;
        int neighbor_count = 0;

        // Check left and right neighbors
        for (int direction = -1; direction <= 1; direction += 2) {
            int current = i + direction;

            if (row[current] && current >= 0 && current < size) {
                neighbor_count++;
            }

            while (current >= 0 && current < size) {
                if (row[current]) {
                    int distance = (current - i) * direction;
                    if (distance < nearest_distance) {
                        nearest_distance = distance;
                    }
                    break;
                }
                current += direction;
            }
        }

        // Update the best position based on criteria
        if (nearest_distance > max_distance || 
            (nearest_distance == max_distance && neighbor_count < min_neighbors) || 
            (nearest_distance == max_distance && neighbor_count == min_neighbors && abs(i - size/2) > abs(best_index - size/2))) {
            max_distance = nearest_distance;
            min_neighbors = neighbor_count;
            best_index = i;
        }
    }

    return best_index;
}

int main() {
    int row[] = {1, 0, 0, 1, 1, 0}; // 5 is best
    int size = sizeof(row) / sizeof(row[0]);

    int best_position = find_best_position(row, size);
    printf("The best position is at index: %d\n", best_position);

    return 0;
}
