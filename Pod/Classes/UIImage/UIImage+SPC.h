//
//  UIImage+SPC.h
//  Pods
//
//  Created by huanglexian on 16/4/4.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (SPC)

/**
 *  根据 color 生成 image
 *
 *  @param color 颜色
 *
 *  @return 纯色图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

@end
