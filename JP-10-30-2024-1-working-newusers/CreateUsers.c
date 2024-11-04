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

	web_reg_save_param_regexp(
		"ParamName=jsessionid_1",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/Catalog.action*",
		LAST);

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
		"URL=http://192.168.1.193:8084/actions/Account.action;jsessionid={jsessionid_1}?signonForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://192.168.1.193:8084/actions/Catalog.action",
		"Snapshot=t14.inf",
		"Mode=HTML",
		LAST);

	/* Click Register Now */

	lr_think_time(13);

	web_reg_save_param_attrib(
		"ParamName=_sourcePage_2",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_save_param_attrib(
		"ParamName=__fp_2",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("Register Now!",
		"URL=http://192.168.1.193:8084/actions/Account.action?newAccountForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://192.168.1.193:8084/actions/Account.action;jsessionid={jsessionid_1}?signonForm=",
		"Snapshot=t15.inf",
		"Mode=HTML",
		LAST);

	/* Enter User Info */

	web_submit_data("Account.action",
		"Action=http://192.168.1.193:8084/actions/Account.action",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://192.168.1.193:8084/actions/Account.action?newAccountForm=",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value={createusers}", ENDITEM,
		"Name=password", "Value=test123", ENDITEM,
		"Name=repeatedPassword", "Value=test123", ENDITEM,
		"Name=account.firstName", "Value=Mohammed{fourdigits}", ENDITEM,
		"Name=account.lastName", "Value=Islam{fourdigits}", ENDITEM,
		"Name=account.email", "Value={emailadd}", ENDITEM,
		"Name=account.phone", "Value=732243{fourdigits}", ENDITEM,
		"Name=account.address1", "Value={fourdigits} Main ST.", ENDITEM,
		"Name=account.address2", "Value=", ENDITEM,
		"Name=account.city", "Value=South Amboy", ENDITEM,
		"Name=account.state", "Value=NJ", ENDITEM,
		"Name=account.zip", "Value=0{fourdigits}", ENDITEM,
		"Name=account.country", "Value=USA", ENDITEM,
		"Name=account.languagePreference", "Value=english", ENDITEM,
		"Name=account.favouriteCategoryId", "Value=FISH", ENDITEM,
		"Name=newAccount", "Value=Save Account Information", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage_2}", ENDITEM,
		"Name=__fp", "Value={__fp_2}", ENDITEM,
		LAST);

	return 0;
}