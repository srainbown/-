//
//  SeriesTableView.h
//  搜索页面
//
//  Created by 李自杨 on 2017/5/10.
//  Copyright © 2017年 View. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SeriesTableView : UITableView

-(instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style;

-(void)addDataArray:(NSMutableArray *)array;

@end
