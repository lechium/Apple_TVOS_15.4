//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRGetVolumeResultMessageProtobuf : PBCodable <NSCopying>
{
    float _volume;	// 8 = 0x8
    CDStruct_731552e5 _has;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x000000000003cb69
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003cad2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ca6c
- (void)writeTo:(id)arg1;	// IMP=0x000000000003ca3f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003ca32
- (id)dictionaryRepresentation;	// IMP=0x000000000003c7e4
- (id)description;	// IMP=0x000000000003c735

@end
