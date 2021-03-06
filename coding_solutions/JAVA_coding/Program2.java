PROBLEM STATEMENT:
Write down a java program to print even and odd numbers series respectively 
from two threads: t1 and t2 synchronizing on a shared object
Let t1 print message “ping — >” and t2 print message “,—-pong”.
Take as command line arguments, the following inputs to the program:
Sleep Interval for thread t1
Write down a java program to print even and odd numbers series respectively from two
threads: t1 and t2 synchronizing on a shared object

Let t1 print message “ping — >” and t2 print message “,—-pong”.

Take as command line arguments, the following inputs to the program:
Sleep Interval for thread t1
Sleep Interval for thread t2
Message per cycle
No of cycles

SOLUTION:
public class Main extends Thread {
    static StringBuilder object = new StringBuilder("");
    public static void main(String[] args) throws InterruptedException {
        Thread t1 = new Main();
        Thread t2 = new Main();
        t1.setName("\nping");
        t2.setName(" pong");
        t1.start();
        t2.start();
    }	
        public void run() {
            working();
        }
        void working() {
            while (true) {
                synchronized (object) {
                    try {
                        System.out.print(Thread.currentThread().getName());
                        object.notify();
                        object.wait();
                    } 
                    catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        }
}