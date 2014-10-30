//
//  DBNewServerViewController.h
//  Created by Stian Aurdal.

#import <UIKit/UIKit.h>
#import "MBProgressHUD.h"
@class LEOServerListViewController;
@class LEOServerInfo;

@interface DBNewServerViewController : UIViewController<UITextFieldDelegate,MBProgressHUDDelegate>
-(void)setServerListVCInstance:(LEOServerListViewController *)one;
-(id)initWithServerInfo:(LEOServerInfo *)info atIndex:(NSInteger)index;
@end