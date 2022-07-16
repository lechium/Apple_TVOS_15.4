//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@interface HFLocalSettingCachingUtility : NSObject
{
    NSMutableDictionary *_settingCache;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000026236
- (void).cxx_destruct;	// IMP=0x0000000000026716
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) NSMutableDictionary *settingCache; // @synthesize settingCache=_settingCache;
- (id)_getWelcomeBannerDismissedKey:(id)arg1;	// IMP=0x0000000000026665
- (void)_setValueForSetting:(id)arg1 settingValue:(id)arg2;	// IMP=0x00000000000265a3
- (id)_getValueForSetting:(id)arg1;	// IMP=0x0000000000026434
- (void)setWelcomeBannerDismissedLocalCachedValue:(_Bool)arg1 home:(id)arg2;	// IMP=0x00000000000263ac
- (_Bool)getWelcomeBannerDismissedLocalCachedValue:(id)arg1;	// IMP=0x0000000000026338
- (id)init;	// IMP=0x000000000002628b

@end
