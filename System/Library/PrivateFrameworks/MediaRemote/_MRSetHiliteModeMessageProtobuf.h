//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying>
{
    _Bool _hiliteMode;	// 8 = 0x8
    struct {
        unsigned int hiliteMode:1;
    } _has;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x000000000011a73e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011a69c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011a63a
- (void)writeTo:(id)arg1;	// IMP=0x000000000011a60e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011a601
- (id)dictionaryRepresentation;	// IMP=0x000000000011a387
- (id)description;	// IMP=0x000000000011a2d8

@end

