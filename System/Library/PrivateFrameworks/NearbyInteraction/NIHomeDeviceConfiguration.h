//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface NIHomeDeviceConfiguration
{
    _Bool _anchor;	// 8 = 0x8
    unsigned long long _allowedDevices;	// 16 = 0x10
    NSData *_sessionKey;	// 24 = 0x18
    NSArray *_monitoredRegions;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fa5e
+ (id)new;	// IMP=0x000000000000f8e2
- (void).cxx_destruct;	// IMP=0x0000000000010336
@property(copy) NSArray *monitoredRegions; // @synthesize monitoredRegions=_monitoredRegions;
@property(getter=isAnchor) _Bool anchor; // @synthesize anchor=_anchor;
@property(copy) NSData *sessionKey; // @synthesize sessionKey=_sessionKey;
@property unsigned long long allowedDevices; // @synthesize allowedDevices=_allowedDevices;
- (id)descriptionInternal;	// IMP=0x00000000000101d1
- (id)description;	// IMP=0x0000000000010117
- (unsigned long long)hash;	// IMP=0x00000000000100a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fe84
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fbc5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fad8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fa66
- (id)initWithAllowedDevices:(unsigned long long)arg1 sessionKey:(id)arg2 asAnchor:(_Bool)arg3 regions:(id)arg4;	// IMP=0x000000000000f972
- (id)initWithRegions:(id)arg1;	// IMP=0x000000000000f8f3
- (id)init;	// IMP=0x000000000000f852

@end

