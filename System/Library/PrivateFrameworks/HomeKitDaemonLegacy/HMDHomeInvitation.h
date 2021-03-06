//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDHome, HMFTimer, HMHomeInvitationData, NSArray, NSDate, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding>
{
    long long _invitationState;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    HMHomeInvitationData *_invitationData;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_clientQueue;	// 32 = 0x20
    CDUnknownBlockType _resolutionHandler;	// 40 = 0x28
    CDUnknownBlockType _expirationHandler;	// 48 = 0x30
    HMFTimer *_timer;	// 56 = 0x38
    NSArray *_operations;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008d127
- (void).cxx_destruct;	// IMP=0x000000000008cf64
@property(retain, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property(copy, nonatomic) CDUnknownBlockType resolutionHandler; // @synthesize resolutionHandler=_resolutionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) HMHomeInvitationData *invitationData; // @synthesize invitationData=_invitationData;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) long long invitationState; // @synthesize invitationState=_invitationState;
- (id)describeWithFormat;	// IMP=0x000000000008ccde
- (void)_resolve:(_Bool)arg1;	// IMP=0x000000000008cadb
- (void)_clearTimer;	// IMP=0x000000000008ca28
- (void)_configureTimer;	// IMP=0x000000000008c8dc
- (void)expire;	// IMP=0x000000000008c6ea
- (void)decline;	// IMP=0x000000000008c6d6
- (void)accept;	// IMP=0x000000000008c6bf
- (void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2;	// IMP=0x000000000008c59a
- (void)updateInvitationState:(long long)arg1;	// IMP=0x000000000008c54e
- (void)notifyStateChangedForMessage:(id)arg1;	// IMP=0x000000000008c548
@property(readonly, nonatomic, getter=isDeclined) _Bool declined;
@property(readonly, nonatomic, getter=isAccepted) _Bool accepted;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSDate *startDate;
@property(readonly, copy, nonatomic) NSUUID *identifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000008c2e2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008c234
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;	// IMP=0x000000000008c18c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008c178
- (_Bool)refreshDisplayName;	// IMP=0x000000000008c170
- (id)initWithInvitationData:(id)arg1 forHome:(id)arg2;	// IMP=0x000000000008c0be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

