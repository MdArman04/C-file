/*
#include<stdio.h>
#include<stdint.h>
#define SENSOR_DATA_COUNT 10

int main()
{
	uint16_t sensor_data[SENSOR_DATA_COUNT];
	uint16_t *p = sensor_data; //pointer to array
	
		  //Validate size 
	if(sizeof(sensor_data) != SENSOR_DATA_COUNT*sizeof(uint16_t))
	{
		printf("Size mismatch!\n");
		return 0;
	}
	
	// Store sensor values using pointer
	for(int i = 0; i < SENSOR_DATA_COUNT; i++)
	{
		*(p + i) = (i + 1) * 100;  // dummy sensor data
	}
	
	 //Read back data
	for(int i = 0; i < SENSOR_DATA_COUNT; i++)
	{
		printf("%d ", *(p + i));
		
	}
	 return 0;
	
}


/*#include<stdio.h>
#include<stdint.h>
#define CLEAR_BITS_I_TO_J(num, i, j) \
    ((num) & ~(((1U << ((j) - (i) + 1)) - 1) << (i)))

int main()
{
	uint32_t x = 0xFF;
	
	x = CLEAR_BITS_I_TO_J(x, 2, 5);
	printf("Result : 0x%X\n", x);
	return 0; 
}


#include<stdio.h>
#include<stdint.h>
#define CLEAR_BIT_POSTION(num, pos)  ((num) & ~(1U << (pos)))
#define SET_BIT_POSTION(num, pos)  ((num) | (1U << (pos)))
#define TOGGLE_BIT_POSTION(num, pos)  ((num) ^ (1U << (pos)))
#define READ_BIT(num, pos)    (((num) >> (pos)) & 1U)  

int main()
{
	uint32_t x = 255;
	//x = CLEAR_BIT_POSTION(x, 3);
	//x = SET_BIT_POSTION(x, 2);
	x = TOGGLE_BIT_POSTION(x, 3);
	printf("Result: 0x%X\n", x);
	return 0;
}


#include<stdio.h>

int main()
{
	int a[2][3] = {{1, 2, 3,}, {4, 5, 6}};
	
	int (*p)[3] = a; // pointeer to array of 3 ints
	
	for(int i = 0; i<2; i++)
	{
		for(int j = 0; j<3; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	return 0;
}


#include <stdio.h>

void swap_2d(int (*a)[3], int (*b)[3], int rows, int cols)
{
    int temp;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            temp = *(*(a+i)+j);
            *(*(a+i)+j) = *(*(b+i)+j);
            *(*(b+i)+j) = temp;
        }
    }
}

int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[2][3] = {{7,8,9},{10,11,12}};

    printf("Before swap:\n");
    printf("Array A:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Array B:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    swap_2d(a, b, 2, 3);

    printf("\nAfter swap:\n");
    printf("Array A:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Array B:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    return 0;
}


//Print string using pointer
#include<stdio.h>

int main()
{
	char str[] = "C PROGRAMMING";
	char *p = str;
	
	int length = 0;
	//while(*p++)
	
		//length++;
		//printf("%d", length);
	
	while(*p != '\0')
	{
		length++;
		printf("%c", *p);
		p++;
	}
	printf(" %d\n", length);
	
	return 0;
}



// Copy string using pointer
#include<stdio.h>

int main()
{
	char src[] = "Embedded Software";
	char dest[20];
	
	char *s = src, *d = dest;
	
	while(*s)
		*d++ = *s++;
		*d = '\0'; // null terminate destination string
    printf("%s\n", dest);
    return 0;
}

/*#include<stdio.h>
int main()
{
	char src[] = "Embedded";
	char dest[20];
	int i = 0;
	
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
}


//reverse using strlen
#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "ARM";
	char *start = str;
	char *end = str + strlen(str) - 1;
	
	while(start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	//  print reversed string
    printf("%s\n", str);
	return 0;
}

//Reverse string copy using POINTERS
#include<stdio.h>

int main()
{
	char src[] = "Embedded";
	char dest[20];
	char *s = src, *d = dest;
	int len = 0;
	
	while(*s++)
	len++;
	printf("%d\n", len);
	s = src + len - 1; // last chr point
	
	while(len --)
	*d++ = *s--;
	*d = '\0';
	printf("%s", dest);
	return 0;	
}


//Copy with LENGTH LIMIT
#include<stdio.h>

int main()
{
	char src[] = "Embedded";
	char dest[20];
	char *s = src, *d = dest;
	int n = 4;
	while(n-- && *s)
	{
		*d++ = *s++;
	}
	*d = '\0';
	printf("%s\n", dest);
	return 0;
}*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[5];
	int *ptr = (int*)malloc(5 * sizeof	(int));
	if(ptr == NULL)
	{
		printf("Memory Allocation Failed\n");
		return -1;
	}
	
	for(int i = 0; i < 5; i++)
	{
		ptr[i] = i * 10;
	}
	
	free(ptr);
	ptr = NULL;
}
*/

