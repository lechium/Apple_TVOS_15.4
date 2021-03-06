//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray;

@interface TVSettingsRestrictionsRegionViewController : TSKViewController
{
    NSArray *_filteredSectionIndexTitles;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000042370
@property(copy, nonatomic) NSArray *filteredSectionIndexTitles; // @synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles;
- (id)_contentFilterRegionFormatter;	// IMP=0x0010000000042210
- (void)setCountryCode:(id)arg1;	// IMP=0x0010000000042110
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0010000000042090
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0010000000042020
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000041f20
- (id)loadSettingGroups;	// IMP=0x0010000000041030
- (void)dealloc;	// IMP=0x0010000000040fa0
- (void)viewDidLoad;	// IMP=0x0010000000040f10

@end

