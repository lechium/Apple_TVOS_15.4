//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMActivityManager : NSObject
{
    id _internal;	// 8 = 0x8
}

- (long long)simulateMotionStateYouthWithState:(long long)arg1;	// IMP=0x00000000001450e1
- (long long)simulateMotionState:(_Bool)arg1 withState:(long long)arg2;	// IMP=0x0000000000144ec5
- (long long)overrideOscarSideband:(_Bool)arg1 withState:(long long)arg2;	// IMP=0x0000000000144ba7
@property(readonly, nonatomic, getter=isActivityAvailable) _Bool activityAvailable;
@property(copy) CDUnknownBlockType activityHandler;
- (void)dealloc;	// IMP=0x00000000001449df
- (id)init;	// IMP=0x0000000000144993

@end

