Action3()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("log", 
		"URL=https://mail.yahoo.com/d/log?appid=mail_app", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yahoo.com/desktop_sw.js", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"meta\":{\"platform\":\"browser\",\"app\":\"mail_app\",\"env\":\"production\",\"colo\":\"bf1\",\"farm\":\"4262\",\"shardId\":\"165167__axLoIDde2RCSob4FSYPWQ\",\"yid\":\"nazrul.islam142\",\"locale\":\"en-US\",\"region\":\"us\",\"bldVer\":\"1.0.13468\",\"buildNumber\":\"1.0.13468\",\"partnr\":\"\",\"cbe\":\"\",\"prdct\":\"norrin\",\"adFree\":false,\"paidUserType\":\"free\",\"conv\":false,\"buckets\":\"rocket_GA_desk_test-3-v1::ymailnodintaic01::test-caas-guid-bucketing-dev::ymailnorrinppt01:"
		":Wayfair_TOM_Commerce_Desktop_Broad::MailPPVampTestDesktop::mbr-universal-profile::mbr-up-pfs-control\",\"userSegId\":\"2\",\"appName\":\"mail_app\",\"configTimestamp\":-1,\"os\":\"Windows 10\",\"browser\":\"Chrome 130.0.0.0\",\"partner\":\"\",\"rid\":\"7hoon3hji21qi\"},\"events\":[{\"type\":\"feature\",\"featureEvent\":\"success\",\"featureName\":\"push_notification_received\",\"component\":\"norrin/service_worker\",\"message\":\"feature_success\",\"data\":{\"messageId\":\""
		"AKI90SYac9WtZyEi6wHJCKuZ2-0\"}}]}", 
		LAST);

	web_custom_request("log_2", 
		"URL=https://mail.yahoo.com/d/log?appid=mail_app", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yahoo.com/desktop_sw.js", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"meta\":{\"platform\":\"browser\",\"app\":\"mail_app\",\"env\":\"production\",\"colo\":\"bf1\",\"farm\":\"4262\",\"shardId\":\"165167__axLoIDde2RCSob4FSYPWQ\",\"yid\":\"nazrul.islam142\",\"locale\":\"en-US\",\"region\":\"us\",\"bldVer\":\"1.0.13468\",\"buildNumber\":\"1.0.13468\",\"partnr\":\"\",\"cbe\":\"\",\"prdct\":\"norrin\",\"adFree\":false,\"paidUserType\":\"free\",\"conv\":false,\"buckets\":\"rocket_GA_desk_test-3-v1::ymailnodintaic01::test-caas-guid-bucketing-dev::ymailnorrinppt01:"
		":Wayfair_TOM_Commerce_Desktop_Broad::MailPPVampTestDesktop::mbr-universal-profile::mbr-up-pfs-control\",\"userSegId\":\"2\",\"appName\":\"mail_app\",\"configTimestamp\":-1,\"os\":\"Windows 10\",\"browser\":\"Chrome 130.0.0.0\",\"partner\":\"\",\"rid\":\"7hoon3hji21qi\"},\"events\":[{\"type\":\"feature\",\"featureEvent\":\"success\",\"featureName\":\"setup\",\"component\":\"norrin/service_worker\",\"message\":\"feature_success\",\"data\":{}}]}", 
		LAST);

	return 0;
}
