#include "hedear.h"                    
static stack	*last_node(stack *s_b)           
{                                         
                                          
	if (!s_b)                            
		return (NULL);                    
	while (s_b->next != NULL)            
		s_b = s_b->next;                
	return (s_b);                        
}                                         
                                          
static stack	*llast_node(stack *s_b)          
{                                         
                                          
   stack *last;                           
   last = last_node(s_b);                
	if (!s_b)                            
		return (NULL);                    
	while (s_b->next != last)            
		s_b = s_b->next;                
	return (s_b);                        
}                                         
                                          
void rrb(stack **s_b)                     
{                                         
                                          
   if(!s_b || !(*s_b) || !(*s_b)->next)
       return ;                           
   stack *last1;                          
   stack *last2;                          
   last1 = last_node(*s_b);              
   last2 = llast_node(*s_b);             
   last1 -> next = (*s_b);               
   (*s_b) = last1;                       
   last2 -> next = NULL;                                                    
}      