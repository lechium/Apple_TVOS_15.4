//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>
#import <MediaPlaybackCore/NSMutableCopying-Protocol.h>
#import <MediaPlaybackCore/NSSecureCoding-Protocol.h>

@class ICUserIdentity, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, NSString;

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_clientIdentifier;	// 8 = 0x8
    NSString *_clientVersion;	// 16 = 0x10
    MPCPlaybackDelegationProperties *_delegationProperties;	// 24 = 0x18
    NSString *_requestingBundleIdentifier;	// 32 = 0x20
    NSString *_requestingBundleVersion;	// 40 = 0x28
    MPCPrivateListeningStateSource *_privateListeningStateSource;	// 48 = 0x30
    ICUserIdentity *_userIdentity;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019301a
+ (id)requestEnvironmentWithUserIdentity:(id)arg1;	// IMP=0x0000000000192f52
+ (id)activeAccountRequestEnvironment;	// IMP=0x0000000000192eec
- (void).cxx_destruct;	// IMP=0x0000000000192c7f
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, copy, nonatomic) NSString *requestingBundleVersion; // @synthesize requestingBundleVersion=_requestingBundleVersion;
@property(readonly, copy, nonatomic) NSString *requestingBundleIdentifier; // @synthesize requestingBundleIdentifier=_requestingBundleIdentifier;
@property(readonly, copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource; // @synthesize privateListeningStateSource=_privateListeningStateSource;
@property(readonly, copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties; // @synthesize delegationProperties=_delegationProperties;
@property(readonly, copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;	// IMP=0x0000000000192b5a
- (id)rectifiedPlaybackRequestEnvironmentForAccountManager:(id)arg1 reasons:(id *)arg2;	// IMP=0x00000000001924bd
- (id)_createMusicKitRequestContext;	// IMP=0x000000000019235c
- (id)_createStoreRequestContext;	// IMP=0x00000000001921f9
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001921cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001921c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001920ef
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000191ea6
- (id)description;	// IMP=0x0000000000191e35
- (id)init;	// IMP=0x0000000000191ddb
- (id)initWithUserIdentity:(id)arg1;	// IMP=0x0000000000191c8d

@end
