//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class MISSING_TYPE, UILabel, _TtC15ConversationKit19InCallControlButton;

@interface _TtC15ConversationKit29InCallControlsParticipantCell : UICollectionViewListCell
{
    MISSING_TYPE *nameLabel;	// 8 = 0x8
    MISSING_TYPE *subtitleLabel;	// 16 = 0x10
    MISSING_TYPE *statusIcon;	// 24 = 0x18
    MISSING_TYPE *avatarView;	// 32 = 0x20
    MISSING_TYPE *actionButton;	// 40 = 0x28
    MISSING_TYPE *viewModel;	// 0 = 0x0
    MISSING_TYPE *cameraSymbolImage;	// 0 = 0x0
    MISSING_TYPE *copresenceSymbolImage;	// 0 = 0x0
    MISSING_TYPE *linkSymbolImage;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_lmiApproveButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_lmiRejectButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_kickMemberButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_contentViews;	// 0 = 0x0
    MISSING_TYPE *callDelegate;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000104a4a
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x0000000000104368
- (void)layoutSubviews;	// IMP=0x00000000001042a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000102639
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000102277
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *kickMemberButton;
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiRejectButton;
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiApproveButton;
@property(nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *actionButton; // @synthesize actionButton;
@property(nonatomic, readonly) UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, readonly) UILabel *nameLabel; // @synthesize nameLabel;

@end

