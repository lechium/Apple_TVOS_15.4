//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class CKDeviceToDeviceShareInvitationToken, CKUserIdentityLookupInfo, NSString;

@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_participantHandle;	// 8 = 0x8
    CKUserIdentityLookupInfo *_lookupInfo;	// 16 = 0x10
    CKDeviceToDeviceShareInvitationToken *_invitationToken;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000034997c
- (void).cxx_destruct;	// IMP=0x0000000000349e55
@property(retain, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken; // @synthesize invitationToken=_invitationToken;
@property(retain, nonatomic) CKUserIdentityLookupInfo *lookupInfo; // @synthesize lookupInfo=_lookupInfo;
@property(copy, nonatomic) NSString *participantHandle; // @synthesize participantHandle=_participantHandle;
- (id)description;	// IMP=0x0000000000349d69
- (unsigned long long)hash;	// IMP=0x0000000000349ce5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000349c3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000349b93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000349b10
- (id)lookupInfoData;	// IMP=0x0000000000349ad2
- (id)invitationTokenData;	// IMP=0x0000000000349a94
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000349984
- (id)initWithParticipant:(id)arg1;	// IMP=0x0000000000349846

@end

