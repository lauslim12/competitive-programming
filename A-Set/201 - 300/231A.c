#include <stdio.h>

int main() {
  int numberOfProblems, sureAnswers, i;
  int friendOneOpinion[1000], friendTwoOpinion[1000], friendThreeOpinion[1000];    
  scanf("%d", &numberOfProblems);
    
    for(i = 0; i < numberOfProblems; i++) {
      scanf("%d %d %d", &friendOneOpinion[i], &friendTwoOpinion[i], &friendThreeOpinion[i]);
      if( 
          (friendOneOpinion[i] == 1 && friendTwoOpinion[i] == 1) || 
          (friendOneOpinion[i] == 1 && friendThreeOpinion[i] == 1) ||
          (friendTwoOpinion[i] == 1 && friendThreeOpinion[i] == 1) 
      ) {
      sureAnswers++;
    }
    else {
      continue;   
    }
  }
  printf("%d", sureAnswers);
  return 0;
}
