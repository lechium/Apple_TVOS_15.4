//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPRecordDeleteResponse : PBCodable <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002442b5
- (unsigned long long)hash;	// IMP=0x00000000002442ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000244268
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024422f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000244229
- (void)writeTo:(id)arg1;	// IMP=0x0000000000244223
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000244216
- (id)dictionaryRepresentation;	// IMP=0x00000000002440ef
- (id)description;	// IMP=0x0000000000244040

@end
