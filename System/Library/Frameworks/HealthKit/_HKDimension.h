//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKDimension : NSObject
{
    _HKFactorization *_reduction;	// 8 = 0x8
    struct os_unfair_lock_s _reductionLock;	// 16 = 0x10
}

+ (id)dimensionFromString:(id)arg1;	// IMP=0x00000000000d8f64
- (void).cxx_destruct;	// IMP=0x00000000000d92da
- (id)_baseDimensions;	// IMP=0x0000000000221010
- (id)description;	// IMP=0x00000000000d928a
- (id)reduction;	// IMP=0x00000000000d9085
- (id)init;	// IMP=0x000000000001b222

@end
