//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REBluetoothDeviceRelevanceProvider
{
    _Bool _connectedToCar;	// 8 = 0x8
    _Bool _connectedToSpeaker;	// 9 = 0x9
}

+ (id)relevanceSimulatorID;	// IMP=0x00000000000d8a70
@property(readonly, nonatomic) _Bool connectedToSpeaker; // @synthesize connectedToSpeaker=_connectedToSpeaker;
@property(readonly, nonatomic) _Bool connectedToCar; // @synthesize connectedToCar=_connectedToCar;
- (id)description;	// IMP=0x00000000000d8da2
- (unsigned long long)_hash;	// IMP=0x00000000000d8d7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d8cdf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d8c84
- (id)initWithConnectionToCar:(_Bool)arg1 connectionToSpeaker:(_Bool)arg2;	// IMP=0x00000000000d8c30
- (id)dictionaryEncoding;	// IMP=0x00000000000d8b3f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000d8a7d

@end
