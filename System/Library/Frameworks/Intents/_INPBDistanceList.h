//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDistanceList-Protocol.h>

@class NSArray, NSString, _INPBCondition;

@interface _INPBDistanceList : PBCodable <_INPBDistanceList, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBCondition *_condition;	// 8 = 0x8
    NSArray *_distances;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029eeae
+ (Class)distanceType;	// IMP=0x000000000029ee9d
- (void).cxx_destruct;	// IMP=0x000000000029ec56
@property(copy, nonatomic) NSArray *distances; // @synthesize distances=_distances;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (id)dictionaryRepresentation;	// IMP=0x000000000029e9bf
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029e6b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029e5f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029e564
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029e465
- (void)writeTo:(id)arg1;	// IMP=0x000000000029e2da
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029e2cd
- (id)distanceAtIndex:(unsigned long long)arg1;	// IMP=0x000000000029e2b0
@property(readonly, nonatomic) unsigned long long distancesCount;
- (void)addDistance:(id)arg1;	// IMP=0x000000000029e219
- (void)clearDistances;	// IMP=0x000000000029e1fc
@property(readonly, nonatomic) _Bool hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

