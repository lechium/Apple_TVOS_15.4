//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/NSSecureCoding-Protocol.h>
#import <SiriVirtualDeviceResolution/_TtP27SiriVirtualDeviceResolution18CapabilityMatching_-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC27SiriVirtualDeviceResolution23AudioPlaybackCapability : NSObject <_TtP27SiriVirtualDeviceResolution18CapabilityMatching_, NSSecureCoding>
{
    MISSING_TYPE *primitivesMap;	// 8 = 0x8
    MISSING_TYPE *key;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e5e0
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;	// IMP=0x000000000000e030
- (void).cxx_destruct;	// IMP=0x000000000000e880
- (id)init;	// IMP=0x000000000000e820
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e780
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e730
- (_Bool)matchesWithDescriptions:(id)arg1;	// IMP=0x000000000000e560
@property(nonatomic, readonly) long long supportsAudioPlayback;
- (id)initWithStatus:(long long)arg1;	// IMP=0x000000000000ded0
@property(nonatomic, copy) NSString *key;

@end
