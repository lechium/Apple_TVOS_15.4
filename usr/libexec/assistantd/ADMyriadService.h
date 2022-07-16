//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface ADMyriadService : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSDate *_lastTimeWon;	// 16 = 0x10
    NSDate *_lastTimeStereoPartnerWon;	// 24 = 0x18
    NSString *_stereoPartnerIdentifier;	// 32 = 0x20
}

+ (id)sharedService;	// IMP=0x00400000002024e0
- (void).cxx_destruct;	// IMP=0x00200000002031d2
- (void)_handleLastWinRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000020302e
- (void)_handleRequest:(id)arg1 fromDeviceWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000202e0b
- (void)_handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000202bfb
- (void)handleMessage:(id)arg1 messageType:(id)arg2 fromDeviceWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000202abc
- (void)_syncLastWinWithStereoPartner;	// IMP=0x0010000000202ab6
- (void)_setLastTimeStereoPartnerWon:(id)arg1;	// IMP=0x00100000002029a2
- (void)_setStereoPartnerIdentifier:(id)arg1;	// IMP=0x0010000000202877
- (void)lastMyriadWinForStereoPartner:(CDUnknownBlockType)arg1;	// IMP=0x0010000000202787
- (void)_setLastMyriadWin:(id)arg1;	// IMP=0x0010000000202723
- (void)setMyriadDecisionResult:(_Bool)arg1;	// IMP=0x00100000002025ee
- (id)init;	// IMP=0x0010000000202565

@end
