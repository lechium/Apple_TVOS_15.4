//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchFieldPlaceholderParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _version;	// 16 = 0x10
    CDStruct_a42fff2f _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000005d7072
- (unsigned long long)hash;	// IMP=0x00000000005d7047
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005d6fb5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005d6f35
- (void)writeTo:(id)arg1;	// IMP=0x00000000005d6ed3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005d6ec4
- (id)jsonRepresentation;	// IMP=0x00000000005d6db2
- (id)dictionaryRepresentation;	// IMP=0x00000000005d6bca
- (id)description;	// IMP=0x00000000005d6b1b

@end

