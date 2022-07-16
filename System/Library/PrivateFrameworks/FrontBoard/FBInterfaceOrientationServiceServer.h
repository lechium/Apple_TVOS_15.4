//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSServiceFacility.h>

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FBInterfaceOrientationServiceServer : FBSServiceFacility
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_interestedClients;	// 16 = 0x10
    long long _interfaceOrientation;	// 24 = 0x18
    unsigned long long _sequenceNumber;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000007638
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;	// IMP=0x00000000000075b9
- (void)noteClientDidDisconnect:(id)arg1;	// IMP=0x000000000000759f
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;	// IMP=0x0000000000007500
- (id)_prerequisiteMilestones;	// IMP=0x00000000000074dd
- (void)_queue_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2;	// IMP=0x0000000000007342
- (void)_queue_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2;	// IMP=0x00000000000072a3
- (void)_queue_updateInterest:(unsigned int)arg1 forClient:(id)arg2 withMessage:(id)arg3;	// IMP=0x0000000000007133
- (void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;	// IMP=0x0000000000006ba9
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000006b97
- (id)init;	// IMP=0x0000000000006a57

@end

