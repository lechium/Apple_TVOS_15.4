//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface UITouchData : NSObject
{
    struct CGPoint startTouchDownLocation;	// 8 = 0x8
    unsigned long long lastTapCount;	// 24 = 0x18
    double lastTouchUpTimestamp;	// 32 = 0x20
    double lastTouchDownTimestamp;	// 40 = 0x28
    _Bool touchIsValidTap;	// 48 = 0x30
    UITouch *lastTouch;	// 56 = 0x38
}

@end

