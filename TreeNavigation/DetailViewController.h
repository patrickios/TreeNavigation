//
//  DetailViewController.h
//  TreeNavigation
//
//  Created by Patrick on 14-6-13.
//  Copyright (c) 2014年 Patrick. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController<UIWebViewDelegate>
@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) NSString *url;

@end
