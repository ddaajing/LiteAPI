//
//  LATableTextEditor.h
//  LiteAPI
//
//  Created by Softwind Tang on 2016/11/25.
//  Copyright © 2016年 Softwind. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LATableTextEditor : UIViewController

- (instancetype)initWithTip:(NSString *)tip complete:(void (^)(id data))complete;

@end
