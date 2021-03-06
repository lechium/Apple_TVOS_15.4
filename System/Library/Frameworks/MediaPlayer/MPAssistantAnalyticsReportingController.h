//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface MPAssistantAnalyticsReportingController : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;	// 8 = 0x8
    NSString *_lastSiriReferenceIdentifierForPlaybackStart;	// 16 = 0x10
    NSString *_lastSiriReferenceIdentifierForWillReload;	// 24 = 0x18
    NSString *_lastSiriReferenceIdentifierWithLikelyToKeepUp;	// 32 = 0x20
    NSHashTable *_players;	// 40 = 0x28
    NSMapTable *_playerToObservedTimebase;	// 48 = 0x30
}

+ (id)sharedController;	// IMP=0x00000000000108d5
- (void).cxx_destruct;	// IMP=0x00000000000101eb
- (void)_timebaseEffectiveRateChangedNotification;	// IMP=0x00000000000101a4
- (id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg1 siriWHAMetricsInfo:(id)arg2;	// IMP=0x0000000000010004
- (void)_attemptPlaybackStartReportingEventWithPlayer:(id)arg1;	// IMP=0x000000000000fcfe
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1;	// IMP=0x000000000000fb34
- (void)_willReloadWithPlaybackContextNotification:(id)arg1;	// IMP=0x000000000000f9c8
- (void)_itemTimebaseDidChangeNotification:(id)arg1;	// IMP=0x000000000000f7f9
- (void)_itemDidChangeNotification:(id)arg1;	// IMP=0x000000000000f759
- (void)_bufferingStateDidChangeNotification:(id)arg1;	// IMP=0x000000000000f70a
- (void)logAssistantEvent:(id)arg1 withTimestamp:(unsigned long long)arg2;	// IMP=0x000000000000f67c
- (void)unregisterPlayer:(id)arg1;	// IMP=0x000000000000f5a6
- (void)registerPlayer:(id)arg1;	// IMP=0x000000000000f491
- (id)_init;	// IMP=0x000000000000f3df

@end

