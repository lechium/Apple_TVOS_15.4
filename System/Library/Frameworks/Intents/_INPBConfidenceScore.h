//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBConfidenceScore-Protocol.h>

@class NSArray, NSString;

@interface _INPBConfidenceScore : PBCodable <_INPBConfidenceScore, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int aggregateScore:1;
    } _has;	// 8 = 0x8
    float _aggregateScore;	// 12 = 0xc
    NSArray *_components;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004147fc
+ (Class)componentsType;	// IMP=0x00000000004147eb
- (void).cxx_destruct;	// IMP=0x00000000004145c0
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) float aggregateScore; // @synthesize aggregateScore=_aggregateScore;
- (id)dictionaryRepresentation;	// IMP=0x000000000041431d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000413fe5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000413f41
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000413eaf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000413db0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000413c53
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000413c46
- (id)componentsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000413c29
@property(readonly, nonatomic) unsigned long long componentsCount;
- (void)addComponents:(id)arg1;	// IMP=0x0000000000413b92
- (void)clearComponents;	// IMP=0x0000000000413b75
@property(nonatomic) _Bool hasAggregateScore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
