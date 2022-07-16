//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@interface CLLocationSourceInformation : NSObject <NSCopying, NSSecureCoding>
{
    _Bool isSimulatedBySoftware;	// 8 = 0x8
    _Bool isProducedByAccessory;	// 9 = 0x9
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006cdc1
@property(readonly, nonatomic) _Bool isProducedByAccessory; // @synthesize isProducedByAccessory;
@property(readonly, nonatomic) _Bool isSimulatedBySoftware; // @synthesize isSimulatedBySoftware;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006cf56
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006ce81
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006cdc9
- (id)initWithSoftwareSimulationState:(_Bool)arg1 andExternalAccessoryState:(_Bool)arg2;	// IMP=0x000000000006cd7b

@end

