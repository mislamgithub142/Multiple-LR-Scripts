FindFlight()
{
   char *randompart;
    char *randomarrive;
    char *randomflights;
    char *randomsp;
    char *randomst;
    
    web_set_max_html_param_len("10024");
    web_cache_cleanup();
    web_cleanup_cookies();

    web_set_sockets_option("SSL_VERSION", "AUTO");
    
   
    
	


   

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
    
    
    <option selected="selected" value="Denver">Denver</option> it is by default
   Using only following Options
    <option value="Frankfurt">Frankfurt</option>
    <option value="London">London</option>
    <option value="Los Angeles">Los Angeles</option>
    <option value="Paris">Paris</option>
    <option value="Portland">Portland</option>
    <option value="San Francisco">San Francisco</option>
    <option value="Seattle">Seattle</option>
    <option value="Sydney">Sydney</option>
    <option value="Zurich">Zurich</option>


  web_reg_save_param("C_depart",
                   "LB=\">",
                   "rb=</option>",
                   "ord=all",LAST);
                   
  web_reg_save_param("C_arrive",
                   "LB=\">",
                   "rb=</option>",
                   "ord=all",LAST);
                   
                   
              
                  
                
                   
                   
 web_reg_save_param("seatPref",
                   "LB=name=\"seatPref\" value=\"",
                   "RB=\" />",
                   "ord=all",LAST);
                   
 web_reg_save_param("seatType",
                   "LB=name=\"seatType\" value=\"",
                   "RB=\" />",
                   "ord=all",LAST);
                   

                   
                   
  	web_reg_save_param_ex(
		"ParamName=depart",
		"LB/IC=\">",
		"RB/IC=</option>",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/reservations.pl*",
		LAST);

	web_reg_save_param_ex(
		"ParamName=arrive",
		"LB/IC=\">",
		"RB/IC=</option>",
		"Ordinal=5",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/reservations.pl*",
		LAST);

	web_reg_save_param_ex(
		"ParamName=seatPref",
		"LB/IC=name=\"seatPref\" value=\"",
		"RB/IC=\" />",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/reservations.pl*",
		LAST);

	web_url("Search Flights Button", 
		"URL=http://192.168.1.182:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);
		
		
		

	/* Select D-City: Denver
	   Arrival City:London */
	
	

	web_add_auto_header("Origin", 
		"http://192.168.1.182:1080");

	lr_think_time(10);
	
	
	
	
//	name="seatPref" value="Aisle" />Aisle</label>
//	name="seatType" value="First" />
//	<input type="radio" name="seatType" value="Business" />Business</label>
	
	//name="outboundFlight" value="020;635;10/26/2024"
	
	  web_reg_save_param("C_outboundFlight",
                   "LB=name=\"outboundFlight\" value=\"",
                  "RB=\"",
                  "ord=all",LAST);
	
	
	
	

	web_submit_data("reservations.pl",
		"Action=http://192.168.1.182:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://192.168.1.182:1080/cgi-bin/reservations.pl?page=welcome",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=depart", "Value={randompart}", ENDITEM,
		"Name=departDate", "Value={currentdate}", ENDITEM,
		"Name=arrive", "Value={randomarrive}", ENDITEM,
		"Name=returnDate", "Value={futuredate}", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=seatType", "Value=First", ENDITEM,
		"Name=findFlights.x", "Value=38", ENDITEM,
		"Name=findFlights.y", "Value=7", ENDITEM,
		"Name=.cgifields", "Value=roundtrip", ENDITEM,
		"Name=.cgifields", "Value=seatType", ENDITEM,
		"Name=.cgifields", "Value=seatPref", ENDITEM,
		LAST);
	
	randompart=lr_paramarr_random("C_depart");
	lr_save_string(randompart,"randompart");   //Save string to parameter
	
	//lr_output_message("Value is %s",lr_eval_string("{randompart}"));
	
	randomarrive=lr_paramarr_random("C_arrive");
	lr_save_string(randomarrive,"randomarrive");   //Save string to parameter
	
//	If randompart and randomarrive same City pick another arrivale City
	     if(strcmp(randompart,randomarrive)==0);
         {
          randomarrive=lr_paramarr_random("C_arrive");
	      lr_save_string(randomarrive,"randomarrive");
	                 
           }
	     //seatPref
     randomsp=lr_paramarr_random("seatPref");
	  lr_save_string(randomsp,"randomspe");
	  
	  
	  //seatType
	  randomst=lr_paramarr_random("seatType");
	  lr_save_string(randomst,"randomst");
	
	
	lr_think_time(10);
	
		
	
	


	web_submit_data("reservations.pl_2", 
		"Action=http://192.168.1.182:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/reservations.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA,
		"Name=outboundFlight", "Value={randomflights}", ENDITEM,
		//"Name=outboundFlight", "Value=020;635;10/26/2024", ENDITEM,
		
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value={randomst}", ENDITEM, 
		"Name=seatPref", "Value={randomsp}", ENDITEM, 
		"Name=reserveFlights.x", "Value=51", ENDITEM, 
		"Name=reserveFlights.y", "Value=5", ENDITEM, 
		LAST);
	
	randomflights=lr_paramarr_random("C_outboundFlight");
	lr_save_string(randomflights,"randomflights");
	

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://192.168.1.182:1080");

	lr_think_time(5);
	
	

	web_submit_data("reservations.pl_3", 
		"Action=http://192.168.1.182:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/reservations.pl", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Mohammed", ENDITEM, 
		"Name=lastName", "Value=Islam", ENDITEM, 
		"Name=address1", "Value=225 Tyler ST", ENDITEM, 
		"Name=address2", "Value=South Amboy NJ 08879", ENDITEM, 
		"Name=pass1", "Value=Mohammed Islam", ENDITEM, 
		"Name=creditCard", "Value=9999999999999999", ENDITEM, 
		"Name=expDate", "Value=7/34", ENDITEM, 
		"Name=saveCC", "Value=on", ENDITEM, 
		"Name=oldCCOption", "Value=on", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value={randomst}", ENDITEM, 
		"Name=seatPref", "Value={randomsp}", ENDITEM, 
		"Name=outboundFlight", "Value={randomflights}", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=28", ENDITEM, 
		"Name=buyFlights.y", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);
	
	  

    randomflights=lr_paramarr_random("C_outboundFlight");
	  lr_save_string(randomflights,"randomflights");
 
	return 0;
}
