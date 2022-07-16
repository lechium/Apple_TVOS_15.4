//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CLPCellNeighborsGroup : PBCodable <NSCopying>
{
    NSMutableArray *_cdmaNeighbors;	// 8 = 0x8
    NSMutableArray *_gsmNeighbors;	// 16 = 0x10
    NSMutableArray *_lteNeighbors;	// 24 = 0x18
    NSMutableArray *_nrNeighbors;	// 32 = 0x20
    NSMutableArray *_scdmaNeighbors;	// 40 = 0x28
}

+ (Class)nrNeighborsType;	// IMP=0x000000000001474f
+ (Class)lteNeighborsType;	// IMP=0x000000000001467d
+ (Class)cdmaNeighborsType;	// IMP=0x00000000000145ab
+ (Class)scdmaNeighborsType;	// IMP=0x00000000000144d9
+ (Class)gsmNeighborsType;	// IMP=0x0000000000014407
- (void).cxx_destruct;	// IMP=0x00000000000175e0
@property(retain, nonatomic) NSMutableArray *nrNeighbors; // @synthesize nrNeighbors=_nrNeighbors;
@property(retain, nonatomic) NSMutableArray *lteNeighbors; // @synthesize lteNeighbors=_lteNeighbors;
@property(retain, nonatomic) NSMutableArray *cdmaNeighbors; // @synthesize cdmaNeighbors=_cdmaNeighbors;
@property(retain, nonatomic) NSMutableArray *scdmaNeighbors; // @synthesize scdmaNeighbors=_scdmaNeighbors;
@property(retain, nonatomic) NSMutableArray *gsmNeighbors; // @synthesize gsmNeighbors=_gsmNeighbors;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000017015
- (unsigned long long)hash;	// IMP=0x0000000000016f72
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016e12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001676b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000016458
- (void)writeTo:(id)arg1;	// IMP=0x0000000000015fc5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000015fb8
- (id)dictionaryRepresentation;	// IMP=0x000000000001480f
- (id)description;	// IMP=0x0000000000014760
- (id)nrNeighborsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014732
- (unsigned long long)nrNeighborsCount;	// IMP=0x0000000000014715
- (void)addNrNeighbors:(id)arg1;	// IMP=0x00000000000146ab
- (void)clearNrNeighbors;	// IMP=0x000000000001468e
- (id)lteNeighborsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014660
- (unsigned long long)lteNeighborsCount;	// IMP=0x0000000000014643
- (void)addLteNeighbors:(id)arg1;	// IMP=0x00000000000145d9
- (void)clearLteNeighbors;	// IMP=0x00000000000145bc
- (id)cdmaNeighborsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001458e
- (unsigned long long)cdmaNeighborsCount;	// IMP=0x0000000000014571
- (void)addCdmaNeighbors:(id)arg1;	// IMP=0x0000000000014507
- (void)clearCdmaNeighbors;	// IMP=0x00000000000144ea
- (id)scdmaNeighborsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000144bc
- (unsigned long long)scdmaNeighborsCount;	// IMP=0x000000000001449f
- (void)addScdmaNeighbors:(id)arg1;	// IMP=0x0000000000014435
- (void)clearScdmaNeighbors;	// IMP=0x0000000000014418
- (id)gsmNeighborsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000143ea
- (unsigned long long)gsmNeighborsCount;	// IMP=0x00000000000143cd
- (void)addGsmNeighbors:(id)arg1;	// IMP=0x0000000000014363
- (void)clearGsmNeighbors;	// IMP=0x0000000000014346

@end

