//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFAccessorySettingsManagerProtocol-Protocol.h>
#import <Home/HFHomeKitAccessorySettingsDataSourceDelegate-Protocol.h>

@class HFSiriLanguageOption, HMAccessorySettingsController, HMHome, NAFuture, NSHashTable, NSSet, NSString, NSUUID;

@interface HFSiriLanguageOptionsManager : NSObject <HFHomeKitAccessorySettingsDataSourceDelegate, HFAccessorySettingsManagerProtocol>
{
    HFSiriLanguageOption *_selectedLanguageOption;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
    NSUUID *_accessoryIdentifier;	// 32 = 0x20
    HMAccessorySettingsController *_settingsController;	// 40 = 0x28
    NSSet *_availableLanguageOptions;	// 48 = 0x30
    NAFuture *_availableLanguagesFuture;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000017eca6
@property(retain, nonatomic) NAFuture *availableLanguagesFuture; // @synthesize availableLanguagesFuture=_availableLanguagesFuture;
@property(copy, nonatomic) NSSet *availableLanguageOptions; // @synthesize availableLanguageOptions=_availableLanguageOptions;
@property(retain, nonatomic) HMAccessorySettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property(retain, nonatomic) NSUUID *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption; // @synthesize selectedLanguageOption=_selectedLanguageOption;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2;	// IMP=0x000000000017ebe7
- (id)_settingKeyPaths;	// IMP=0x000000000017eb6f
- (void)_updateSettingsAndNotifyObservers:(id)arg1;	// IMP=0x000000000017de6a
- (void)_subscribeToSiriLanguageSettings;	// IMP=0x000000000017dc08
- (void)_fetchAvailableLanguagesAndGenerateOptions;	// IMP=0x000000000017da16
- (id)updateSelectedLanguageOption:(id)arg1 accessoryIdentifier:(id)arg2;	// IMP=0x000000000017ce8c
- (id)updateSelectedLanguageOption:(id)arg1;	// IMP=0x000000000017ce0f
- (void)removeObserver:(id)arg1;	// IMP=0x000000000017cd9d
- (void)addObserver:(id)arg1;	// IMP=0x000000000017cd2b
- (id)preferredOutputVoiceOptionsForSelectedOption;	// IMP=0x000000000017caa8
- (id)preferredOutputVoiceAccentOptionsForSelectedOption;	// IMP=0x000000000017c3fc
- (id)preferredRecognitionLanguageOptionsForSelectedOption;	// IMP=0x000000000017bd0d
- (id)availableSiriLanguageOptions;	// IMP=0x000000000017bc63
- (id)initWithSettingsController:(id)arg1 accessoryIdentifier:(id)arg2 home:(id)arg3;	// IMP=0x000000000017bada
- (id)initWithSettingsController:(id)arg1 sourceItem:(id)arg2 home:(id)arg3;	// IMP=0x000000000017b9f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
