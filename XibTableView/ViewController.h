//
//  ViewController.h
//  XibTableView
//
//  Created by Akash soni on 6/17/18.
//  Copyright © 2018 Akash soni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate>,table

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end

