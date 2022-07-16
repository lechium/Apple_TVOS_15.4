//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UIGestureDelaying-Protocol.h>

@class NSString, UIPress, UIPressesEvent;

__attribute__((visibility("hidden")))
@interface UIGestureDelayedPress : NSObject <NSCopying, _UIGestureDelaying>
{
    long long _delayCount;	// 8 = 0x8
    _Bool _cloneForSecondDelivery;	// 16 = 0x10
    UIPress *_press;	// 24 = 0x18
    UIPress *_stateWhenDelayed;	// 32 = 0x20
    UIPress *_stateWhenDelivered;	// 40 = 0x28
    UIPressesEvent *_event;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006c530e
@property(readonly, copy) NSString *description;
- (double)timestampForDelivery;	// IMP=0x00000000006c51d0
- (long long)phaseForDelivery;	// IMP=0x00000000006c51b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006c50ce
- (id)init;	// IMP=0x00000000006c5078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

