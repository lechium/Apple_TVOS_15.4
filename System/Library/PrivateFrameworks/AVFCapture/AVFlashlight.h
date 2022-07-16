//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVFlashlightInternal;

@interface AVFlashlight : NSObject
{
    AVFlashlightInternal *_internal;	// 8 = 0x8
}

+ (_Bool)hasFlashlight;	// IMP=0x0000000000008c5c
+ (void)initialize;	// IMP=0x0000000000008bf2
- (void)_reconnectToServer;	// IMP=0x00000000000098c7
- (void)_handleNotification:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000009657
@property(readonly, nonatomic) float flashlightLevel;
- (_Bool)setFlashlightLevel:(float)arg1 withError:(id *)arg2;	// IMP=0x000000000000935f
- (void)turnPowerOff;	// IMP=0x000000000000925d
- (_Bool)turnPowerOnWithError:(id *)arg1;	// IMP=0x000000000000912d
@property(readonly, nonatomic, getter=isOverheated) _Bool overheated;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (void)dealloc;	// IMP=0x000000000000903a
- (id)init;	// IMP=0x0000000000008e75
- (void)_teardownFlashlight;	// IMP=0x0000000000008ca5
- (void)_setupFlashlight;	// IMP=0x0000000000008c9f

@end
