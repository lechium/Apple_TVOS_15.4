//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDDevice, NSString;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject <HMFLogging>
{
    NSString *_sessionID;	// 8 = 0x8
    HMDDevice *_expectedInviter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000004ae79a
- (void).cxx_destruct;	// IMP=0x00000000004ae769
@property(readonly) HMDDevice *expectedInviter; // @synthesize expectedInviter=_expectedInviter;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)logIdentifier;	// IMP=0x00000000004ae6ed
- (_Bool)canAcceptInvitationFromDeviceWithHandle:(id)arg1 forSessionWithIdentifier:(id)arg2;	// IMP=0x00000000004ae348
- (id)initWithSessionID:(id)arg1 expectedInviter:(id)arg2;	// IMP=0x00000000004ae27f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

