LoginPage()
{

	web_add_auto_header("Priority", 
		"u=4");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://192.168.1.182:1080");

	lr_think_time(9);

	web_submit_data("login.pl", 
		"Action=http://192.168.1.182:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.182:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=140125.84528149HcAHHcDpVzzzzzzHtDctzpDDQ", ENDITEM, 
		"Name=username", "Value=mislam", ENDITEM, 
		"Name=password", "Value=mislam123", ENDITEM, 
		"Name=login.x", "Value=52", ENDITEM, 
		"Name=login.y", "Value=9", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	return 0;
}
