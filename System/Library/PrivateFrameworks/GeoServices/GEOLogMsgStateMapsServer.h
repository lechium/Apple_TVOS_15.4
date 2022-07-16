//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapsServerMetadata;

@interface GEOLogMsgStateMapsServer : PBCodable <NSCopying>
{
    GEOMapsServerMetadata *_serverMetadata;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000146f139
- (void).cxx_destruct;	// IMP=0x000000000146f3e7
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000146f361
- (unsigned long long)hash;	// IMP=0x000000000146f326
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000146f263
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000146f1eb
- (void)copyTo:(id)arg1;	// IMP=0x000000000146f196
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x000000000146f179
- (void)writeTo:(id)arg1;	// IMP=0x000000000146f155
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000146f146
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000146f0d9
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000146f0c7
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000146efb0
- (id)jsonRepresentation;	// IMP=0x000000000146efa1
- (id)dictionaryRepresentation;	// IMP=0x000000000146eeae
- (id)description;	// IMP=0x000000000146edff
@property(retain, nonatomic) GEOMapsServerMetadata *serverMetadata;
@property(readonly, nonatomic) _Bool hasServerMetadata;

@end
