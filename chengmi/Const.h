//
//  Const.h
//  chengmi
//
//  Created by qianfeng on 15/1/20.
//  Copyright (c) 2015年 yxx. All rights reserved.
//

#ifndef chengmi_Const_h
#define chengmi_Const_h
//主页
#define API_HOME_LIST @"http://api.chengmi.com/shindex?passdate=%@&curlng=121.5136964503357&curlat=31.27251615015917"
#define API_HOME_DETAIL @"http://api.chengmi.com/shsectionv17?sectionid=%@&showusercnt=6"
//发现
#define API_FOUND_LIST @"http://api.chengmi.com/v1.9/discover?theme_ids=1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,20,42,39,40,32,28,30,29,26,18,35,27,23,25,43&city=%@"
#define API_FOUND_DETAIL @"http://api.chengmi.com/v1.9/theme_section_list?theme_id=39&curlng=121.5136964503357&curlat=31.27251615015917&uid=-1&city=%@&curpage=%@"
//生活家
#define API_LIFE_LIST @"http://api.chengmi.com/v1.9.2/expuserlist?city=%@"


#define API_LOCATION_SHANGHAI @"shanghai"
#define API_LOCATION_BEIJING @"beijing"

#define API_Version @"1.9.2"
#endif