/*#include<stdio.h>

int main()
{
	int arr[5]; //static allocation
	for(int i = 0; i<5; i++)
	{
		arr[i] = i * 10;
	}
	
	for(int i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n = 5;
	int *ptr = (int*)malloc(n * sizeof(int));
	int *ptr = (int*)calloc(n*sizeof(int));
	ptr = (int*)realloc(ptr, 10 * sizeof(int));
	if(ptr == NULL)
	{
		printf("memory has no space!.\n");
		return -1;
	}
	for(int i = 0; i<5; i++)
	{
		ptr[i] = i * 10;
	}
	
	for(int i = 0; i<5; i++)
	{
		printf("%d ", ptr[i]);
	}
	free(ptr);
	ptr = NULL;
	return 0;
}*/

/*
#include<Stdio.h>

struct sensor
{
	int id;
	float temp;
	float humadity;
	char status;
};

int main()
{
	struct sensor s2 = {2, 30.0, 50.0, 'B'};
	struct sensor s1;
	s1.id = 1;
	s1.temp = 25.5;
	s1.humadity = 60.0;
	s1.status = 'A';
	
	printf("id num: %d\n", s1.id);
	printf("temp: %.2f\n", s1.temp);
	printf("humadity: %.2f\n", s1.humadity);
	printf("status: %c\n", s1.status);
	
	return 0;	
}*/
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    unsigned int pin;
    unsigned int state;
} GPIO_t;

void setGPIO(GPIO_t *gpio, unsigned int status)
{
	gpio->state = status; // (*gpio).state
}

int main()
{
	GPIO_t led = {13, 0};

   setGPIO(&led, 1);
   
   printf("pin: %d\n", led.pin);
   printf("state: %d\n", led.state);
   
   return 0;	
}*/
/*
#include<stdio.h>
#include<stdlib.h>

union data
{
	int intvalue;
	float floatvalue;
	char charvalue;
};

int main(void)
{
	union data d;
d.intvalue = 4;
printf("%d\n", d.intvalue);

d.floatvalue = 3.14;
printf("%.2f\n", d.floatvalue);

d.charvalue = 'A';
printf("%c\n", d.charvalue);
}*/


/*
#include<stdio.h>
#include<stdlib.h>

//access 32 bit reg as whole or individual bytes
typedef union
{
	unsigned int full; //access all 32 bits
	struct
	{
		unsigned char byte0;
		unsigned char byte1;
		unsigned char byte2;
		unsigned char byte3;
		
	}bytes;   //access individula bytes
}Register_t;

int main()
{
	Register_t reg;
	reg.full = 0x12345678;
	printf("Byte 0: 0x%02x\n", reg.bytes.byte0); //0x78
}*/

/*
#include<stdio.h>
int main()
{
	const int MAX_SENSORS = 10;
    //MAX_SENSORS = 20;
    printf("%d\n", MAX_SENSORS);
    int value = 42;
    const int *ptr = &value;
    //*ptr = 50;
    
    printf("%d\n", *ptr);
    
    int value1 = 10;
    int value2 = 20;
    int value3 = 30;
    int *const ptr1 = &value1; //ptr is const  but value is variable ....const ptr to int 
    *ptr1 = 50;
    //ptr1 = &value2;
    printf("%d\n", *ptr1);
    
    int const *ptr2 = &value1;  // ptr to conts data and variable pointer
    ptr2 = &value2;
    //*ptr2 = 30;
    printf("%d\n", *ptr2);
    
    const int *const ptr3 = &value3;  //const pointer to const data

     //*ptr3 = 50;      // ERROR (value cannot change)
     //ptr3 = &value2;  // ERROR (pointer cannot change)

    printf("value1 = %d\n", *ptr3);

    return 0;  
}*/

/*
#include<stdio.h>

typedef struct sensor
{
	float temp;
}sensor_t;

void displaySensor(const sensor_t *sensor)
{
	printf("Temp: %.1f\n", sensor->temp);
	//sensor->temp = 0;
	printf("Temp: %.1f\n", sensor->temp);
}
int main()
{
	displaySensor();
}
*/


/*
#include<stdio.h>
//#define UART_STATUS_REG ((volatile unsigned char *)0x40020000)
volatile unsigned char UART_STATUS_REG = 0;

volatile unsigned int systemTick = 0;

void sysTick_handler(void)
{
    systemTick++;
}

int main(void)
{
    volatile unsigned char *status = &UART_STATUS_REG;

    *status = 1;
    printf("status: %d\n", *status);

    sysTick_handler();
    printf("Ticks: %u\n", systemTick);

    return 0;
}*/

/*
//Read_only h/w register(can change, but we cant write)
const volatile uint32_t *intput_reg = (uint32_t*)0x40020010;

uint32_t value = *input_reg; //read is oky
*input_reg = 0x01; //const prevents write*/

