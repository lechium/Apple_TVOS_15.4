//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOLogMsgEventFullNavTrace : PBCodable <NSCopying>
{
    NSData *_navTraceData;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001359e64
- (void).cxx_destruct;	// IMP=0x000000000135a0de
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000135a06f
- (unsigned long long)hash;	// IMP=0x000000000135a034
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001359f71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001359ef9
- (void)copyTo:(id)arg1;	// IMP=0x0000000001359ea4
- (void)writeTo:(id)arg1;	// IMP=0x0000000001359e80
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001359e71
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001359e04
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001359df2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001359cea
- (id)jsonRepresentation;	// IMP=0x0000000001359cdb
- (id)dictionaryRepresentation;	// IMP=0x0000000001359bed
- (id)description;	// IMP=0x0000000001359b3e
@property(retain, nonatomic) NSData *navTraceData;
@property(readonly, nonatomic) _Bool hasNavTraceData;

@end

