//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOPerformanceLogMessage : PBCodable <NSCopying>
{
}

- (unsigned long long)hash;	// IMP=0x0000000000350ba8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000350b63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000350b2a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000350b24
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003509e1
- (id)jsonRepresentation;	// IMP=0x00000000003509d7
- (id)dictionaryRepresentation;	// IMP=0x0000000000350998
- (id)description;	// IMP=0x00000000003508e9

@end

