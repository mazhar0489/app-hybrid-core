//
//  HybridApi.h
//  Hybrid-v2
//
//  Created by 双虎 on 16/6/2.
//  Copyright © 2016年 Cmptech. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WebViewJavascriptBridgeBase.h"

@interface HybridApi : NSObject

- (WVJBHandler) getHandler;

@property (nonatomic, strong) WVJBHandler handler;

@property (nonatomic, strong) UIViewController *hybridUi;

@end
