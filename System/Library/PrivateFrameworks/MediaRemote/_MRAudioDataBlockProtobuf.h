//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRAudioBufferProtobuf, _MRAudioTimeProtobuf;

__attribute__((visibility("hidden")))
@interface _MRAudioDataBlockProtobuf : PBCodable <NSCopying>
{
    double _gain;	// 8 = 0x8
    _MRAudioBufferProtobuf *_buffer;	// 16 = 0x10
    _MRAudioTimeProtobuf *_time;	// 24 = 0x18
    struct {
        unsigned int gain:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000afd6
- (unsigned long long)hash;	// IMP=0x000000000000ae26
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ad2b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ac69
- (void)writeTo:(id)arg1;	// IMP=0x000000000000abb2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000aba5
- (id)dictionaryRepresentation;	// IMP=0x000000000000a7f5
- (id)description;	// IMP=0x000000000000a746

@end

