//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDistributedValueIdentifier, NSMutableArray;

@interface CKDPAtomSyncRequest : PBRequest <NSCopying>
{
    NSMutableArray *_atomBatchs;	// 8 = 0x8
    CKDPDistributedValueIdentifier *_identifier;	// 16 = 0x10
}

+ (Class)atomBatchType;	// IMP=0x00000000002eb95f
+ (id)options;	// IMP=0x00000000002eb839
- (void).cxx_destruct;	// IMP=0x00000000002ec5b7
@property(retain, nonatomic) NSMutableArray *atomBatchs; // @synthesize atomBatchs=_atomBatchs;
@property(retain, nonatomic) CKDPDistributedValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002ec3dc
- (unsigned long long)hash;	// IMP=0x00000000002ec38f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ec2c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ec0ee
- (void)copyTo:(id)arg1;	// IMP=0x00000000002ec004
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ebeb8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ebeab
- (id)dictionaryRepresentation;	// IMP=0x00000000002eba1f
- (id)description;	// IMP=0x00000000002eb970
- (id)atomBatchAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002eb942
- (unsigned long long)atomBatchsCount;	// IMP=0x00000000002eb925
- (void)addAtomBatch:(id)arg1;	// IMP=0x00000000002eb8bb
- (void)clearAtomBatchs;	// IMP=0x00000000002eb89e
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
