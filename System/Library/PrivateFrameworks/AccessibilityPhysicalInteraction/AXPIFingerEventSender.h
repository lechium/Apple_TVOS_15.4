//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXPIFingerEventSender : NSObject
{
    _Bool _shouldAddRealEventFlag;	// 8 = 0x8
    unsigned long long _senderID;	// 16 = 0x10
}

@property(nonatomic) unsigned long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) _Bool shouldAddRealEventFlag; // @synthesize shouldAddRealEventFlag=_shouldAddRealEventFlag;
- (id)_assignFingerIdentifiersToTouches:(id)arg1;	// IMP=0x0000000000001e20
- (void)_sendHandEvent:(unsigned int)arg1 touchesByFingerIdentifier:(id)arg2;	// IMP=0x0000000000001b48
- (void)performCancel;	// IMP=0x0000000000001b3e
- (void)performUpWithTouchesByFingerIdentifier:(id)arg1;	// IMP=0x0000000000001b24
- (void)performUpWithTouches:(id)arg1;	// IMP=0x0000000000001ad8
- (void)performMoveWithTouchesByFingerIdentifier:(id)arg1;	// IMP=0x0000000000001abe
- (void)performMoveWithTouches:(id)arg1;	// IMP=0x0000000000001a72
- (void)performDownWithTouchesByFingerIdentifier:(id)arg1;	// IMP=0x0000000000001a58
- (void)performDownWithTouches:(id)arg1;	// IMP=0x0000000000001a0c

@end

