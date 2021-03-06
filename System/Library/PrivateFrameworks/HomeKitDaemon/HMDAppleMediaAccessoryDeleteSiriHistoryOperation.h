//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class AFSettingsConnection, NSString;

@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation <HMFLogging>
{
    AFSettingsConnection *_settingsConnection;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000006c1c4c
- (void).cxx_destruct;	// IMP=0x00000000006c1aa7
@property(readonly) AFSettingsConnection *settingsConnection; // @synthesize settingsConnection=_settingsConnection;
- (void)main;	// IMP=0x00000000006c1963
- (id)initWithSettingsConnection:(id)arg1;	// IMP=0x00000000006c18ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

