/*******************************************************************8
*
* Programmer: Joel Godinez
*
* Course: CSCI 4354
*
* Date: 19 Mar 2019
*
* Assignment: Homework 7 (Server)
*
* Environment: Linux (Ubuntu) with VIM
*
* Files Included: P3_Ser.c
*
* Purpose - Create a server process that acts as CPU scheduler for multiple clients.   
*
* Inputs - Each client will send 1. CPU burst 2. arrival time 3. private FIFO information. 
*
* Outputs – The throughput, CPU usage for the batch, Average turnaround time, average time in ready state. 
*
* Constraints - Use a First Come First Serve CPU scheduling algorithm
*
* Algorithm – 
*                    Set start time for server is time = 0
*                    Increment time for each time unit that expires 
*                    If a new client arrived
*                        Print arrival notice with clock time (no time delay for CPU burst duration)
*	                   For client arrival time
*	                       Enqueue a PCB to the Ready Queue
*	                   If CPU burst done
*	                       The client at the Head of the Ready Queue is selected to enter the RUN.
*                    If all clients are done
*                       calculate throughput, 
*                       Calculate average Turnaround time, 
*                       Calculate average wait time (time in Ready) 
*                       Calculate CPU utilization for this batch of clients
* 
*  Estimates  		            Actuals
*   Design: 1.5 hours		      2 hours 
*   Implementation: 8 hour	 10 hours
*   Testing: 2 hours		      3 hours
****************************************************************************
