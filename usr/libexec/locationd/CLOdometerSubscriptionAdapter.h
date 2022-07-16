//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLOdometerSubscriptionAdapter : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_subscription;	// 16 = 0x10
}

@property(nonatomic) void *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x001000000073bc1d
- (void)onCyclingDistanceUpdate:(CDUnknownBlockType)arg1;	// IMP=0x001000000073b65d
- (id)initWithOdometerSubscription:(void *)arg1;	// IMP=0x001000000073b620

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

