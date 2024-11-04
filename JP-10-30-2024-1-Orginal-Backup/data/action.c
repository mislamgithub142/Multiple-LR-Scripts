Action()
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
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Enter the Store */

	lr_think_time(34);

	web_url("Enter the Store", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Sign In */

	web_url("Sign In", 
		"URL=http://192.168.1.193:8084/actions/Account.action;jsessionid=E36A3B0D9EBDE976CB5CE9B36C497F73?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	/* Enter Login Info */

	web_submit_data("Account.action", 
		"Action=http://192.168.1.193:8084/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Account.action;jsessionid=E36A3B0D9EBDE976CB5CE9B36C497F73?signonForm=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=mislam", ENDITEM, 
		"Name=password", "Value=mislam123", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=y3U-fOP4LIPvJqZNndCVP1QFYVFDRDxV4th2zmViITxAZEczLTzZU7Qm7Noxk7YheJDj1uPbEzFQmyLkeA2sVJZ2jobJy1BeutfB-ZfLzQY=", ENDITEM, 
		"Name=__fp", "Value=lE457fuvM3CK6MaNHvldN5WxoMGn2_4Vq4vZ9pFdZRMEdOKYC98Yzka12HKdadLW", ENDITEM, 
		LAST);

	/* Select Product Fish */

	lr_think_time(26);

	web_url("sm_fish.gif", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	/* Select Product Id Fi-sw-02 */

	lr_think_time(32);

	web_url("FI-SW-02", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action?viewProduct=&productId=FI-SW-02", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Add to Cart */

	lr_think_time(14);

	web_url("Add to Cart", 
		"URL=http://192.168.1.193:8084/actions/Cart.action?addItemToCart=&workingItemId=EST-3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action?viewProduct=&productId=FI-SW-02", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Proceed to CheckOut */

	lr_think_time(22);

	web_url("Proceed to Checkout", 
		"URL=http://192.168.1.193:8084/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Cart.action?addItemToCart=&workingItemId=EST-3", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Continue with Payment */

	lr_think_time(29);

	web_submit_data("Order.action", 
		"Action=http://192.168.1.193:8084/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action?newOrderForm=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=Mohammed", ENDITEM, 
		"Name=order.billToLastName", "Value=Islam", ENDITEM, 
		"Name=order.billAddress1", "Value=225 Tyler ST", ENDITEM, 
		"Name=order.billAddress2", "Value=", ENDITEM, 
		"Name=order.billCity", "Value=SOUTH AMBOY", ENDITEM, 
		"Name=order.billState", "Value=NJ", ENDITEM, 
		"Name=order.billZip", "Value=08879", ENDITEM, 
		"Name=order.billCountry", "Value=United States", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		"Name=_sourcePage", "Value=iaxH7EMB8C8OivrWh9isGCIiXUqu67WsSCMSxZLZ_9F-olidEM9FHT4ltcx4Ebm1XWSr7HXzYc0kNGgyoS6-hxgTclspjJsKy3miurV2ShY=", ENDITEM, 
		"Name=__fp", "Value=c5AV2-iZWfzsH0XUnJ0vFECHjTVwvFzfHOW9oHiFSh1Orn_7EL1-HQF0Tsw206yLR33d4aebk3qe79lzk5ytMVvrxWYHYZCpT2lCm9746SKu7qi9FvqLLg==", ENDITEM, 
		LAST);

	/* Click to Confirm */

	lr_think_time(16);

	web_url("Confirm", 
		"URL=http://192.168.1.193:8084/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	/* Click to SignOut */

	web_url("Sign Out", 
		"URL=http://192.168.1.193:8084/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}