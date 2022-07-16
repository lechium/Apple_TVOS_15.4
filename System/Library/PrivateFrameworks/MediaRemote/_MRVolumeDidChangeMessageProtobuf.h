//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRVolumeDidChangeMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_endpointUID;	// 8 = 0x8
    NSString *_outputDeviceUID;	// 16 = 0x10
    float _volume;	// 24 = 0x18
    CDStruct_731552e5 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000154344
- (unsigned long long)hash;	// IMP=0x00000000001541a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001540a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000153fe3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000153f2c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000153f1f
- (id)dictionaryRepresentation;	// IMP=0x0000000000153c37
- (id)description;	// IMP=0x0000000000153b88

@end
