//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDistributedValueIdentifier, NSMutableArray;

@interface CKDPAtomBatchReplaceRequest : PBRequest <NSCopying>
{
    NSMutableArray *_atomBatches;	// 8 = 0x8
    NSMutableArray *_batchIdentifiers;	// 16 = 0x10
    CKDPDistributedValueIdentifier *_identifier;	// 24 = 0x18
}

+ (Class)atomBatchesType;	// IMP=0x000000000021f356
+ (Class)batchIdentifiersType;	// IMP=0x000000000021f284
+ (id)options;	// IMP=0x000000000021f15e
- (void).cxx_destruct;	// IMP=0x0000000000220424
@property(retain, nonatomic) NSMutableArray *atomBatches; // @synthesize atomBatches=_atomBatches;
@property(retain, nonatomic) NSMutableArray *batchIdentifiers; // @synthesize batchIdentifiers=_batchIdentifiers;
@property(retain, nonatomic) CKDPDistributedValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000220136
- (unsigned long long)hash;	// IMP=0x00000000002200c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021ffd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021fcc5
- (void)copyTo:(id)arg1;	// IMP=0x000000000021fb42
- (void)writeTo:(id)arg1;	// IMP=0x000000000021f916
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021f909
- (id)dictionaryRepresentation;	// IMP=0x000000000021f416
- (id)description;	// IMP=0x000000000021f367
- (id)atomBatchesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000021f339
- (unsigned long long)atomBatchesCount;	// IMP=0x000000000021f31c
- (void)addAtomBatches:(id)arg1;	// IMP=0x000000000021f2b2
- (void)clearAtomBatches;	// IMP=0x000000000021f295
- (id)batchIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000021f267
- (unsigned long long)batchIdentifiersCount;	// IMP=0x000000000021f24a
- (void)addBatchIdentifiers:(id)arg1;	// IMP=0x000000000021f1e0
- (void)clearBatchIdentifiers;	// IMP=0x000000000021f1c3
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
