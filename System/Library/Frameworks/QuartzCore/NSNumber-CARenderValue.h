//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumber.h>

@interface NSNumber (CARenderValue)
- (unsigned long long)CA_copyNumericValue:(double [20])arg1;	// IMP=0x000000000004be06
- (struct Object *)CA_copyRenderValue;	// IMP=0x000000000004bdb6
- (double)CA_distanceToValue:(id)arg1;	// IMP=0x00000000001c7540
- (id)CA_roundToIntegerFromValue:(id)arg1;	// IMP=0x00000000001c74d5
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;	// IMP=0x00000000001c739c
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x00000000001c7315
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;	// IMP=0x00000000001c72ad
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x0000000000215ad4
- (id)CAMLType;	// IMP=0x0000000000215a74
@end
