//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRAudioStreamPacketDescriptionProtobuf : PBCodable <NSCopying>
{
    long long _startOffset;	// 8 = 0x8
    unsigned int _dataByteSize;	// 16 = 0x10
    unsigned int _variableFramesInPacket;	// 20 = 0x14
    struct {
        unsigned int startOffset:1;
        unsigned int dataByteSize:1;
        unsigned int variableFramesInPacket:1;
    } _has;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x0000000000147ffb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000147f28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000147e90
- (void)writeTo:(id)arg1;	// IMP=0x0000000000147dff
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000147df2
- (id)dictionaryRepresentation;	// IMP=0x000000000014798e
- (id)description;	// IMP=0x00000000001478df

@end

