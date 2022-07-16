//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDevicePeerMetadata, NSString;

@interface BMSyncDevicePeer : NSObject
{
    NSString *_deviceIdentifier;	// 8 = 0x8
    BMSyncDevicePeerMetadata *_metadata;	// 16 = 0x10
    unsigned long long _protocolVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00100000000053ec
@property(nonatomic) unsigned long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) BMSyncDevicePeerMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)dictionaryRepresentation;	// IMP=0x00100000000052c5
- (id)initFromDictionary:(id)arg1;	// IMP=0x00100000000051b7
- (unsigned long long)hash;	// IMP=0x0010000000005131
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000501f
- (id)initWithDeviceIdentifier:(id)arg1 metadata:(id)arg2 protocolVersion:(unsigned long long)arg3;	// IMP=0x0010000000004f7a
- (id)initWithFMResultSet:(id)arg1;	// IMP=0x0010000000003ca8

@end

