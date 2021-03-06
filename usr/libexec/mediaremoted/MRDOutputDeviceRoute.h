//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAVOutputDevice;

@interface MRDOutputDeviceRoute
{
    MRAVOutputDevice *_outputDevice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000dde83
@property(readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x00100000000dde55
- (id)extendedInfo;	// IMP=0x00100000000dddec
- (id)dictionary;	// IMP=0x00100000000dda78
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x00100000000dda70
- (_Bool)canBeDefaultRoute;	// IMP=0x00100000000dda68
- (_Bool)isSpeakerRoute;	// IMP=0x00100000000dd9ce
- (_Bool)isPicked;	// IMP=0x00100000000dd7cd
- (_Bool)isOutputRoute;	// IMP=0x00100000000dd7c5
- (_Bool)isInputRoute;	// IMP=0x00100000000dd7bd
- (id)modelName;	// IMP=0x00100000000dd7a0
- (id)type;	// IMP=0x00100000000dd6fa
- (id)name;	// IMP=0x00100000000dd6dd
- (id)MACAddress;	// IMP=0x00100000000dd6c0
- (id)uniqueIdentifier;	// IMP=0x00100000000dd66c
- (id);	// IMP=0x00100000000dd5f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000dd563
- (unsigned long long)hash;	// IMP=0x00100000000dd546
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x00100000000dd4d8

@end

