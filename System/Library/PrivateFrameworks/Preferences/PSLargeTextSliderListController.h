//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PSSpecifier;

@interface PSLargeTextSliderListController
{
    PSSpecifier *_sliderGroupSpecifier;	// 192 = 0xc0
    _Bool _viewIsDisappearing;	// 200 = 0xc8
    _Bool _showsExtendedRangeSwitch;	// 201 = 0xc9
    _Bool _usesExtendedRange;	// 202 = 0xca
    _Bool _showsLargerSizesHelpText;	// 203 = 0xcb
    NSArray *_contentSizeCategories;	// 208 = 0xd0
    long long _selectedCategoryIndex;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000000484d2
@property(nonatomic) _Bool showsLargerSizesHelpText; // @synthesize showsLargerSizesHelpText=_showsLargerSizesHelpText;
@property(nonatomic) _Bool usesExtendedRange; // @synthesize usesExtendedRange=_usesExtendedRange;
@property(nonatomic) _Bool showsExtendedRangeSwitch; // @synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch;
@property(nonatomic) long long selectedCategoryIndex; // @synthesize selectedCategoryIndex=_selectedCategoryIndex;
@property(copy, nonatomic) NSArray *contentSizeCategories; // @synthesize contentSizeCategories=_contentSizeCategories;
- (id)getDynamicTypeValueForSpecifier:(id)arg1;	// IMP=0x0000000000048381
- (void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x0000000000047fe1
- (id)specifiers;	// IMP=0x0000000000047be7
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000047bab
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000047b6f
- (void)loadView;	// IMP=0x00000000000478aa
- (id)initUsingExtendedRange:(_Bool)arg1;	// IMP=0x0000000000047868

@end
