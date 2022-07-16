//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>

@class NSString, NSUUID;

@interface DNDSPairedDevice : NSObject <NSCopying>
{
    _Bool _iOS14EraOS;	// 8 = 0x8
    _Bool _iCloudEnabled;	// 9 = 0x9
    NSString *_deviceIdentifier;	// 16 = 0x10
    unsigned long long _deviceClass;	// 24 = 0x18
    NSString *_deviceName;	// 32 = 0x20
    NSString *_osBuild;	// 40 = 0x28
    unsigned long long _syncProtocolVersion;	// 48 = 0x30
    unsigned long long _syncServiceType;	// 56 = 0x38
    NSUUID *_pairingIdentifier;	// 64 = 0x40
    NSString *_pairingDataStore;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000052338
@property(readonly, copy, nonatomic) NSString *pairingDataStore; // @synthesize pairingDataStore=_pairingDataStore;
@property(readonly, copy, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) unsigned long long syncServiceType; // @synthesize syncServiceType=_syncServiceType;
@property(nonatomic, getter=isICloudEnabled) _Bool iCloudEnabled; // @synthesize iCloudEnabled=_iCloudEnabled;
@property(readonly, nonatomic, getter=isIOS14EraOS) _Bool iOS14EraOS; // @synthesize iOS14EraOS=_iOS14EraOS;
@property(readonly, nonatomic) unsigned long long syncProtocolVersion; // @synthesize syncProtocolVersion=_syncProtocolVersion;
@property(readonly, nonatomic) unsigned long long deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000522d6
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
- (id)description;	// IMP=0x0000000000051e83
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000051ad4
- (unsigned long long)hash;	// IMP=0x00000000000519ba
- (id)initWithCloudDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 syncProtocolVersion:(unsigned long long)arg3;	// IMP=0x0000000000051923
- (id)initWithLocalDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 syncProtocolVersion:(unsigned long long)arg3 iOS14EraOS:(_Bool)arg4 pairingIdentifier:(id)arg5 pairingDataStore:(id)arg6;	// IMP=0x0000000000051811
@property(readonly, nonatomic) _Bool supportsKettle;

@end

