//
//  JDDIDIIndexViewController.h
//  JDDIDIDemo
//
//  Created by 王金东 on 2016/7/24.
//  Copyright © 2016年 王金东. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger) {
    JDDirectionNone,
    JDDirectionLeft,
    JDDirectionRight
}JDDirection;

@interface JDDIDIIndexViewController : UIViewController

- (void)viewWillShow:(JDDirection)direction;

@end
