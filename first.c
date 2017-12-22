#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<math.h>
#include "first.h"

struct variable{
	char letter;
	int value;
};

int isThere(char var, struct variable * root){ //determines whether or not a variable is in the LINKED LIST, such as x, y, u
	int i;
	for(i=0;i<26;i++){
		if(root[i].letter == var){
			return 1; //meaning vaiable is already in the Linked List 
		}
	}
	return 0; //meaning no
}	

int getNum(char var, struct variable * root){ //finds a letter in the Linked list and returns its value
	int num;
	int i;	
	for(i = 0; i< 26; i++){
		if(root[i].letter == var){
			num = root[i].value;
			return num;
		}
	}
	return 0;
}
int getIndex(char var, struct variable * root){
	int i;
	for(i = 0;i<26;i++){
		if(root[i].letter == var){
			return i;
		}
	}
	return 0;
}
int findIndex(struct variable * root){ //finds next available index in the Linked List
	int i;
	for(i = 0; i<26; i++){
		if(root[i].letter == 0){
			return i;
		}
	}
	return 0;
}

int ANDinstruction(int val1, int val2){
	if(val1==1 && val2==1){
		return 1;
	}
	return 0;
}

int ORinstruction(int val1, int val2){
	if(val1==1 || val2==1){
		return 1;
	}
	return 0;
}

int NOTinstruction(int val1){
	if(val1 == 0){
		return 1;
	}else if(val1 == 1){
		return 0;
	}
	return 0;
}

