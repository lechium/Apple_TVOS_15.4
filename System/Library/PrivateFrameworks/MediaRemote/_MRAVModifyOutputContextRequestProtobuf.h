//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MRAVModifyOutputContextRequestProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_addingOutputDeviceUIDs;	// 8 = 0x8
    NSMutableArray *_clusterAwareAddingOutputDeviceUIDs;	// 16 = 0x10
    NSMutableArray *_clusterAwareRemovingOutputDeviceUIDs;	// 24 = 0x18
    NSMutableArray *_clusterAwareSettingOutputDeviceUIDs;	// 32 = 0x20
    int _outputContextType;	// 40 = 0x28
    NSMutableArray *_removingOutputDeviceUIDs;	// 48 = 0x30
    NSMutableArray *_settingOutputDeviceUIDs;	// 56 = 0x38
    struct {
        unsigned int outputContextType:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000fbaae
- (unsigned long long)hash;	// IMP=0x00000000000fb887
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb6bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000faf98
- (void)writeTo:(id)arg1;	// IMP=0x00000000000faa0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000faa00
- (id)dictionaryRepresentation;	// IMP=0x00000000000fa4ee
- (id)description;	// IMP=0x00000000000fa43f

@end

