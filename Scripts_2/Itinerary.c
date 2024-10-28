Itinerary()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(65);

	web_url("Itinerary Button", 
		"URL=http://192.168.1.182:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://192.168.1.182:1080");

	lr_think_time(23);

	web_submit_data("itinerary.pl", 
		"Action=http://192.168.1.182:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=3703418572-7803-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-15496-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-23188-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-30880-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-38573-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-46265-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-53957-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-61649-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-69342-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-77034-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-84726-MI", ENDITEM, 
		"Name=flightID", "Value=3703418572-92419-MI", ENDITEM, 
		"Name=flightID", "Value=370341880-10059-MI", ENDITEM, 
		"Name=14", "Value=on", ENDITEM, 
		"Name=flightID", "Value=370334097-10818-MI", ENDITEM, 
		"Name=removeFlights.x", "Value=46", ENDITEM, 
		"Name=removeFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=14", ENDITEM, 
		"Name=.cgifields", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=13", ENDITEM, 
		"Name=.cgifields", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);

	return 0;
}
