//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, SHAudioSessionManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SHRecordingService : NSObject
{
    SHAudioSessionManager *_audioSessionManager;	// 8 = 0x8
    NSArray *_availableRecorders;	// 16 = 0x10
    NSMutableArray *_activeTaps;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_audioManagerDispatchQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x002000000000a9ab
- (void).cxx_destruct;	// IMP=0x002000000000c81b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioManagerDispatchQueue; // @synthesize audioManagerDispatchQueue=_audioManagerDispatchQueue;
@property(readonly, nonatomic) NSMutableArray *activeTaps; // @synthesize activeTaps=_activeTaps;
- (void)audioSessionManager:(id)arg1 interruptionEndedWithOptions:(unsigned long long)arg2;	// IMP=0x001000000000c754
- (void)audioSessionManager:(id)arg1 interruptionBeganWithOptions:(unsigned long long)arg2;	// IMP=0x001000000000c742
- (void)failedToResumeAfterInterruption;	// IMP=0x001000000000c545
- (_Bool)managesRecordingSession;	// IMP=0x001000000000c53d
- (id)requiredEntitlements;	// IMP=0x001000000000c467
@property(readonly, nonatomic) NSArray *availableRecorders; // @synthesize availableRecorders=_availableRecorders;
@property(readonly, nonatomic) SHAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
- (void)startRecordersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bac4
- (void)startRecordingWithOptions:(unsigned long long)arg1;	// IMP=0x001000000000b820
- (void)recorder:(id)arg1 producedAudioBuffer:(id)arg2 atTime:(id)arg3;	// IMP=0x001000000000b45e
- (_Bool)isAudioSourceSupported:(long long)arg1;	// IMP=0x001000000000b312
- (void)stopRecording;	// IMP=0x001000000000b108
- (oneway void)stop;	// IMP=0x001000000000b00f
- (_Bool)isRunning;	// IMP=0x001000000000af87
- (void)stopTap:(id)arg1;	// IMP=0x001000000000ae86
- (void)startTap:(id)arg1;	// IMP=0x001000000000ad31
- (id)createTap;	// IMP=0x001000000000acec
- (_Bool)shouldUseInternalSession;	// IMP=0x001000000000ab7b
- (id)init;	// IMP=0x001000000000aaf4
- (id)initWithRecorders:(id)arg1;	// IMP=0x001000000000aa9a
- (void)dealloc;	// IMP=0x001000000000aa00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

