//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CAAnimationGroup
{
}

@property(copy) NSArray *animations;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;	// IMP=0x00000000001bf551
- (void)CA_prepareRenderValue;	// IMP=0x00000000001bf4d0
- (void *)_copyRenderAnimationForLayer:(id)arg1;	// IMP=0x00000000001bf269
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;	// IMP=0x00000000001bf162
- (void)setDefaultDuration:(double)arg1;	// IMP=0x00000000001bf09a

@end
