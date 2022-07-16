//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSyncSettingsProviderDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class CNContactStore, DNDSSyncSettingsProvider, NSString;
@protocol DNDSBackingStore, DNDSSettingsManagerDelegate, OS_dispatch_queue;

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <DNDSBackingStore> _backingStore;	// 16 = 0x10
    CNContactStore *_contactStore;	// 24 = 0x18
    DNDSSyncSettingsProvider *_syncSettingsProvider;	// 32 = 0x20
    id <DNDSSettingsManagerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003e286
@property(nonatomic) __weak id <DNDSSettingsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)fallbackConfiguration;	// IMP=0x000000000003e246
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(_Bool)arg2;	// IMP=0x000000000003da7f
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier; // @dynamic sysdiagnoseDataIdentifier;
- (void)syncSettingsProvider:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2;	// IMP=0x000000000003d9fd
- (unsigned long long)_writeSettingsRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003d852
- (unsigned long long)_saveConfiguration:(id)arg1 forModeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003d66d
- (unsigned long long)_saveBehaviorSettings:(id)arg1 scheduleSettings:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003d3ec
- (id)_readSettingsReturningError:(id *)arg1;	// IMP=0x000000000003d336
- (void)setPairSyncEnabled:(_Bool)arg1;	// IMP=0x000000000003d320
- (id)syncSettingsWithError:(id *)arg1;	// IMP=0x000000000003d30a
- (_Bool)setScheduleSettings:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000003d268
- (id)scheduleSettingsWithError:(id *)arg1;	// IMP=0x000000000003d1cf
- (id)phoneCallBypassSettingsWithError:(id *)arg1;	// IMP=0x000000000003d136
- (_Bool)setBehaviorSettings:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000003d094
- (id)behaviorSettingsWithError:(id *)arg1;	// IMP=0x000000000003cffb
- (void)pairedDeviceDidChange;	// IMP=0x000000000003cfe5
- (void)dealloc;	// IMP=0x000000000003cfaf
- (id)initWithBackingStore:(id)arg1 contactStore:(id)arg2;	// IMP=0x000000000003cea5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

