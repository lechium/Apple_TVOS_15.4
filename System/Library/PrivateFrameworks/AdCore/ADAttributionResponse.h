//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ADAttributionResponse : PBCodable <NSCopying>
{
    NSMutableArray *_versionedAttributionDetails;	// 8 = 0x8
}

+ (Class)versionedAttributionDetailsType;	// IMP=0x000000000002bc15
+ (id)options;	// IMP=0x000000000002bb04
- (void).cxx_destruct;	// IMP=0x000000000002c6a3
@property(retain, nonatomic) NSMutableArray *versionedAttributionDetails; // @synthesize versionedAttributionDetails=_versionedAttributionDetails;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002c549
- (unsigned long long)hash;	// IMP=0x000000000002c52c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002c492
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c2cf
- (void)copyTo:(id)arg1;	// IMP=0x000000000002c208
- (void)writeTo:(id)arg1;	// IMP=0x000000000002c0d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002c0cb
- (id)dictionaryRepresentation;	// IMP=0x000000000002bcd5
- (id)description;	// IMP=0x000000000002bc26
- (id)versionedAttributionDetailsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002bbf8
- (unsigned long long)versionedAttributionDetailsCount;	// IMP=0x000000000002bbdb
- (void)addVersionedAttributionDetails:(id)arg1;	// IMP=0x000000000002bb71
- (void)clearVersionedAttributionDetails;	// IMP=0x000000000002bb54

@end

