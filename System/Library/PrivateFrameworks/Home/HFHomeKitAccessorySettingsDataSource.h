//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HMAccessorySettingsDataSourceDelegate-Protocol.h>

@class HMAccessorySettingsDataSource, NSHashTable, NSString;

@interface HFHomeKitAccessorySettingsDataSource : NSObject <HMAccessorySettingsDataSourceDelegate>
{
    HMAccessorySettingsDataSource *_dataSource;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b754
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) HMAccessorySettingsDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)accessorySettingsDataSource:(id)arg1 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg2 settings:(id)arg3;	// IMP=0x000000000002b4a7
- (id)hf_defaultSettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3;	// IMP=0x000000000002b3f5
- (void)hf_fetchAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000002b32e
- (void)hf_subscribeToAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000002b18e
- (id)hf_localizedTitleForKeyPath:(id)arg1;	// IMP=0x000000000002b10b
- (void)updateSettingValue:(id)arg1 forKeyPath:(id)arg2 accessoryIdentifier:(id)arg3;	// IMP=0x000000000002af53
- (void)removeObserver:(id)arg1;	// IMP=0x000000000002adff
- (void)addObserver:(id)arg1;	// IMP=0x000000000002ad8d
- (id)initWithHomeManager:(id)arg1;	// IMP=0x000000000002accd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

