//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTimeToLeaveInitialTravelTimeLogMessage : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000354ccd
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000354f20
- (unsigned long long)hash;	// IMP=0x0000000000354f06
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000354e84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000354e4b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000354e37
- (void)writeTo:(id)arg1;	// IMP=0x0000000000354e31
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000354e22
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000354b30
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000354b23
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000354ad3
- (id)jsonRepresentation;	// IMP=0x0000000000354ac9
- (id)dictionaryRepresentation;	// IMP=0x0000000000354a72
- (id)description;	// IMP=0x00000000003549c3

@end

