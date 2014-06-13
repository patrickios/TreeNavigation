//
//  ViewController.h
//  TreeNavigation
//
//  Created by Patrick on 14-6-13.
//  Copyright (c) 2014年 Patrick. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CitiesViewController.h"

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSDictionary *dictData;
@property (strong, nonatomic) NSArray *listData;

@end
