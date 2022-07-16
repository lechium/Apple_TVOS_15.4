//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration
{
    _Bool _canResumeFromLastDatum;	// 8 = 0x8
    HKQuantityType *_quantityType;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000145d24
- (void).cxx_destruct;	// IMP=0x0000000000145f7c
@property(readonly, nonatomic) _Bool canResumeFromLastDatum; // @synthesize canResumeFromLastDatum=_canResumeFromLastDatum;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000145e69
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000145d2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000145cd7
- (id)initWithQuantityType:(id)arg1 bundleIdentifier:(id)arg2 canResumeFromLastDatum:(_Bool)arg3;	// IMP=0x0000000000145c03

@end

