TestRecording()
{

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

	web_url("index.htm", 
		"URL=http://192.168.1.182:1080/WebTours/index.htm", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://192.168.1.182:1080");

	lr_think_time(14);

	web_submit_data("login.pl", 
		"Action=http://192.168.1.182:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=140142.090643985HcAiffipHiHftDcfVpDfcHcf", ENDITEM, 
		"Name=username", "Value=mislam", ENDITEM, 
		"Name=password", "Value=mislam123", ENDITEM, 
		"Name=login.x", "Value=49", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_url("Search Flights Button", 
		"URL=http://192.168.1.182:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://192.168.1.182:1080");

	lr_think_time(7);

	web_submit_data("reservations.pl", 
		"Action=http://192.168.1.182:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=10/28/2024", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=10/29/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=findFlights.x", "Value=48", ENDITEM, 
		"Name=findFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_data("reservations.pl_2", 
		"Action=http://192.168.1.182:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/reservations.pl", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=040;508;10/28/2024", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=reserveFlights.x", "Value=51", ENDITEM, 
		"Name=reserveFlights.y", "Value=5", ENDITEM, 
		LAST);

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
		"Snapshot=t29.inf", 
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
		"Name=seatType", "Value=Business", ENDITEM, 
		"Name=seatPref", "Value=Window", ENDITEM, 
		"Name=outboundFlight", "Value=040;508;10/28/2024", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=buyFlights.x", "Value=54", ENDITEM, 
		"Name=buyFlights.y", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		LAST);

	/* Logout */

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);

	web_url("SignOff Button", 
		"URL=http://192.168.1.182:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}