
char buf[1002400];


Action()
{
    char *randompart;
    
    lr_start_transaction("01_WT_HomePage");

    
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/png,image/svg+xml,*/*;q=0.8");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:131.0) Gecko/20100101 Firefox/131.0");

	web_reg_save_param_ex(
		"ParamName=userSession",
		"LB/IC=<input type=\"hidden\" name=\"userSession\" value=\"",
		"RB/IC=\"/>",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/nav.pl*",
		LAST);

	web_url("index.htm", 
		"URL=http://192.168.1.182:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://192.168.1.182:1080");
	
	lr_end_transaction("01_WT_HomePage", LR_AUTO);


	lr_think_time(10);
	
	lr_start_transaction("02_WT_LoginPage");


	web_submit_data("login.pl",
		"Action=http://192.168.1.182:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=body",
		"RecContentType=text/html",
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value=mislam123", ENDITEM,
		"Name=login.x", "Value=45", ENDITEM,
		"Name=login.y", "Value=11", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);
	
	lr_end_transaction("02_WT_LoginPage", LR_AUTO);


	/* Start-FlightBooking */
	
	lr_start_transaction("03_WT_SelectFlight");


	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

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

	web_reg_save_param_ex(
		"ParamName=seatType",
		"LB/IC=name=\"seatType\" value=\"",
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

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"http://192.168.1.182:1080");

	lr_think_time(21);

//	web_reg_save_param_ex(
//		"ParamName=outboundFlight",
//		"LB/IC=name=\"outboundFlight\" value=\"",
//		"RB/IC=\"",
//		SEARCH_FILTERS,
//		"Scope=Body",
//		"RequestUrl=*/reservations.pl*",
//		LAST);
	
	lr_end_transaction("03_WT_SelectFlight", LR_AUTO);

	
	
	
	web_reg_save_param("outboundFlight",
                   "LB=name=\"outboundFlight\" value=\"",
                   "RB=\"",
                   "ord=all",LAST);
	
	
	lr_start_transaction("04_WT_ReserveFlight");


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
		"Name=depart", "Value={depart}", ENDITEM,
		"Name=departDate", "Value=10/28/2024", ENDITEM,
		"Name=arrive", "Value={arrive}", ENDITEM,
		"Name=returnDate", "Value=10/29/2024", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=findFlights.x", "Value=26", ENDITEM,
		"Name=findFlights.y", "Value=14", ENDITEM,
		"Name=.cgifields", "Value=roundtrip", ENDITEM,
		"Name=.cgifields", "Value=seatType", ENDITEM,
		"Name=.cgifields", "Value=seatPref", ENDITEM,
		LAST);

	/* Select Flight Denver to Paris */

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("reservations.pl_2",
		"Action=http://192.168.1.182:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://192.168.1.182:1080/cgi-bin/reservations.pl",
		"Snapshot=t5.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=reutrnFlight", "Value=", ENDITEM,
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=reserveFlights.x", "Value=48", ENDITEM,
		"Name=reserveFlights.y", "Value=7", ENDITEM,
		LAST);

	randompart=lr_paramarr_random("outboundFlight");
	lr_save_string(randompart,"randompart");	
	
	
	
	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://192.168.1.182:1080");

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
		"Name=seatType", "Value={seatType}", ENDITEM,
		"Name=seatPref", "Value={seatPref}", ENDITEM,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=returnFlight", "Value=", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=buyFlights.x", "Value=51", ENDITEM,
		"Name=buyFlights.y", "Value=6", ENDITEM,
		"Name=.cgifields", "Value=saveCC", ENDITEM,
		LAST);
	
	randompart=lr_paramarr_random("outboundFlight");
	lr_save_string(randompart,"randompart");
	

	web_add_header("Upgrade-Insecure-Requests",  "1");

	
	
	lr_end_transaction("04_WT_ReserveFlight", LR_AUTO);
	
	
	
    lr_think_time(10);
    
    lr_start_transaction("05_WT_Logout");


	web_url("welcome.pl", 
		"URL=http://192.168.1.182:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

    
    
    lr_end_transaction("05_WT_Logout", LR_AUTO);

	return 0;
}