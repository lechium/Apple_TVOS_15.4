//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHomeManager, HMUser, NSString, NSUUID;

@interface HMIncomingHomeInvitation
{
    HMUser *_inviter;	// 48 = 0x30
    HMHomeManager *_homeManager;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b9527
+ (id)homeInvitationsFromData:(id)arg1 homeManager:(id)arg2;	// IMP=0x00000000000b9308
+ (id)homeInvitationsFromEncodedData:(id)arg1 homeManager:(id)arg2;	// IMP=0x00000000000b906a
- (void).cxx_destruct;	// IMP=0x00000000000b903b
@property(nonatomic) __weak HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) HMUser *inviter; // @synthesize inviter=_inviter;
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000b8f3b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b8f35
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b8dc8
- (void)acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b8a04
- (void)acceptInviteWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b868d
- (void)ignoreInviteWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b8316
- (void)cancelInviteWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b7f9f
@property(readonly, copy, nonatomic) NSUUID *homeUUID;
@property(readonly, copy, nonatomic) NSString *homeName;
- (void)_unconfigure;	// IMP=0x00000000000b7d79
- (void)_unconfigureContext;	// IMP=0x00000000000b7d65
- (void)__configureWithContext:(id)arg1 homeManager:(id)arg2;	// IMP=0x00000000000b7d04
- (id)initWithInvitationData:(id)arg1 homeManager:(id)arg2;	// IMP=0x00000000000b7bb8
- (_Bool)isForPKSharingMessageInvitationWithAppleSharingDict:(id)arg1;	// IMP=0x0000000000269764

@end

