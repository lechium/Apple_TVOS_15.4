//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDNaturalLightingCurve, NSString, NSTimeZone;

@interface HMDNaturalLightingContext : HMFObject <HMFLogging, NSSecureCoding, NSCopying>
{
    HMDNaturalLightingCurve *_curve;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000a0c79f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a0c797
- (void).cxx_destruct;	// IMP=0x0000000000a0c766
@property(readonly, copy) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, copy) HMDNaturalLightingCurve *curve; // @synthesize curve=_curve;
- (id)attributeDescriptions;	// IMP=0x0000000000a0c60e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a0c603
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a0c43c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a0c38e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a0c157
- (id)initWithCurve:(id)arg1 timeZone:(id)arg2;	// IMP=0x0000000000a0c090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

