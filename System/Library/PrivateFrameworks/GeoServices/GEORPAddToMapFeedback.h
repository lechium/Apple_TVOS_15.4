//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEORPAddToMapFeedback : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000040b943
- (void).cxx_destruct;	// IMP=0x000000000040bc41
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000040bbfb
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000040bbcf
- (unsigned long long)hash;	// IMP=0x000000000040bbb5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040bb33
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040bad8
- (void)copyTo:(id)arg1;	// IMP=0x000000000040bac4
- (void)writeTo:(id)arg1;	// IMP=0x000000000040baa7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000040ba98
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000040b737
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000040b72a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000040b6da
- (id)jsonRepresentation;	// IMP=0x000000000040b5c8
- (id)dictionaryRepresentation;	// IMP=0x000000000040b455
- (id)description;	// IMP=0x000000000040b3a6

@end
