#include<yolang.yo>

main()
{
    YO();
    // -> "SYSTEM: YO\n"

    YO("hello world");
    // -> "HELLOWORLD: YO\n"
    // because YOs are contextual

    YO("Bill");
    // -> "BILL: YO\n"

    int i;
    
    YO!() (i = 0; i < 100; i++){

    }

    YO...YO() {
    	// block executed 10 times 
    }

    YO? (true == false){

    } YO?? (true == true){

    } NOYO {

    }

    yo bill = "BILL4MAZING"

    YO(yo);
    -> "BILL4Mazing: YO\n"

    int my_function(){
    	int i = 5555;
    	yo: 5;
    }


}
