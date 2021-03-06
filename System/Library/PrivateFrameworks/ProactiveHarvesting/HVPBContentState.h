//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveHarvesting/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HVPBContentState : PBCodable <NSCopying>
{
    NSMutableArray *_consumers;	// 8 = 0x8
    int _levelOfService;	// 16 = 0x10
    struct {
        unsigned int levelOfService:1;
    } _has;	// 20 = 0x14
}

+ (Class)consumersType;	// IMP=0x000000000001de73
- (void).cxx_destruct;	// IMP=0x000000000001dc4f
@property(nonatomic) int levelOfService; // @synthesize levelOfService=_levelOfService;
@property(retain, nonatomic) NSMutableArray *consumers; // @synthesize consumers=_consumers;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001daa5
- (unsigned long long)hash;	// IMP=0x000000000001da52
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d991
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d79f
- (void)copyTo:(id)arg1;	// IMP=0x000000000001d6ba
- (void)writeTo:(id)arg1;	// IMP=0x000000000001d553
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001d546
- (id)dictionaryRepresentation;	// IMP=0x000000000001d487
- (id)description;	// IMP=0x000000000001d3d8
@property(nonatomic) _Bool hasLevelOfService;
- (id)consumersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001d376
- (unsigned long long)consumersCount;	// IMP=0x000000000001d359
- (void)addConsumers:(id)arg1;	// IMP=0x000000000001d2ef
- (void)clearConsumers;	// IMP=0x000000000001d2d2

@end

