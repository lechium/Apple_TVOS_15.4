//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TVCKContentSource, TVCKTertiaryView;
@protocol TVCKContentSourcePickerDelegate;

@interface TVCKContentSourcePicker : UIView
{
    unsigned long long _style;	// 8 = 0x8
    id <TVCKContentSourcePickerDelegate> _delegate;	// 16 = 0x10
    UIView *_titleView;	// 24 = 0x18
    NSArray *_sources;	// 32 = 0x20
    TVCKContentSource *_selectedSource;	// 40 = 0x28
    TVCKTertiaryView *_tertiaryView;	// 48 = 0x30
    id _moreSourcesSource;	// 56 = 0x38
    NSArray *_presentationSources;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000051f9d
@property(copy, nonatomic) NSArray *presentationSources; // @synthesize presentationSources=_presentationSources;
@property(retain, nonatomic) id moreSourcesSource; // @synthesize moreSourcesSource=_moreSourcesSource;
@property(retain, nonatomic) TVCKTertiaryView *tertiaryView; // @synthesize tertiaryView=_tertiaryView;
@property(retain, nonatomic) TVCKContentSource *selectedSource; // @synthesize selectedSource=_selectedSource;
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <TVCKContentSourcePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)layoutSubviews;	// IMP=0x0000000000051e26
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000051db8
- (_Bool)canBecomeFocused;	// IMP=0x0000000000051ce2
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000051af5
- (id)preferredFocusedView;	// IMP=0x0000000000051a94
@property(readonly, copy, nonatomic) NSString *moreSourcesTitle;
- (void)_setSelectedSource:(id)arg1;	// IMP=0x000000000005169b
- (unsigned long long)_buttonStyleForPickerStyle:(unsigned long long)arg1;	// IMP=0x0000000000051275
- (id)_existingButtonForSource:(id)arg1;	// IMP=0x00000000000510d4
- (id)_existingButtons;	// IMP=0x0000000000050f19
- (void)_didPressMoreSourcesButton:(id)arg1;	// IMP=0x0000000000050d2f
- (id)_tertiaryViewsWithTitleView:(id)arg1 buttons:(id)arg2;	// IMP=0x0000000000050c96
- (id)_visibleSources;	// IMP=0x0000000000050af3
- (id)_constructButtonsForPresentationSources:(id)arg1 withSelectedSource:(id)arg2;	// IMP=0x00000000000508ae
- (void)_configureButton:(id)arg1 withSource:(id)arg2 selectedSource:(id)arg3;	// IMP=0x0000000000050529
- (id)_presentationSourcesForSources:(id)arg1 withSelectedSource:(id)arg2;	// IMP=0x00000000000503ad
- (unsigned long long)_maxNumberOfButtons;	// IMP=0x00000000000503a2
- (void)_didSelectMoreSources:(id)arg1;	// IMP=0x0000000000050328
- (void)_didSelectSource:(id)arg1;	// IMP=0x00000000000502ae
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005026a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000005014b

@end
