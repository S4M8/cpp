/* 
 * Notes: 
 * The lasagna should be in the oven for 40 minutes.
 * Each layer take 2 minutes to prepare. 
 */

// ovenTime returns the amount in minutes that the lasagna should stay in the oven.
int ovenTime() {
  int time{40};
    return time;
}

/* 
   remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) { 
  int timeRemaining{ovenTime() - actualMinutesInOven};
  return timeRemaining;
}

/* 
 preparationTime returns an estimate of the preparation time based on the
 number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    int timePerLayer{2};
    return numberOfLayers * timePerLayer;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
  return preparationTime(numberOfLayers) + actualMinutesInOven;
}


