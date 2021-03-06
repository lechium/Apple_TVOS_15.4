//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKCardioFitnessMedicationsUseObject : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _options;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000093d14
- (unsigned long long)hash;	// IMP=0x0000000000093ec3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093e70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093e65
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093e42
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000093d1c
@property(readonly) _Bool medicationsAreSet;
@property(readonly) _Bool takingBetaBlockers;
@property(readonly) _Bool takingCalciumChannelBlockers;
- (id)_initWithCardioFitnessMedicationsUseOptions:(unsigned long long)arg1;	// IMP=0x0000000000093c0e

@end

