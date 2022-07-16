//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions;

@interface ADRapportLinkConfiguration : NSObject
{
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 8 = 0x8
    ADRapportLinkTransportOptions *_transportOptions;	// 16 = 0x10
    long long _enablesProximityTracking;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000013e6f5
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000013eb33
- (void).cxx_destruct;	// IMP=0x001000000013e8da
@property(readonly, nonatomic) long long enablesProximityTracking; // @synthesize enablesProximityTracking=_enablesProximityTracking;
@property(readonly, copy, nonatomic) ADRapportLinkTransportOptions *transportOptions; // @synthesize transportOptions=_transportOptions;
- (id)discoveryOptions;	// IMP=0x001000000013e8bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000013e810
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000013e6fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013e6ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013e5c5
- (unsigned long long)hash;	// IMP=0x001000000013e53f
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000013e322
- (id)description;	// IMP=0x001000000013e30e
- (id)initWithDiscoveryOptions:(id)arg1 transportOptions:(id)arg2 enablesProximityTracking:(long long)arg3;	// IMP=0x001000000013e24f
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000013eba2

@end

