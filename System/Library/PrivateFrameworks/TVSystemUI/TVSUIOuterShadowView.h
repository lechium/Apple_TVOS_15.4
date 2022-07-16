//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@interface TVSUIOuterShadowView : UIImageView
{
    struct _TVSUIOuterShadowViewAttributes _attributes;	// 8 = 0x8
}

+ (id)_shadowImageForView:(id)arg1;	// IMP=0x00000000000182fc
@property(readonly, nonatomic) struct _TVSUIOuterShadowViewAttributes attributes; // @synthesize attributes=_attributes;
- (id)_cacheKey;	// IMP=0x000000000001829d
@property(readonly, nonatomic) double shadowRadius;
@property(readonly, nonatomic) struct CGSize shadowOffset;
@property(readonly, nonatomic) _Bool continousCorners;
@property(readonly, nonatomic) double cornerRadius;
- (void)didMoveToWindow;	// IMP=0x00000000000181a9
- (id)initWithCornerRadius:(double)arg1 continuousCorners:(_Bool)arg2 shadowOffset:(struct CGSize)arg3 shadowRadius:(double)arg4;	// IMP=0x00000000000180df

@end
