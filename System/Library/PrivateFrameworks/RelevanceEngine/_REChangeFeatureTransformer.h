//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface _REChangeFeatureTransformer
{
    double _interval;	// 8 = 0x8
    NSDate *_lastChangeDate;	// 16 = 0x10
    unsigned long long _value;	// 24 = 0x18
}

+ (_Bool)supportsInvalidation;	// IMP=0x000000000008bcab
+ (id)functionName;	// IMP=0x000000000008bc9e
- (void).cxx_destruct;	// IMP=0x000000000008c269
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008c21a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008c1a7
- (unsigned long long)hash;	// IMP=0x000000000008c14d
- (_Bool)_validateWithFeatures:(id)arg1;	// IMP=0x000000000008c117
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008bf08
- (unsigned long long)_outputType;	// IMP=0x000000000008bf00
- (unsigned long long)_featureCount;	// IMP=0x000000000008bef5
- (long long)_bitCount;	// IMP=0x000000000008beea
- (void)configureWithInvocation:(id)arg1;	// IMP=0x000000000008bde6
- (void)_updateConfigurationForInterval:(double)arg1;	// IMP=0x000000000008bd7e
- (void)dealloc;	// IMP=0x000000000008bd07
- (id)init;	// IMP=0x000000000008bcb3

@end

