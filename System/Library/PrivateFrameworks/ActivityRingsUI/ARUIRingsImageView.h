//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

#import <ActivityRingsUI/ARUIRingGroupDelegate-Protocol.h>

@class ARUIRenderContext, ARUIRenderer, ARUIRingGroup, NSString;

__attribute__((visibility("hidden")))
@interface ARUIRingsImageView : UIImageView <ARUIRingGroupDelegate>
{
    ARUIRenderContext *_renderContext;	// 8 = 0x8
    _Bool _needsImageRender;	// 16 = 0x10
    ARUIRingGroup *_ringGroup;	// 24 = 0x18
    ARUIRenderer *_renderer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000ec3b
@property(readonly, nonatomic) ARUIRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) ARUIRingGroup *ringGroup; // @synthesize ringGroup=_ringGroup;
- (void)ringGroupHasUpdated:(id)arg1;	// IMP=0x000000000000ebfc
- (void)_renderImage;	// IMP=0x000000000000eb3b
- (void)layoutSubviews;	// IMP=0x000000000000ea96
- (void)_updateRenderContext;	// IMP=0x000000000000ea18
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000000e9c6
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000e974
- (id)initWithRingGroup:(id)arg1 renderer:(id)arg2;	// IMP=0x000000000000e868
- (id)initWithRingGroup:(id)arg1;	// IMP=0x000000000000e808

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

