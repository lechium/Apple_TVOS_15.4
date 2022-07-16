//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVirtualDeviceResolution/NSSecureCoding-Protocol.h>

@class NSNumber, NSSet, NSString, _TtC27SiriVirtualDeviceResolution21CapabilityDescription;

@interface SVDCapabilityDescription : NSObject <NSSecureCoding>
{
    _TtC27SiriVirtualDeviceResolution21CapabilityDescription *_backing;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000033fa
- (void).cxx_destruct;	// IMP=0x00000000000034b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003425
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003402
@property(readonly, nonatomic) NSNumber *valueRangeUpperBound;
@property(readonly, nonatomic) NSNumber *valueRangeLowerBound;
@property(readonly, nonatomic) NSSet *valueSet;
@property(readonly, nonatomic) NSString *capabilityKey;
@property(readonly, nonatomic) NSString *key;
- (id)initWithBacking:(id)arg1;	// IMP=0x0000000000003321
- (id)initWithKey:(id)arg1 valueRangeWithLowerBound:(double)arg2 upperBound:(double)arg3;	// IMP=0x000000000000328c
- (id)initWithKey:(id)arg1 valueSet:(id)arg2;	// IMP=0x00000000000031f5

@end

