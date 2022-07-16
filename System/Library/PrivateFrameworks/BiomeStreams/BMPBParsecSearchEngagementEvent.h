//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BMPBParsecSearchEngagementEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_completedQuery;	// 16 = 0x10
    NSString *_contentProtection;	// 24 = 0x18
    NSString *_domainId;	// 32 = 0x20
    NSMutableArray *_entities;	// 40 = 0x28
    NSString *_resultId;	// 48 = 0x30
    NSString *_uniqueId;	// 56 = 0x38
    NSString *_userInput;	// 64 = 0x40
    CDStruct_d3e759b0 _has;	// 72 = 0x48
}

+ (Class)entitiesType;	// IMP=0x00000000000a22ec
- (void).cxx_destruct;	// IMP=0x00000000000a389e
@property(retain, nonatomic) NSString *contentProtection; // @synthesize contentProtection=_contentProtection;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) NSString *completedQuery; // @synthesize completedQuery=_completedQuery;
@property(retain, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(retain, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(retain, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a354a
- (unsigned long long)hash;	// IMP=0x00000000000a3352
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a3148
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a2e58
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a2ca7
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a2a91
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a2a84
- (id)dictionaryRepresentation;	// IMP=0x00000000000a23d6
- (id)description;	// IMP=0x00000000000a2327
@property(readonly, nonatomic) _Bool hasContentProtection;
@property(readonly, nonatomic) _Bool hasUniqueId;
- (id)entitiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a22cf
- (unsigned long long)entitiesCount;	// IMP=0x00000000000a22b2
- (void)addEntities:(id)arg1;	// IMP=0x00000000000a2248
- (void)clearEntities;	// IMP=0x00000000000a222b
@property(readonly, nonatomic) _Bool hasCompletedQuery;
@property(readonly, nonatomic) _Bool hasUserInput;
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(readonly, nonatomic) _Bool hasDomainId;
@property(readonly, nonatomic) _Bool hasResultId;

@end
