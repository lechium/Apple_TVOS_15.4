//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_providerQueue;	// 8 = 0x8
    _Bool _isCarPlayConnected;	// 16 = 0x10
    unsigned long long _lastKnownAvailableAnnouncementRequestTypes;	// 24 = 0x18
    unsigned long long _lastKnownEligibleAnnouncementRequestTypes;	// 32 = 0x20
    NSHashTable *_delegates;	// 40 = 0x28
}

+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x0020000000111504
+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;	// IMP=0x00100000001113cf
+ (long long)platform;	// IMP=0x00100000001113c4
+ (id)provider;	// IMP=0x00100000001112d8
- (void).cxx_destruct;	// IMP=0x0020000000111a6f
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(unsigned long long)arg1;	// IMP=0x00100000001118f8
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(unsigned long long)arg1;	// IMP=0x00100000001118da
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:(_Bool)arg1;	// IMP=0x00100000001118d2
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001117f1
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000111749
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000111691
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;	// IMP=0x0010000000111687
- (void)addDelegate:(id)arg1;	// IMP=0x0010000000111671
- (void)_updateForCarPlaySessionConnected:(_Bool)arg1;	// IMP=0x00100000001112a7
- (void)updateForCarPlaySessionConnected:(_Bool)arg1;	// IMP=0x001000000011123c
- (void)_isCarPlayConnectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000011120e
- (void)isCarPlayConnectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000111166
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001110ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

