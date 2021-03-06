//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForAccountsIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForAccountsIntentResponse : PBCodable <_INPBSearchForAccountsIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_accounts;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000250f7c
+ (Class)accountsType;	// IMP=0x0000000000250f6b
- (void).cxx_destruct;	// IMP=0x0000000000250da9
@property(copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (id)dictionaryRepresentation;	// IMP=0x0000000000250b7c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002509dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025095b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002508c9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002507ca
- (void)writeTo:(id)arg1;	// IMP=0x000000000025069a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025068d
- (id)accountsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000250670
@property(readonly, nonatomic) unsigned long long accountsCount;
- (void)addAccounts:(id)arg1;	// IMP=0x00000000002505d9
- (void)clearAccounts;	// IMP=0x00000000002505bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

