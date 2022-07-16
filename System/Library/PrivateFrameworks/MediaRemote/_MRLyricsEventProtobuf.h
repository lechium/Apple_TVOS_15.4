//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRLyricsTokenProtobuf;

__attribute__((visibility("hidden")))
@interface _MRLyricsEventProtobuf : PBCodable <NSCopying>
{
    double _endTime;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    _MRLyricsTokenProtobuf *_token;	// 24 = 0x18
    struct {
        unsigned int endTime:1;
        unsigned int startTime:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000009a7a
- (unsigned long long)hash;	// IMP=0x00000000000097e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000096f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000963c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000009590
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000009583
- (id)dictionaryRepresentation;	// IMP=0x00000000000091ab
- (id)description;	// IMP=0x00000000000090fc

@end
