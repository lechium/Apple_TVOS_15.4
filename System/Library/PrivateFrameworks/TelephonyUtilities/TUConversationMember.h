//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSSet, NSString, TUHandle;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isLightweightMember;	// 8 = 0x8
    _Bool _joinedFromLetMeIn;	// 9 = 0x9
    _Bool _isOtherInvitedHandle;	// 10 = 0xa
    TUHandle *_handle;	// 16 = 0x10
    NSString *_nickname;	// 24 = 0x18
    long long _validationSource;	// 32 = 0x20
    NSDate *_dateReceivedLetMeIn;	// 40 = 0x28
    TUHandle *_lightweightPrimary;	// 48 = 0x30
    unsigned long long _lightweightPrimaryParticipantIdentifier;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004559a
- (void).cxx_destruct;	// IMP=0x0000000000045c2e
@property(nonatomic) _Bool isOtherInvitedHandle; // @synthesize isOtherInvitedHandle=_isOtherInvitedHandle;
@property(nonatomic) _Bool joinedFromLetMeIn; // @synthesize joinedFromLetMeIn=_joinedFromLetMeIn;
@property(nonatomic) unsigned long long lightweightPrimaryParticipantIdentifier; // @synthesize lightweightPrimaryParticipantIdentifier=_lightweightPrimaryParticipantIdentifier;
@property(copy, nonatomic) TUHandle *lightweightPrimary; // @synthesize lightweightPrimary=_lightweightPrimary;
@property(nonatomic) NSDate *dateReceivedLetMeIn; // @synthesize dateReceivedLetMeIn=_dateReceivedLetMeIn;
@property(nonatomic) _Bool isLightweightMember; // @synthesize isLightweightMember=_isLightweightMember;
@property(nonatomic) long long validationSource; // @synthesize validationSource=_validationSource;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000045867
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000455a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004540b
- (unsigned long long)hash;	// IMP=0x0000000000045329
- (_Bool)isEqualToMember:(id)arg1;	// IMP=0x00000000000451b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004515a
@property(readonly, nonatomic, getter=isValidated) _Bool validated;
- (_Bool)pseudonym;	// IMP=0x00000000000450b0
@property(copy, nonatomic) TUHandle *splitSessionPrimary;
@property(nonatomic) _Bool isSplitSessionMember;
- (_Bool)representsSameMemberAs:(id)arg1;	// IMP=0x0000000000044fd7
@property(readonly, copy, nonatomic) NSArray *idsDestinations;
@property(readonly, copy, nonatomic) NSString *idsDestination;
@property(readonly, copy, nonatomic) NSString *idsFromID;
@property(readonly, copy, nonatomic) NSSet *handles;
- (id)description;	// IMP=0x0000000000044873
- (id)initWithDestinations:(id)arg1;	// IMP=0x00000000000447e9
- (id)initWithDestination:(id)arg1;	// IMP=0x000000000004478f
- (id)initWithContact:(id)arg1;	// IMP=0x000000000004470e
- (id)initWithContact:(id)arg1 additionalHandles:(id)arg2;	// IMP=0x0000000000044249
- (id)initWithHandles:(id)arg1;	// IMP=0x00000000000441f3
- (id)initWithHandle:(id)arg1 nickname:(id)arg2 joinedFromLetMeIn:(_Bool)arg3;	// IMP=0x0000000000043fb9
- (id)initWithHandle:(id)arg1 nickname:(id)arg2;	// IMP=0x0000000000043fa4
- (id)initWithHandle:(id)arg1;	// IMP=0x0000000000043f8d

@end
