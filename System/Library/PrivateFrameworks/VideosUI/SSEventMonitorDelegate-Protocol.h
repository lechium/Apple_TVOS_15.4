//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSDictionary, NSString, SSEventMonitor;

@protocol SSEventMonitorDelegate <NSObject>

@optional
- (void)eventMonitor:(SSEventMonitor *)arg1 receivedEventWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

