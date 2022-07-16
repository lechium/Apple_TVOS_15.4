//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UISearchBarDelegate-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel, UISearchBar;
@protocol PKPaymentSetupHeroTitleViewDelegate;

@interface PKPaymentSetupHeroTitleView : UIView <UISearchBarDelegate>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLbel;	// 16 = 0x10
    UISearchBar *_searchBar;	// 24 = 0x18
    UIActivityIndicatorView *_activityIndicator;	// 32 = 0x20
    _Bool _showSearchBar;	// 40 = 0x28
    _Bool _showSpinner;	// 41 = 0x29
    id <PKPaymentSetupHeroTitleViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000041ba6b
@property(nonatomic) __weak id <PKPaymentSetupHeroTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showSpinner; // @synthesize showSpinner=_showSpinner;
@property(nonatomic) _Bool showSearchBar; // @synthesize showSearchBar=_showSearchBar;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x000000000041ba06
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x000000000041b967
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x000000000041b952
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x000000000041b8e9
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x000000000041b87d
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000000041b80a
- (void)setSearchBarDefaultText:(id)arg1;	// IMP=0x000000000041b7ed
- (void)setTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000041b76d
- (void)_setLabelFonts;	// IMP=0x000000000041b658
- (void)_contentSizeCategoryDidChange;	// IMP=0x000000000041b62a
- (CDStruct_07baa4ee)heightBoundsForWidth:(double)arg1;	// IMP=0x000000000041b391
- (void)layoutSubviews;	// IMP=0x000000000041aeb7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000041ae82
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000041ada8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000041ab3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
