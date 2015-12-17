//
//  SendMesgViewController.h
//  weixinDemo
//
//  Created by leadingwinner on 12-10-20.
//  Copyright (c) 2012年 leadingwinner. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXApiObject.h"
#import "WXApi.h"

@interface SendMesgViewController : UIViewController<UIActionSheetDelegate,WXApiDelegate,UIApplicationDelegate>
{
    enum WXScene _scene;
}
- (IBAction)OnClick;

@end
