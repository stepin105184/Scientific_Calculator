#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
float calculator_operand3 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE,POWER,LOG,EXP,SQUAREROOT,CUBE,SINE,COS,TAN,SINEH,COSEH,TANH,ISINE,ICOSE,ITAN,EXIT };
/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5.Power\n6.LOG\n7.Exponent\n8.Square\n9.Cube\n10.Sine\n11.COSE\n12.TAN\n13.SINEH\n14.COSEH\n15.TANH\n16.ISINE\n17.ICOSE\n18.ITAN\n19. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,divide(calculator_operand1, calculator_operand2));
            
            
            break;
	
	case POWER:printf("%f",power(calculator_operand1, calculator_operand2)); break;
	case LOG:printf("%f",logten(calculator_operand1));break;
	case EXP:printf("%f",exponent(calculator_operand1));break;
	case SQUAREROOT:printf("%f",square_root(calculator_operand1));break;
	case CUBE:printf("%f",cube_root(calculator_operand1));break;
	case SINE:printf("%f",sine(calculator_operand3));break;
	case COS:printf("%f",cosine(calculator_operand3));break;
	case TAN:printf("%f",tangent(calculator_operand3));break;
	case SINEH:printf("%f",sineh(calculator_operand3));break;
	case COSEH:printf("%f",cosineh(calculator_operand3));break;
	case TANH:printf("%f",tangenth(calculator_operand3));break;
	case ISINE:printf("%f",sineinv(calculator_operand3));break;
	case ICOSE:printf("%f",cosineinv(calculator_operand3));break;
	case ITAN:printf("%f",tangentinv(calculator_operand3));break;


        case 19:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
