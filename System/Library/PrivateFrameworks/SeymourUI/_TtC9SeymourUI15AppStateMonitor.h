//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC9SeymourUI15AppStateMonitor : _TtCs12_SwiftObject
{
    MISSING_TYPE *monitor;	// 16 = 0x10
    MISSING_TYPE *eventHub;	// 24 = 0x18
}

- (void)publishAppWillTerminate;	// IMP=0x00000000001689a0
- (void)publishAppDidEnterBackground;	// IMP=0x0000000000168960
- (void)publishAppWillResignActive;	// IMP=0x0000000000168920
- (void)publishAppWillEnterForeground;	// IMP=0x00000000001688e0
- (void)publishAppDidBecomeActive;	// IMP=0x00000000001688a0

@end

