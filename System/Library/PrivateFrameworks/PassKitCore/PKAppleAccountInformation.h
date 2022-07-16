//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isSandboxAccount;	// 8 = 0x8
    NSString *_aidaAlternateDSID;	// 16 = 0x10
    NSString *_aidaToken;	// 24 = 0x18
    NSString *_aaDSID;	// 32 = 0x20
    NSString *_aaAlternateDSID;	// 40 = 0x28
    NSString *_appleID;	// 48 = 0x30
    NSString *_firstName;	// 56 = 0x38
    NSString *_lastName;	// 64 = 0x40
    NSString *_primaryEmailAddress;	// 72 = 0x48
    NSString *_authorizationHeader;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ab4d1
- (void).cxx_destruct;	// IMP=0x00000000001aba4b
@property(copy, nonatomic) NSString *authorizationHeader; // @synthesize authorizationHeader=_authorizationHeader;
@property(copy, nonatomic) NSString *primaryEmailAddress; // @synthesize primaryEmailAddress=_primaryEmailAddress;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic) _Bool isSandboxAccount; // @synthesize isSandboxAccount=_isSandboxAccount;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *aaAlternateDSID; // @synthesize aaAlternateDSID=_aaAlternateDSID;
@property(copy, nonatomic) NSString *aaDSID; // @synthesize aaDSID=_aaDSID;
@property(copy, nonatomic) NSString *aidaToken; // @synthesize aidaToken=_aidaToken;
@property(copy, nonatomic) NSString *aidaAlternateDSID; // @synthesize aidaAlternateDSID=_aidaAlternateDSID;
- (_Bool)aidaAccountAvailable;	// IMP=0x00000000001ab917
- (id)altDsidAppleAccountHash;	// IMP=0x00000000001ab909
- (id)primaryAppleAccountHash;	// IMP=0x00000000001ab8fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ab7f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ab6fa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ab4d9

@end

