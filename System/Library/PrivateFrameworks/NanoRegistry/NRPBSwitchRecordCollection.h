//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NRPBSwitchRecordCollection : PBCodable <NSCopying>
{
    NSMutableArray *_records;	// 8 = 0x8
}

+ (Class)recordsType;	// IMP=0x00000000000171c4
- (void).cxx_destruct;	// IMP=0x0000000000017c50
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000017af6
- (unsigned long long)hash;	// IMP=0x0000000000017ad9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017a3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001787c
- (void)copyTo:(id)arg1;	// IMP=0x00000000000177b5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000017685
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000017678
- (id)dictionaryRepresentation;	// IMP=0x0000000000017284
- (id)description;	// IMP=0x00000000000171d5
- (id)recordsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000171a7
- (unsigned long long)recordsCount;	// IMP=0x000000000001718a
- (void)addRecords:(id)arg1;	// IMP=0x0000000000017120
- (void)clearRecords;	// IMP=0x0000000000017103

@end

