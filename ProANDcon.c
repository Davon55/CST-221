#include <pthread.h>
#include <stdio.h>


void producer() {

	
	int i;
	while(1){
		i = produce();
		put(i);
		printf("I go first%s\n", i);

	}
}

void consumer() {


	int i;
	while(1){
		i = get();
		consume(i);
     printf("I go second%s\n", i);
	}
}
int main(){
	
	int theProduct;
	pthread_t thread;
	ret = pthread_create(&thread,NULL,producer,NULL);
	if(ret != 0) {
                perror("pthread_join failed");
                exit(EXIT_FAILURE);
        }
	pthread_join(thread, (void **) &i);

int produce(){
	return theProduct++;
}

void consume(int i){
	printf(“%i”, i);
}


}

