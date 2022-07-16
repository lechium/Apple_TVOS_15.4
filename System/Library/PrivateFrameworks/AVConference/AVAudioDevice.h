//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AVAudioDevice : NSObject
{
    NSString *_deviceName;	// 8 = 0x8
    NSNumber *_deviceID;	// 16 = 0x10
    NSString *_UID;	// 24 = 0x18
    _Bool _inputAvailable;	// 32 = 0x20
    _Bool _outputAvailable;	// 33 = 0x21
    _Bool _preferredDevice;	// 34 = 0x22
    _Bool _isBluetoothDevice;	// 35 = 0x23
    _Bool _isLineIn;	// 36 = 0x24
}

@property(readonly, nonatomic, getter=isPreferredDevice) _Bool preferredDevice; // @synthesize preferredDevice=_preferredDevice;
@property(readonly, nonatomic) _Bool outputAvailable; // @synthesize outputAvailable=_outputAvailable;
@property(readonly, nonatomic) _Bool inputAvailable; // @synthesize inputAvailable=_inputAvailable;
@property(readonly, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(readonly, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000225d4d
- (unsigned long long)hash;	// IMP=0x0000000000225d37
- (_Bool)isStreamAvailableForScope:(unsigned int)arg1;	// IMP=0x0000000000225d2f
- (unsigned int)getDataSourceControlID;	// IMP=0x0000000000225d27
- (unsigned int *)allocDeviceControlListAndSize:(unsigned int *)arg1;	// IMP=0x0000000000225d1f
- (_Bool)isBuiltInDevice;	// IMP=0x0000000000225d17
- (_Bool)isSomethingConnectedToJack;	// IMP=0x0000000000225b24
- (_Bool)isValidInputDevice;	// IMP=0x0000000000225acd
- (_Bool)isAggregableDevice;	// IMP=0x000000000022597e
- (_Bool)hasRealInputStream;	// IMP=0x00000000002258fa
- (_Bool)deviceHasNonTapStreamsInStreamList:(unsigned int *)arg1 length:(unsigned int)arg2;	// IMP=0x000000000022561d
- (_Bool)copyStreamIDArray:(unsigned int **)arg1 length:(unsigned int *)arg2;	// IMP=0x00000000002251ab
- (_Bool)isValidDevice;	// IMP=0x000000000022516f
- (void)createNameForScope:(unsigned int)arg1;	// IMP=0x0000000000225169
- (void)createUID;	// IMP=0x0000000000225134
- (void)createName;	// IMP=0x00000000002250ff
- (id)newAudioObjectStringPropertyWithSelector:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;	// IMP=0x00000000002250f2
@property(readonly, nonatomic) _Bool isBluetoothDevice;
- (id)description;	// IMP=0x000000000022507b
- (void)dealloc;	// IMP=0x0000000000225007
- (id)initWithDeviceID:(id)arg1;	// IMP=0x0000000000224f47

@end

