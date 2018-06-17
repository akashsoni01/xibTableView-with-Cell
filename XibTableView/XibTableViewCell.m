//
//  XibTableViewCell.m
//  XibTableView
//
//  Created by Akash soni on 6/17/18.
//  Copyright © 2018 Akash soni. All rights reserved.
//

#import "XibTableViewCell.h"

@implementation XibTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    
    // Initialization code
    
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
    
}

- (IBAction)buttonTapped:(UIButton *)sender {
    _lbl1.text = @"lbl working";
    _lbl2.text = @"lbl working";
    _lbl3.text = @"lbl working";
}
@end
