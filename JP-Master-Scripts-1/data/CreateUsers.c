CreateUsers()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("192.168.1.193:8084", 
		"URL=http://192.168.1.193:8084/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("spocs", 
		"URL=https://spocs.getpocket.com/spocs", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pocket_id\":\"{06e2b05e-5751-4f82-8799-39533fd534c9}\",\"version\":2,\"consumer_key\":\"40249-e88c401e1b1f2242d9e441c4\",\"placements\":[{\"name\":\"spocs\",\"ad_types\":[3617],\"zone_ids\":[217758,217995]}]}", 
		LAST);

	/* Click the Store */

	lr_think_time(17);

	web_url("Catalog.action", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Sign In */

	lr_think_time(19);

	web_url("Sign In", 
		"URL=http://192.168.1.193:8084/actions/Account.action;jsessionid=BD8EC138F050D804A7C9D39FD5513450?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Register Now */

	lr_think_time(13);

	web_url("Register Now!", 
		"URL=http://192.168.1.193:8084/actions/Account.action?newAccountForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Account.action;jsessionid=BD8EC138F050D804A7C9D39FD5513450?signonForm=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	/* Enter User Info */

	web_submit_data("Account.action", 
		"Action=http://192.168.1.193:8084/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Account.action?newAccountForm=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=test1", ENDITEM, 
		"Name=password", "Value=test123", ENDITEM, 
		"Name=repeatedPassword", "Value=test123", ENDITEM, 
		"Name=account.firstName", "Value=Samed", ENDITEM, 
		"Name=account.lastName", "Value=Kamal", ENDITEM, 
		"Name=account.email", "Value=samed.kamal@gmail.com", ENDITEM, 
		"Name=account.phone", "Value=7322432211", ENDITEM, 
		"Name=account.address1", "Value=2345 Main ST", ENDITEM, 
		"Name=account.address2", "Value=", ENDITEM, 
		"Name=account.city", "Value=South Amboy", ENDITEM, 
		"Name=account.state", "Value=NJ", ENDITEM, 
		"Name=account.zip", "Value=08872", ENDITEM, 
		"Name=account.country", "Value=USA", ENDITEM, 
		"Name=account.languagePreference", "Value=english", ENDITEM, 
		"Name=account.favouriteCategoryId", "Value=FISH", ENDITEM, 
		"Name=newAccount", "Value=Save Account Information", ENDITEM, 
		"Name=_sourcePage", "Value=fl_MBd9ckuyeMbg9Ko_dRqLiUe3kfpB0QtNKF3HiKYpPKY_TsFh6_m7KUD_g7W6w5Dc9_0ys-X_WVfGBWNYBlyVPQQqTkQApXXjK_6gzIqw=", ENDITEM, 
		"Name=__fp", "Value=BVenBUidr5UZavj05C1Pq0VoQzTAvYW87JRWdFom91BA1abCv9C5-wyPUcFtCMuWV_cnD-oLdxZRRAa9qJezaBT1AIIPz5lJTZfpOeXhWphHCJcm5sfSkDz8L0MDm4xve2cRbjHEAQ0chdk55EEXysgr4oOlv2ALWxX0rVB8KIfVVWd4QtnBUEuHbmUzK1Yj", ENDITEM, 
		LAST);

	return 0;
}