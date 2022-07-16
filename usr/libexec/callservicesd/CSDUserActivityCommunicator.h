//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDUserActivity, NSMutableOrderedSet, NSString, UABestAppSuggestionManager;
@protocol CSDUserActivityCommunicatorDelegate, OS_dispatch_queue;

@interface CSDUserActivityCommunicator : NSObject
{
    id <CSDUserActivityCommunicatorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableOrderedSet *_activityQueue;	// 24 = 0x18
    CSDUserActivity *_currentlyBroadcastedActivity;	// 32 = 0x20
    UABestAppSuggestionManager *_bestAppSuggestionManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000107c54
@property(retain, nonatomic) UABestAppSuggestionManager *bestAppSuggestionManager; // @synthesize bestAppSuggestionManager=_bestAppSuggestionManager;
@property(retain, nonatomic) CSDUserActivity *currentlyBroadcastedActivity; // @synthesize currentlyBroadcastedActivity=_currentlyBroadcastedActivity;
@property(retain, nonatomic) NSMutableOrderedSet *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDUserActivityCommunicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bestAppSuggestionChanged:(id)arg1;	// IMP=0x00100000001079ae
- (void)_stopListeningForActivityType:(unsigned int)arg1;	// IMP=0x001000000010787c
- (void)_listenForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x001000000010771a
- (void)_stopBroadcastingActivity:(id)arg1;	// IMP=0x00100000001075fd
- (void)_broadcastActivity:(id)arg1 withTimeout:(double)arg2 shouldPrioritize:(_Bool)arg3;	// IMP=0x00100000001073a1
- (void)_updateCurrentlyBroadcastedActivity;	// IMP=0x001000000010723c
- (void)stopListeningForActivityType:(unsigned int)arg1;	// IMP=0x00100000001071a4
- (void)listenForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x00100000001070cd
- (void)stopBroadcastingActivity:(id)arg1;	// IMP=0x0010000000106fff
- (void)broadcastActivity:(id)arg1 withTimeout:(double)arg2 shouldPrioritize:(_Bool)arg3;	// IMP=0x0010000000106f13
- (void)broadcastActivity:(id)arg1 withTimeout:(double)arg2;	// IMP=0x0010000000106eff
- (void)broadcastActivity:(id)arg1;	// IMP=0x0010000000106ee5
- (id)init;	// IMP=0x0010000000106ca1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
