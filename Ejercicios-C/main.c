//
//  main.c
//  Ejercicios-C
//
//  Created by Mayra Ruiz on 22/10/14.
//  Copyright (c) 2014 Mayra Ruiz. All rights reserved.
//

#include <stdio.h>

int main(int argc, char *argv[]){
	for(int i=0; i <= (*argv[1]-48); i++){
		printf("%d\t",i);
	}
	
	printf("\nFIN\n");
}