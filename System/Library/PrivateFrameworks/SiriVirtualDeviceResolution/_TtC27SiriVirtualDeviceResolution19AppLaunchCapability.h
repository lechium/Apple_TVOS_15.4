//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/NSSecureCoding-Protocol.h>
#import <SiriVirtualDeviceResolution/_TtP27SiriVirtualDeviceResolution18CapabilityMatching_-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC27SiriVirtualDeviceResolution19AppLaunchCapability : NSObject <_TtP27SiriVirtualDeviceResolution18CapabilityMatching_, NSSecureCoding>
{
    MISSING_TYPE *primitivesMap;	// 8 = 0x8
    MISSING_TYPE *key;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000030230
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;	// IMP=0x000000000002fc80
- (void).cxx_destruct;	// IMP=0x00000000000304d0
- (id)init;	// IMP=0x0000000000030470
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000303e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000030260
- (_Bool)matchesWithDescriptions:(id)arg1;	// IMP=0x00000000000301b0
@property(nonatomic, readonly) long long supportsAppLaunch;
- (id)initWithStatus:(long long)arg1;	// IMP=0x000000000002fb20
@property(nonatomic, copy) NSString *key;

@end

