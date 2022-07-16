//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (NSObject_AVShared)
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000028b0
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000000280d
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x0000000000002792
- (_Bool)okToNotifyFromThisThread;	// IMP=0x0000000000002782
- (void)disallowSafePerformSelector;	// IMP=0x000000000000274a
- (void)allowSafePerformSelector;	// IMP=0x0000000000002712
- (void)postNotificationWithDescription:(id)arg1;	// IMP=0x0000000000002678
@end
