//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIContentSizeCategoryPreference;

__attribute__((visibility("hidden")))
@interface _UIContentSizeCategoryPreferenceSystem
{
    _Bool _observingNotification;	// 24 = 0x18
    _Bool _didCheckForPreferredContentSizeCategoryOverride;	// 25 = 0x19
    _Bool _applicationOverridesPreferredContentSizeCategory;	// 26 = 0x1a
    UIContentSizeCategoryPreference *_overridePreferences;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000dced0e
@property(retain, nonatomic) UIContentSizeCategoryPreference *overridePreferences; // @synthesize overridePreferences=_overridePreferences;
- (void)_endObservingPreferredContentSizeChangedNotification;	// IMP=0x0000000000dcec4b
- (void)_beginObservingPreferredContentSizeChangedNotification;	// IMP=0x0000000000dceb66
- (void)setPreferredContentSizeCategory:(id)arg1;	// IMP=0x0000000000dce9e7
- (void)_postContentSizeCategoryDidChangeNotification;	// IMP=0x0000000000dce80c
- (void)_updateContentSizeCategory:(id)arg1 carPlay:(id)arg2 postingNotification:(_Bool)arg3;	// IMP=0x0000000000dce4e3
- (void)_updateContentSizeCategoriesFromUserDefaultsPostingNotification:(_Bool)arg1;	// IMP=0x0000000000dce44d
- (id)description;	// IMP=0x0000000000dce1ae
- (void)dealloc;	// IMP=0x0000000000dce170
- (void)checkForChanges;	// IMP=0x0000000000dce149
- (void)_readAndObservePreferences;	// IMP=0x0000000000dce119
- (id)initAsSystem;	// IMP=0x0000000000dce0f0

@end
