//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (PhotosPlayer)
- (void)_is_removeBlurFilterIfNeeded;	// IMP=0x0000000000001f16
- (void)is_removeFilter:(id)arg1;	// IMP=0x0000000000001e5a
- (void)is_addFilter:(id)arg1;	// IMP=0x0000000000001d1e
- (void)is_addBlurFilterIfNeeded;	// IMP=0x0000000000001b2f
- (id)_is_blurFilter;	// IMP=0x0000000000001b16
- (void)_is_setBlurFilter:(id)arg1;	// IMP=0x0000000000001afd
@property(nonatomic, setter=is_setBlurRadius:) double is_blurRadius;
@end

