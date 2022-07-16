//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCoding-Protocol.h>

@class UIView;
@protocol UILayoutContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView <NSCoding>
{
    UIView *_shadowView;	// 112 = 0x70
    struct {
        unsigned int delegateRespondsToSemanticContentAttributeChanged:1;
        unsigned int delegateRespondsToViewWillLayoutSubviews:1;
        unsigned int delegateRespondsToWillMoveToWindow:1;
        unsigned int delegateRespondsToDidMoveToWindow:1;
    } _layoutContainerViewFlags;	// 120 = 0x78
    _Bool _usesInnerShadow;	// 124 = 0x7c
    _Bool _usesRoundedCorners;	// 125 = 0x7d
    id <UILayoutContainerViewDelegate> _delegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000003d1ce7
@property(nonatomic) _Bool usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;
@property(nonatomic) _Bool usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property(nonatomic) __weak id <UILayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x00000000003d1ca4
- (void)dealloc;	// IMP=0x00000000003d1c66
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000003d1bf6
- (void)addSubview:(id)arg1;	// IMP=0x00000000003d1ba0
- (void)_tearDownShadowViews;	// IMP=0x00000000003d1b68
- (void)_installShadowViews;	// IMP=0x00000000003d15c9
- (void)_updateShadowViews;	// IMP=0x00000000003d1591
- (void)didMoveToWindow;	// IMP=0x00000000003d13d2
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000003d135d
- (void)layoutSubviews;	// IMP=0x00000000003d1258
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000003d1186
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000003d10a9
- (void)_setFlagsFromDelegate:(id)arg1;	// IMP=0x00000000003d0ff1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003d0ef0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003d0e3f

@end

