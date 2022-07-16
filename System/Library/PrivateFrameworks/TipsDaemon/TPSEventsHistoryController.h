//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, TPSTipStatusController;
@protocol OS_dispatch_queue;

@interface TPSEventsHistoryController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSDictionary *_contextualEventsForIdentifiers;	// 16 = 0x10
    TPSTipStatusController *_tipStatusController;	// 24 = 0x18
    NSMutableDictionary *_contextualEventIdentifierToContextualEventMap;	// 32 = 0x20
}

+ (void)removeEventHistoryCache;	// IMP=0x0000000000029d95
- (void).cxx_destruct;	// IMP=0x000000000002bfb6
@property(retain, nonatomic) NSMutableDictionary *contextualEventIdentifierToContextualEventMap; // @synthesize contextualEventIdentifierToContextualEventMap=_contextualEventIdentifierToContextualEventMap;
@property(retain, nonatomic) TPSTipStatusController *tipStatusController; // @synthesize tipStatusController=_tipStatusController;
@property(copy, nonatomic) NSDictionary *contextualEventsForIdentifiers; // @synthesize contextualEventsForIdentifiers=_contextualEventsForIdentifiers;
- (id)debugDescription;	// IMP=0x000000000002bf02
- (void)removeCacheData;	// IMP=0x000000000002be57
- (void)updateCacheData;	// IMP=0x000000000002be30
- (void)restartTrackingForEventIdentifiers:(id)arg1 date:(id)arg2;	// IMP=0x000000000002bb98
- (void)removeObserverIdentifiers:(id)arg1 fromEventIdentifiers:(id)arg2;	// IMP=0x000000000002b929
- (void)removeObserverIdentifiers:(id)arg1;	// IMP=0x000000000002b711
- (void)_persistUserInfo:(id)arg1 forObserverIdentifiers:(id)arg2;	// IMP=0x000000000002b4f2
- (void)processEventProviderQueryResults:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a96f
- (void)addEventsFromTriggerEvents:(id)arg1 desiredOutcomeEvents:(id)arg2 contentIdentifier:(id)arg3 eventSinceDate:(id)arg4;	// IMP=0x000000000002a861
- (void)_addEvents:(id)arg1 contentIdentifier:(id)arg2 eventSinceDate:(id)arg3 minObservationCount:(unsigned long long)arg4;	// IMP=0x000000000002a4a2
- (void)_setContextualEvent:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000002a48c
- (id)_contextualEventForIdentifier:(id)arg1;	// IMP=0x000000000002a476
- (id)contextualEventsForIdentifiers:(id)arg1;	// IMP=0x000000000002a277
- (id)allContextualEvents;	// IMP=0x000000000002a261
- (id)contextualEventsBySourceMap;	// IMP=0x0000000000029f3f
- (id)initWithTipStatusController:(id)arg1;	// IMP=0x0000000000029db7

@end