int * TWOFOURDECODERinstruction(int val1, int val2){
	int * values = calloc(4,sizeof(int));
	int i;
	for(i=0; i<4;i++){
		if(i==0){
			if(val1==0 && val2==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}
		}else if(i==1){
			if(val1==0 && val2==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==2){
			if(val1==1 && val2==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}
		}else if(i==3){
			if(val1==1 && val2==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}
		}
	}
	return values;
}

int * FOURSIXTEENDECODERinstruction(int val1, int val2, int val3, int val4){
	int * values = calloc(4,sizeof(int));
	int i;
	for(i=0; i<16;i++){
		if(i==0){
			if(val1==0 && val2==0 && val3==0 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}
		}else if(i==1){
			if(val1==0 && val2==0 && val3==0 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==2){
			if(val1==0 && val2==0 && val3==1 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==3){
			if(val1==0 && val2==0 && val3==1 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==4){
			if(val1==0 && val2==1 && val3==1 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==5){
			if(val1==0 && val2==1 && val3==1 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==6){
			if(val1==0 && val2==1 && val3==0 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==7){
			if(val1==0 && val2==1 && val3==0 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==8){
			if(val1==1 && val2==1 && val3==0 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==9){
			if(val1==1 && val2==1 && val3==0 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==10){
			if(val1==1 && val2==1 && val3==1 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==11){
			if(val1==1 && val2==1 && val3==1 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==12){
			if(val1==1 && val2==0 && val3==1 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==13){
			if(val1==1 && val2==0 && val3==1 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==14){
			if(val1==1 && val2==0 && val3==0 && val4==1){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}else if(i==15){
			if(val1==1 && val2==0 && val3==0 && val4==0){
				values[i] = 1;
			}else{
				values[i] = 0;
			}

		}
	}
	return values;
}

int EIGHTONEMUXinstruction(int val1, int val2, int val3, int val4, int val5, int val6, int val7, int val8, int sel1, int sel2, int sel3){
	int result;
	int num1=0;
	int num2=0;
	int num3=0;
	int num4=0;
	int num5=0; 
	int num6=0; 
	int num7=0; 
	int num8=0;	
	if(val1 == 1){
		if(sel1==0 && sel2==0 && sel3==0){
			num1 = 1;
		}else{
			num1 = 0;
		}
	}else if(val2 == 1){
		if(sel1==0 && sel2==0 && sel3==1){
			num2 = 1;
		}else{
			num2 = 0;
		}
	}else if(val3 == 1){
		if(sel1==0 && sel2==1 && sel3==1){
			num3 = 1;
		}else{
			num3 = 0;
		}
	}else if(val4 == 1){
		if(sel1==0 && sel2==1 && sel3==0){
			num4 = 1;
		}else{
			num4 = 0;
		}
	}else if(val5 == 1){
		if(sel1==1 && sel2==1 && sel3==0){
			num5 = 1;
		}else{
			num5 = 0;
		}
	}else if(val6 == 1){
		if(sel1==1 && sel2==1 && sel3==1){
			num6 = 1;
		}else{
			num6 = 0;
		}
	}else if(val7 == 1){
		if(sel1==1 && sel2==0 && sel3==1){
			num7 = 1;
		}else{
			num7 = 0;
		}
	}else if(val8 == 1){
		if(sel1==1 && sel2==0 && sel3==0){
			num8 = 1;
		}else{
			num8 = 0;
		}
	}

	if(num1==1 || num2==1 || num3==1 || num4==1 || num5==1 || num6==1 || num7==1 || num8==1){
		result=1;
	}else{
		result=0;
	}

	return result;	
}

int FOURONEMUXinstruction(int val1, int val2, int val3, int val4, int sel1, int sel2){
	int result;
	int num1=0;
	int num2=0;
	int num3=0;
	int num4=0;
		
	if(val1 == 1){
		if(sel1==0 && sel2==0){
			num1 = 1;
		}else{
			num1 = 0;
		}
	}else if(val2 == 1){
		if(sel1==0 && sel2==1){
			num2 = 1;
		}else{
			num2 = 0;
		}
	}else if(val3 == 1){
		if(sel1==1 && sel2==1){
			num3 = 1;
		}else{
			num3 = 0;
		}
	}else if(val4 == 1){
		if(sel1==1 && sel2==0){
			num4 = 1;
		}else{
			num4 = 0;
		}
	}

	if(num1==1 || num2==1 || num3==1 || num4==1){
		result=1;
	}else{
		result=0;
	}


	return result;
}

int main(int argc,char ** argv){
	
	if(argc<3){
		printf("%s\n","error");
		return 0;
	}
	
	FILE * circuit_file;
	FILE * input_file;
	circuit_file = fopen(argv[1],"r");
	input_file = fopen(argv[2],"r");

	char type[50];
	int invarCount; //amount of letters in INPUTVAR
	int outvarCount;
	struct variable * input = calloc(52,sizeof(struct variable)); //linked list
	struct variable * output = calloc(52,sizeof(struct variable)); //linked list

	char buffer[2];	

	fscanf(circuit_file, "%s %d", type, &invarCount); //reads INPUTVAR

	int i;
	for(i=0; i<invarCount;i++){		//populates all the variables A,B,C,D,E,F,G, etc. into the character array called "letter"
		fscanf(circuit_file, "%s", buffer);
		input[i].letter = buffer[0];		
	}

	/* So now, A would be input[0], B would be input[1],and C would be input[2], etc */
	
	fscanf(circuit_file, "%s %d", type, &outvarCount); //reads OUTPUTVAR

	for(i=0; i<outvarCount;i++){
		fscanf(circuit_file, "%s", buffer);
		output[i].letter = buffer[0];
	}

	/* So now, X would be input[0]*/
	/*Now, we have read all of the input and output VARIABLES, now we must load them with 0s or 1s from the input_file */
	int num;	

while(fscanf(input_file,"%d",&num) != EOF){
	//int num;
	input[0].value = num;
	for(i=1;i<invarCount;i++){
		fscanf(input_file, "%d", &num); 	//now we initialize A=0, B=0, C=0, D=0,  etc....
		input[i].value = num;
	}
	
	
	
	/*At this point we will read the circuit_file for the AND, OR, instructions*/
	
	while(fscanf(circuit_file, "%s", type) != EOF){ //read each combinational circuit and works it appropriately
		if(strcmp(type,"AND") == 0){
			char temp1;
			char temp2;
			//printf("%s\n", "AND instruction");
			fscanf(circuit_file, "%s", buffer);
			temp1 = buffer[0]; 	//holds the name of the first variable(letter)
			fscanf(circuit_file, "%s", buffer);
			temp2 = buffer[0]; 	//holds the name of the second variable(letter)
			int val1 = getNum(temp1,input);
			int val2 = getNum(temp2,input);
			int result = ANDinstruction(val1, val2);
			//check if the third variable is in our input array
			fscanf(circuit_file, "%s", buffer);
			int w;
			for(w=0;w<outvarCount;w++){
				if(output[w].letter == buffer[0]){
					output[w].value = result;
					continue;
				}
			}
			if(isThere(buffer[0], input) == 0){ //1 if x is already in linked list, 0 if not
				//x not in linked list, so, we put x into linked list at the next available index
				int x = findIndex(input);
				input[x].letter = buffer[0]; //inserts the x into the linked list
				input[x].value = result;
			}
			else if(isThere(buffer[0], input) == 1){
				//x is in linked list, so we change x's value to the result
				int x = getIndex(buffer[0], input);
				input[x].value = result;
			}
			
		}else if(strcmp(type,"OR") == 0){
			char temp1;
			char temp2;
			//printf("%s\n", "OR instruction");
			fscanf(circuit_file, "%s", buffer);
			temp1 = buffer[0];
			fscanf(circuit_file, "%s", buffer);
			temp2 = buffer[0];
			int val1 = getNum(temp1,input);
			int val2 = getNum(temp2,input);
			int result = ORinstruction(val1, val2);
			//check if the third variable is in our input array
			fscanf(circuit_file, "%s", buffer);
			int w;
			for(w=0;w<outvarCount;w++){
				if(output[w].letter == buffer[0]){
					output[w].value = result;
					continue;
				}
			}
			if(isThere(buffer[0], input) == 0){ //1 if x is already in linked list, 0 if not
				//x not in linked list, so, we put x into linked list at the next available index
				int x = findIndex(input);
				input[x].letter = buffer[0]; //inserts the x into the linked list
				input[x].value = result;
			}else if(isThere(buffer[0], input) == 1){
				//x is in linked list, so we change x's value to the result
				int x = getIndex(buffer[0], input);
				input[x].value = result;
			}
		}else if(strcmp(type,"NOT") == 0){
			char temp1;
			fscanf(circuit_file, "%s", buffer);
			temp1 = buffer[0];
			int val1 = getNum(temp1,input);
			int result = NOTinstruction(val1);
			
			fscanf(circuit_file, "%s", buffer);
			int w;
			for(w=0;w<outvarCount;w++){
				if(output[w].letter == buffer[0]){
					output[w].value = result;
					continue;
				}
			}
			if(isThere(buffer[0], input) == 0){ //1 if x is already in linked list, 0 if not
				//x not in linked list, so, we put x into linked list at the next available index
				int x = findIndex(input);
				input[x].letter = buffer[0]; //inserts the x into the linked list
				input[x].value = result;
			}else if(isThere(buffer[0], input) == 1){
				//x is in linked list, so we change x's value to the result
				int x = getIndex(buffer[0], input);
				input[x].value = result;
			}
		}else if(strcmp(type,"DECODER") == 0){
			int num;
			fscanf(circuit_file,"%d\n", &num); //how many inputs into the decoder
			if(num == 2){
				char temp1;
				char temp2;
				fscanf(circuit_file, "%s", buffer);
				temp1 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp2 = buffer[0];
				int val1 = getNum(temp1,input);
				int val2 = getNum(temp2,input);
				int * result = calloc(4,sizeof(int)); //array of integers
				result = TWOFOURDECODERinstruction(val1, val2);
				int y;
				for(y=0;y<4;y++){
					fscanf(circuit_file, "%s", buffer);
					int w;
					for(w=0;w<outvarCount;w++){
						if(output[w].letter == buffer[0]){
							output[w].value = result[y];
							continue;
						}
					}
					if(isThere(buffer[0], input) == 0){ //1 if x is already in linked list, 0 if not
						//x not in linked list, so, we put x into linked list at the next available index
						int x = findIndex(input);
						input[x].letter = buffer[0]; //inserts the x into the linked list
						input[x].value = result[y];
					}else if(isThere(buffer[0], input) == 1){
						//x is in linked list, so we change x's value to the result
						int x = getIndex(buffer[0], input);
						input[x].value = result[y];
					}
				}
			}else if(num == 4){
				char temp1;
				char temp2;
				char temp3;
				char temp4;
				fscanf(circuit_file, "%s", buffer);
				temp1 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp2 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp3 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp4 = buffer[0];
				int val1 = getNum(temp1,input);
				int val2 = getNum(temp2,input);
				int val3 = getNum(temp3,input);
				int val4 = getNum(temp4,input);
				int * result = calloc(16,sizeof(int)); //array of integers
				result = FOURSIXTEENDECODERinstruction(val1, val2, val3, val4);
				int y;
				for(y=0;y<16;y++){
					fscanf(circuit_file, "%s", buffer);
					int w;
					for(w=0;w<outvarCount;w++){
						if(output[w].letter == buffer[0]){
							output[w].value = result[y];
							continue;
						}
					}
					if(isThere(buffer[0], input) == 0){ //1 if x is already in linked list, 0 if not
						//x not in linked list, so, we put x into linked list at the next available index
						int x = findIndex(input);
						input[x].letter = buffer[0]; //inserts the x into the linked list
						input[x].value = result[y];
					}else if(isThere(buffer[0], input) == 1){
						//x is in linked list, so we change x's value to the result
						int x = getIndex(buffer[0], input);
						input[x].value = result[y];
					}
				}
			}
		}else if(strcmp(type,"MULTIPLEXER")==0){
			int num;
			fscanf(circuit_file, "%d\n", &num);
			if(num == 8){
				char temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8;
				char sel1,sel2,sel3;
				fscanf(circuit_file, "%s", buffer);
				temp1 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp2 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp3 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp4 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp5 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp6 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp7 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp8 = buffer[0];

				fscanf(circuit_file, "%s", buffer);
				sel1 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				sel2 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				sel3 = buffer[0];

				int val1 = getNum(temp1,input);
				int val2 = getNum(temp2,input);
				int val3 = getNum(temp3,input);
				int val4 = getNum(temp4,input);
				int val5 = getNum(temp5,input);
				int val6 = getNum(temp6,input);
				int val7 = getNum(temp7,input);
				int val8 = getNum(temp8,input);

				int selector1 = getNum(sel1,input);
				int selector2 = getNum(sel2,input);
				int selector3 = getNum(sel3,input);

				int result = EIGHTONEMUXinstruction(val1, val2, val3, val4, val5, val6, val7, val8, selector1, selector2, selector3);
				fscanf(circuit_file, "%s", buffer);
				int w;
				for(w=0;w<outvarCount;w++){
					if(output[w].letter == buffer[0]){
						output[w].value = result;
						continue;
					}
				}
				if(isThere(buffer[0], input) == 0){ //1 if x is already in linked list, 0 if not
					//x not in linked list, so, we put x into linked list at the next available index
					int x = findIndex(input);
					input[x].letter = buffer[0]; //inserts the x into the linked list
					input[x].value = result;
				}else if(isThere(buffer[0], input) == 1){
					//x is in linked list, so we change x's value to the result
					int x = getIndex(buffer[0], input);
					input[x].value = result;
				}
			}else if(num == 4){
				char temp1, temp2, temp3, temp4;
				char sel1,sel2;
				fscanf(circuit_file, "%s", buffer);
				temp1 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp2 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp3 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				temp4 = buffer[0];

				fscanf(circuit_file, "%s", buffer);
				sel1 = buffer[0];
				fscanf(circuit_file, "%s", buffer);
				sel2 = buffer[0];

				int val1 = getNum(temp1,input);
				int val2 = getNum(temp2,input);
				int val3 = getNum(temp3,input);
				int val4 = getNum(temp4,input);
				
				int selector1 = getNum(sel1,input);
				int selector2 = getNum(sel2,input);

				int result = FOURONEMUXinstruction(val1, val2, val3, val4, selector1, selector2);

				fscanf(circuit_file, "%s", buffer);
				int w;
				for(w=0;w<outvarCount;w++){
					if(output[w].letter == buffer[0]){
						output[w].value = result;
						continue;
					}
				}
				if(isThere(buffer[0], input) == 0){ //1 if x is already in linked list, 0 if not
					//x not in linked list, so, we put x into linked list at the next available index
					int x = findIndex(input);
					input[x].letter = buffer[0]; //inserts the x into the linked list
					input[x].value = result;
				}else if(isThere(buffer[0], input) == 1){
					//x is in linked list, so we change x's value to the result
					int x = getIndex(buffer[0], input);
					input[x].value = result;
				}	
			}
		}
	}
	int s;
	for(s=0;s<outvarCount;s++){
		//printf(" %d",output[s].value);
	}
	//printf("\n");
	rewind(circuit_file);
	char trashtype[50];
	int trashcount;
	char trashbuffer[500];
	fscanf(circuit_file,"%s %d", trashtype, &trashcount); //scans the INPUTVAR line but does nothing with it
	int j;
	for(j=0; j<trashcount;j++){
		fscanf(circuit_file,"%s",trashbuffer);
	}
	fscanf(circuit_file,"%s %d", trashtype, &trashcount); //scans the OUTPUTVAR line but does nothing with it
	for(j=0; j<trashcount;j++){
		fscanf(circuit_file,"%s",trashbuffer);
	}	
}
	return 0;
}
