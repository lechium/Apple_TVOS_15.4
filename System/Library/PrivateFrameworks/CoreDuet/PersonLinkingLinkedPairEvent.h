//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PersonLinkingLinkedPairEvent : PBCodable <NSCopying>
{
    NSMutableArray *_pairs;	// 8 = 0x8
    NSString *_userID;	// 16 = 0x10
}

+ (Class)pairsType;	// IMP=0x00000000001186d4
- (void).cxx_destruct;	// IMP=0x00000000001192cf
@property(retain, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011910d
- (unsigned long long)hash;	// IMP=0x00000000001190c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000118ff8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000118e1f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000118d35
- (void)writeTo:(id)arg1;	// IMP=0x0000000000118be9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000118bdc
- (id)dictionaryRepresentation;	// IMP=0x0000000000118794
- (id)description;	// IMP=0x00000000001186e5
- (id)pairsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001186b7
- (unsigned long long)pairsCount;	// IMP=0x000000000011869a
- (void)addPairs:(id)arg1;	// IMP=0x0000000000118630
- (void)clearPairs;	// IMP=0x0000000000118613
@property(readonly, nonatomic) _Bool hasUserID;

@end