/*
#include <stdio.h>

// ================= ENUM 1 =================
enum status
{
    STATUS_IDLE = 0,
    STATUS_RUNNING = 1,
    STATUS_ERROR = 2,
    STATUS_COMPLETE = 3
};

// ================= ENUM 2 ================= 
enum color
{
    RED,
    GREEN,
    BLUE
};

// ================= ENUM 3 (typedef enum) ================= 
typedef enum
{
    LED_OFF,
    LED_ON,
    LED_BLINK
} LED_status_t;

int main(void)
{
    // Declare variables 
    enum status devicestatus = STATUS_IDLE;
    enum color mycolor = GREEN;
    LED_status_t ledstate = LED_ON;

    printf("===== ENUM STATUS VALUES =====\n");
    printf("STATUS_IDLE     = %d\n", STATUS_IDLE);
    printf("STATUS_RUNNING  = %d\n", STATUS_RUNNING);
    printf("STATUS_ERROR    = %d\n", STATUS_ERROR);
    printf("STATUS_COMPLETE = %d\n", STATUS_COMPLETE);

    printf("\nCurrent Device Status = %d\n", devicestatus);

    printf("\n===== ENUM COLOR VALUES =====\n");
    printf("RED   = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE  = %d\n", BLUE);

    printf("\nCurrent Color = %d\n", mycolor);

    printf("\n===== LED STATUS VALUES =====\n");
    printf("LED_OFF   = %d\n", LED_OFF);
    printf("LED_ON    = %d\n", LED_ON);
    printf("LED_BLINK = %d\n", LED_BLINK);

    printf("\nCurrent LED State = %d\n", ledstate);

    return 0;
}*/

/*simple const
#define MAX_BUFFER_SIZE 256
#define PI 3.14159
char buffer[MAX_BUFFER_SIZE];
float area = PI * r * r;

//h/w reg addrs
#define GPIO_BASE 0x40020000
#define LED_PIN 13

//fun like macros
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int large = MAX(10, 20);

//bitwise
#define SET_BIT(reg, bit) ((reg) |= (1 << (bit)))
#define CLEAR_BIT(reg, bit) ((reg) &= ~(1 << (bit)))
#define TOGGLE_BIT(reg, bit) ((reg) ^= (1 << (bit)))
#define READ_BIT(reg, bit) (((reg)  >> (bit)) & 1)

int main(void)
{
	uint8_t portA = 0x00;
    SET_BIT(portA, 3);
    CLEAR_BIT(portA, 3);
}
*/

/*
#include<stdio.h>

int findmax(int *ptr, int size)
{
	int max = *ptr;
	for(int i = 0; i < size; i++)
	{
		if(*(ptr + i) > max)
		{
			max = *(ptr + i);
		}
	}
	return max;
}

int main()
{
	int arr[] = {10, 45, 23, 89, 12};
	int size = sizeof(arr) /sizeof(arr[0]);
	
	int maximum = findmax(arr, size);
	printf("Maximum value = %d\n", maximum);
	return 0;
}




#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Before swap:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);   // passing address of variables

    printf("After swap:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
*/

/*
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>

typedef enum
{
	FORWARD = 0, 
	REVERSE
}Direct_t;

typedef struct
{
	unsigned short speed;
	Direct_t direction;
	bool enabled;
}Motor_t;

void Motor_Init(Motor_t *motor)
{
	motor->speed = 0;
	motor->dirction = FORWARD;
	motor->enabled = false;
}

void Motor_Start(Motor_t *motor)
{
	motor->enabled = true;
}
void Motor_Stop(Motor_t *motor)
{
	motor->enabled = false;
}

void Motor_SetSpeed(Motor_t *motor, unsigned short speed)
{
	motor->speed = speed;
}

void Motor_SetDirection(Motor_t *motor, Direct_t dir)
{
	motor->direction = dir;
}*/


/*
#include<stdio.h>

#define SET_BIT(REG, MASK)  ((REG) |= (MASK))
#define CLEAR_BITS(REG, MASK) ((REG) &= ~(MASK))
#define IS_BIT_SET(REG, BIT) ((REG) & (1 << (BIT)))
#define MASK_0_TO_3   (0x0F)

int main()
{
	unsigned char reg = 0x00;
	SET_BIT(reg, MASK_0_TO_3);
	
	if(IS_BIT_SET(reg, 6))
	{
		printf("Bit 2 is set\n");
	}
	else
	{
		printf("Bit is not unable\n");
	}
}*/

//PG.NO: 48

#include<stdio.h>
int isPowerofTwo(int num)
{
	return num && !(num & (num - 1));
}

int main()
{
	int num = 17;
	if(isPowerofTwo(num))
	printf("%d is a power of 2.\n", num);
	else
	printf("%d is not a power of 2.\n", num);
	return 0;
}