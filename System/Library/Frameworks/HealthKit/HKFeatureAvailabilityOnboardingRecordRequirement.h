//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityOnboardingRecordRequirement : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_featureIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006f048
- (void).cxx_destruct;	// IMP=0x000000000006f10a
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f073
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f050
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006f03d
- (unsigned long long)hash;	// IMP=0x000000000006efcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ef74
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006eef7
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006ee66
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x000000000006edfb

@end
