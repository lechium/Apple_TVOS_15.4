//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForAccountsIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSearchForAccountsIntent : PBCodable <_INPBSearchForAccountsIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int accountType:1;
        unsigned int requestedBalanceType:1;
    } _has;	// 8 = 0x8
    int _accountType;	// 12 = 0xc
    int _requestedBalanceType;	// 16 = 0x10
    _INPBDataString *_accountNickname;	// 24 = 0x18
    _INPBIntentMetadata *_intentMetadata;	// 32 = 0x20
    _INPBDataString *_organizationName;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000152c14
- (void).cxx_destruct;	// IMP=0x000000000015282f
@property(nonatomic) int requestedBalanceType; // @synthesize requestedBalanceType=_requestedBalanceType;
@property(retain, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) _INPBDataString *accountNickname; // @synthesize accountNickname=_accountNickname;
- (id)dictionaryRepresentation;	// IMP=0x00000000001524e7
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000151f87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000151e32
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000151da0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000151ca1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000151b0a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000151afd
- (int)StringAsRequestedBalanceType:(id)arg1;	// IMP=0x0000000000151a60
- (id)requestedBalanceTypeAsString:(int)arg1;	// IMP=0x00000000001519f9
@property(nonatomic) _Bool hasRequestedBalanceType;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsAccountType:(id)arg1;	// IMP=0x000000000015182c
- (id)accountTypeAsString:(int)arg1;	// IMP=0x0000000000151786
@property(nonatomic) _Bool hasAccountType;
@property(readonly, nonatomic) _Bool hasAccountNickname;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
