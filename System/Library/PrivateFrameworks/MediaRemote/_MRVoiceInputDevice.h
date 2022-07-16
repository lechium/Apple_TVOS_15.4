//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface _MRVoiceInputDevice : PBCodable <NSCopying>
{
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;	// 8 = 0x8
    unsigned int _deviceID;	// 16 = 0x10
    int _recordingState;	// 20 = 0x14
    struct {
        unsigned int deviceID:1;
        unsigned int recordingState:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022f758
- (unsigned long long)hash;	// IMP=0x000000000022f6b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022f5bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022f50b
- (void)writeTo:(id)arg1;	// IMP=0x000000000022f465
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022f458
- (id)dictionaryRepresentation;	// IMP=0x000000000022eff9
- (id)description;	// IMP=0x000000000022ef4a

@end

