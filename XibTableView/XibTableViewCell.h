//
//  XibTableViewCell.h
//  XibTableView
//
//  Created by Akash soni on 6/17/18.
//  Copyright © 2018 Akash soni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XibTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *lbl1;
@property (weak, nonatomic) IBOutlet UILabel *lbl2;
@property (weak, nonatomic) IBOutlet UILabel *lbl3;

- (IBAction)buttonTapped:(UIButton *)sender;

@end
