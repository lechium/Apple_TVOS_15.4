//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRGetVolumeMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_outputDeviceUID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000017d354
- (unsigned long long)hash;	// IMP=0x000000000017d31e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017d284
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017d20c
- (void)writeTo:(id)arg1;	// IMP=0x000000000017d1ce
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017d1c1
- (id)dictionaryRepresentation;	// IMP=0x000000000017cff3
- (id)description;	// IMP=0x000000000017cf44

@end
