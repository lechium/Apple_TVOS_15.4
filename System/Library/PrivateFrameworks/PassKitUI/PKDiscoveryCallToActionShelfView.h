//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKLinkedApplicationObserver-Protocol.h>

@class NSString, PKContinuousButton, PKDiscoveryCallToAction, PKDiscoveryCallToActionShelf, PKDiscoveryMedia, PKLinkedApplication, UIImageView, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionShelfView <PKLinkedApplicationObserver>
{
    PKDiscoveryCallToActionShelf *_ctaShelf;	// 8 = 0x8
    PKDiscoveryCallToAction *_callToAction;	// 16 = 0x10
    PKDiscoveryMedia *_media;	// 24 = 0x18
    PKLinkedApplication *_linkedApplication;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_editorialDescriptionLabel;	// 48 = 0x30
    UIImageView *_iconImageView;	// 56 = 0x38
    PKContinuousButton *_button;	// 64 = 0x40
    struct CGSize _iconSize;	// 72 = 0x48
    _Bool _showActivityIndicator;	// 88 = 0x58
    id <PKDiscoveryCardViewDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000003b8d67
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) __weak id <PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)_iconSize;	// IMP=0x00000000003b8bd6
- (struct CGSize)_sizeForMedia;	// IMP=0x00000000003b8b5a
- (double)_leadingEditorialTextSpace;	// IMP=0x00000000003b8af7
- (double)_leadingTitleSpace;	// IMP=0x00000000003b8a94
- (void)_buttonPressed:(id)arg1;	// IMP=0x00000000003b89bb
- (void)linkedApplicationDidChangeState:(id)arg1;	// IMP=0x00000000003b88b7
- (void)setImage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003b8785
- (void)layoutSubviews;	// IMP=0x00000000003b832e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003b81b9
- (id)initWithShelf:(id)arg1;	// IMP=0x00000000003b7978

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

