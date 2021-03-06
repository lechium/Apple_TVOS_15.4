//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSOpportuneSpeakListenerDelegate-Protocol.h>

@class CSOpportuneSpeakListener, NSString;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    CSOpportuneSpeakListener *listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f0ba0
- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(_Bool)arg2;	// IMP=0x00000000000f0b0b
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2;	// IMP=0x00000000000f0a76
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;	// IMP=0x00000000000f09e1
- (void)receiveOpportuneSpeakListenerStop;	// IMP=0x00000000000f08d4
- (void)receiveOpportuneSpeakListenerStart;	// IMP=0x00000000000f0755
- (void)start;	// IMP=0x00000000000f068c
- (id)init;	// IMP=0x00000000000f0634

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

