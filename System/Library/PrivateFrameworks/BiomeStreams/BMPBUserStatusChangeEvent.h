//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BMPBUserStatusChangeEvent : PBCodable <NSCopying>
{
    NSString *_idsHandle;	// 8 = 0x8
    NSMutableArray *_idsHandles;	// 16 = 0x10
    NSString *_statusChangeType;	// 24 = 0x18
}

+ (Class)idsHandlesType;	// IMP=0x00000000000488fc
- (void).cxx_destruct;	// IMP=0x0000000000049435
@property(retain, nonatomic) NSMutableArray *idsHandles; // @synthesize idsHandles=_idsHandles;
@property(retain, nonatomic) NSString *statusChangeType; // @synthesize statusChangeType=_statusChangeType;
@property(retain, nonatomic) NSString *idsHandle; // @synthesize idsHandle=_idsHandle;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004922e
- (unsigned long long)hash;	// IMP=0x00000000000491c1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000490c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048ec3
- (void)copyTo:(id)arg1;	// IMP=0x0000000000048db9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000048c50
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000048c43
- (id)dictionaryRepresentation;	// IMP=0x00000000000489bc
- (id)description;	// IMP=0x000000000004890d
- (id)idsHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000488df
- (unsigned long long)idsHandlesCount;	// IMP=0x00000000000488c2
- (void)addIdsHandles:(id)arg1;	// IMP=0x0000000000048858
- (void)clearIdsHandles;	// IMP=0x000000000004883b
@property(readonly, nonatomic) _Bool hasStatusChangeType;
@property(readonly, nonatomic) _Bool hasIdsHandle;

@end

