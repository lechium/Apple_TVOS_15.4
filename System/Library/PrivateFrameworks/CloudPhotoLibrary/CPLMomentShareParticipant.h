//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSPersonNameComponents, NSString;

@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _hasiCloudAccount;	// 8 = 0x8
    _Bool _isCurrentUser;	// 9 = 0x9
    short _type;	// 10 = 0xa
    short _status;	// 12 = 0xc
    NSString *_email;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    NSString *_userIdentifier;	// 32 = 0x20
    NSPersonNameComponents *_nameComponents;	// 40 = 0x28
}

+ (id)shareParticipantsFromMomentShareParticipants:(id)arg1;	// IMP=0x0000000000135f65
+ (id)momentShareParticipantsFromParticipants:(id)arg1;	// IMP=0x0000000000135d62
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005b0ff
- (void).cxx_destruct;	// IMP=0x0000000000135d24
@property(nonatomic) short status; // @synthesize status=_status;
@property(nonatomic) short type; // @synthesize type=_type;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(nonatomic) _Bool hasiCloudAccount; // @synthesize hasiCloudAccount=_hasiCloudAccount;
@property(copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (id)description;	// IMP=0x0000000000135c21
- (unsigned long long)hash;	// IMP=0x0000000000135c0f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000135bfd
- (id)asShareParticipant;	// IMP=0x0000000000135b3c
- (id)initWithShareParticipant:(id)arg1;	// IMP=0x00000000001359af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a3d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005a368
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005a356

@end

