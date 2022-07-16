//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;
@protocol PKPaymentSetupAppExtensionsSectionControllerDelegate;

@interface PKPaymentSetupAppExtensionsSectionController
{
    NSMutableDictionary *_keyedListItems;	// 8 = 0x8
    struct CGSize _iconSize;	// 16 = 0x10
    unsigned long long _shouldDisplay;	// 32 = 0x20
    id <PKPaymentSetupAppExtensionsSectionControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000021c98a
@property(nonatomic) __weak id <PKPaymentSetupAppExtensionsSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)updateWithRequirements:(unsigned long long)arg1 paymentSetupProductModel:(id)arg2;	// IMP=0x000000000021c523
- (void)_updateItemIdentifier:(id)arg1 loadingIndicatorVisibility:(_Bool)arg2;	// IMP=0x000000000021c32c
- (void)didSelectItem:(id)arg1;	// IMP=0x000000000021c1bf
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x000000000021bfb4
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x000000000021bf21
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000021be4d
- (id)init;	// IMP=0x000000000021bdde

@end

