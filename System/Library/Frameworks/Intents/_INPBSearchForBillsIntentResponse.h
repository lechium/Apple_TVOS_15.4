//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForBillsIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSearchForBillsIntentResponse : PBCodable <_INPBSearchForBillsIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_bills;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e2a9c
+ (Class)billsType;	// IMP=0x00000000002e2a8b
- (void).cxx_destruct;	// IMP=0x00000000002e28c9
@property(copy, nonatomic) NSArray *bills; // @synthesize bills=_bills;
- (id)dictionaryRepresentation;	// IMP=0x00000000002e269c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e24fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e247b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e23e9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e22ea
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e21ba
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e21ad
- (id)billsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002e2190
@property(readonly, nonatomic) unsigned long long billsCount;
- (void)addBills:(id)arg1;	// IMP=0x00000000002e20f9
- (void)clearBills;	// IMP=0x00000000002e20dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

