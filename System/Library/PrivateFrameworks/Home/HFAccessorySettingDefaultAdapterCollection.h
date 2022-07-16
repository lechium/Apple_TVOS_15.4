//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFAccessorySettingAdapter, HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject
{
    HFAccessorySettingManagedConfigurationAdapter *_managedConfigurationAdapter;	// 8 = 0x8
    HFAccessorySettingSiriLanguageAdapter *_siriLanguageAdapter;	// 16 = 0x10
    HFAccessorySettingAdapter *_mobileTimerAdapter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006c858
@property(retain, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter; // @synthesize mobileTimerAdapter=_mobileTimerAdapter;
@property(retain, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter; // @synthesize siriLanguageAdapter=_siriLanguageAdapter;
@property(retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter; // @synthesize managedConfigurationAdapter=_managedConfigurationAdapter;
@property(readonly, nonatomic) NSSet *allAdapters;

@end

