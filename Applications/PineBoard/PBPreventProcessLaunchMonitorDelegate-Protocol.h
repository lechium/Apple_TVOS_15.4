//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, PBPreventProcessLaunchMonitor;

@protocol PBPreventProcessLaunchMonitorDelegate <NSObject>
- (void)preventProcessLaunchMonitor:(PBPreventProcessLaunchMonitor *)arg1 updatedBundleIDsAdding:(NSSet *)arg2 removing:(NSSet *)arg3;
@end

