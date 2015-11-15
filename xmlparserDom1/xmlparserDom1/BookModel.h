//
//  BookModel.h
//  xmlparserDom1
//
//  Created by qingyun on 15/11/14.
//  Copyright (c) 2015年 qingyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BookModel : NSObject
@property (nonatomic,strong)NSString *category;
@property (nonatomic,strong)NSString *lang;
@property (nonatomic,strong)NSString *title;
@property (nonatomic,strong)NSString *author;
@property (nonatomic,strong)NSString *price;
@property (nonatomic,strong)NSString *year;
@end
