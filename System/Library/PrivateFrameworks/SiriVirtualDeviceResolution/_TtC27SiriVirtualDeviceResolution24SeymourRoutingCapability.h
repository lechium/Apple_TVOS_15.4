//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/NSSecureCoding-Protocol.h>
#import <SiriVirtualDeviceResolution/_TtP27SiriVirtualDeviceResolution18CapabilityMatching_-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC27SiriVirtualDeviceResolution24SeymourRoutingCapability : NSObject <_TtP27SiriVirtualDeviceResolution18CapabilityMatching_, NSSecureCoding>
{
    MISSING_TYPE *primitivesMap;	// 8 = 0x8
    MISSING_TYPE *key;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034010
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;	// IMP=0x0000000000033a60
- (void).cxx_destruct;	// IMP=0x00000000000342b0
- (id)init;	// IMP=0x0000000000034250
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000341c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034040
- (_Bool)matchesWithDescriptions:(id)arg1;	// IMP=0x0000000000033f90
@property(nonatomic, readonly) long long supportsSeymourRouting;
- (id)initWithStatus:(long long)arg1;	// IMP=0x0000000000033900
@property(nonatomic, copy) NSString *key;

@end

