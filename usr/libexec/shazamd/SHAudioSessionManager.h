//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SHAudioSessionManagerDelegate;

__attribute__((visibility("hidden")))
@interface SHAudioSessionManager : NSObject
{
    _Bool _isAudioSessionInterrupted;	// 8 = 0x8
    id <SHAudioSessionManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_audioManagerDispatchQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000a985
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioManagerDispatchQueue; // @synthesize audioManagerDispatchQueue=_audioManagerDispatchQueue;
@property(nonatomic) _Bool isAudioSessionInterrupted; // @synthesize isAudioSessionInterrupted=_isAudioSessionInterrupted;
@property(nonatomic) __weak id <SHAudioSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)areHeadphonesOrExternalSpeakerConnected;	// IMP=0x001000000000a8f8
- (void)handleAudioSessionRouteChange:(id)arg1;	// IMP=0x001000000000a84d
- (_Bool)isExternalSpeakerConnected;	// IMP=0x001000000000a4b6
- (_Bool)areHeadphonesConnected;	// IMP=0x001000000000a2c4
- (void)configureAudioSession;	// IMP=0x0010000000009f07
- (void)handleMediaServicesWereReset:(id)arg1;	// IMP=0x0010000000009e55
- (void)handleMediaServicesWereLost:(id)arg1;	// IMP=0x0010000000009da6
- (void)handleAudioSessionInterruption:(id)arg1;	// IMP=0x0010000000009b7b
- (void)deactivateAudioSession;	// IMP=0x0010000000009a0a
- (void)activateAudioSessionWithOptions:(unsigned long long)arg1;	// IMP=0x00100000000099d6
- (id)init;	// IMP=0x001000000000997e
- (void)removeObservers;	// IMP=0x001000000000980b
- (void)registerObservers;	// IMP=0x001000000000967c
- (void)dealloc;	// IMP=0x00100000000095e2

@end

