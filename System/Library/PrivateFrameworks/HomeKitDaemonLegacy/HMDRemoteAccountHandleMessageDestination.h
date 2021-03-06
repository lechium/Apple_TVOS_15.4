//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle, NSDictionary;

@interface HMDRemoteAccountHandleMessageDestination
{
    _Bool _multicast;	// 8 = 0x8
    HMDAccountHandle *_handle;	// 16 = 0x10
    NSDictionary *_deviceCapabilities;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00000000006ec85c
- (void).cxx_destruct;	// IMP=0x00000000006ec82b
@property(readonly, copy) NSDictionary *deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property(readonly, getter=isMulticast) _Bool multicast; // @synthesize multicast=_multicast;
@property(readonly, copy) HMDAccountHandle *handle; // @synthesize handle=_handle;
- (id)remoteDestinationString;	// IMP=0x00000000006ec79d
- (id)description;	// IMP=0x00000000006ec789
- (id)debugDescription;	// IMP=0x00000000006ec772
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000006ec5ad
- (id)shortDescription;	// IMP=0x00000000006ec4eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006ec324
- (unsigned long long)hash;	// IMP=0x00000000006ec297
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3 deviceCapabilities:(id)arg4;	// IMP=0x00000000006ec196
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(_Bool)arg3;	// IMP=0x00000000006ec181
- (id)initWithTarget:(id)arg1;	// IMP=0x00000000006ec0cb

@end

