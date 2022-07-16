//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, _MRAudioFormatSettingsProtobuf;

__attribute__((visibility("hidden")))
@interface _MRAudioBufferProtobuf : PBCodable <NSCopying>
{
    long long _maximumPacketSize;	// 8 = 0x8
    long long _packetCapacity;	// 16 = 0x10
    long long _packetCount;	// 24 = 0x18
    NSData *_contents;	// 32 = 0x20
    _MRAudioFormatSettingsProtobuf *_formatSettings;	// 40 = 0x28
    NSMutableArray *_packetDescriptions;	// 48 = 0x30
    struct {
        unsigned int maximumPacketSize:1;
        unsigned int packetCapacity:1;
        unsigned int packetCount:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000083a18
- (unsigned long long)hash;	// IMP=0x00000000000838c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008374d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000834e1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000832dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000832d0
- (id)dictionaryRepresentation;	// IMP=0x0000000000082b1a
- (id)description;	// IMP=0x0000000000082a6b

@end
