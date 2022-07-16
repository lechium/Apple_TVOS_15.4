//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDictionary-Protocol.h>

@class NSArray, NSString;

@interface _INPBDictionary : PBCodable <_INPBDictionary, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_pairs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000159f2c
+ (Class)pairType;	// IMP=0x0000000000159f1b
- (void).cxx_destruct;	// IMP=0x0000000000159d59
@property(copy, nonatomic) NSArray *pairs; // @synthesize pairs=_pairs;
- (id)dictionaryRepresentation;	// IMP=0x0000000000159b2c
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015998d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015990b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000159879
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015977a
- (void)writeTo:(id)arg1;	// IMP=0x000000000015964a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015963d
- (id)pairAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000159620
@property(readonly, nonatomic) unsigned long long pairsCount;
- (void)addPair:(id)arg1;	// IMP=0x0000000000159589
- (void)clearPairs;	// IMP=0x000000000015956c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

