//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNSystemAudioAnalyzerProtocol-Protocol.h>

@class NSMutableDictionary, SNAudioConfiguration;
@protocol OS_dispatch_queue, SNSystemAudioAnalyzerProtocol;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol>
{
    NSMutableDictionary *_registeredRequests;	// 8 = 0x8
    id <SNSystemAudioAnalyzerProtocol> _analyzer;	// 16 = 0x10
    CDUnknownBlockType _generator;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    SNAudioConfiguration *_audioConfiguration;	// 40 = 0x28
}

+ (id)connectionLostError;	// IMP=0x00000000000202b3
- (void).cxx_destruct;	// IMP=0x000000000002162f
- (void)stop;	// IMP=0x00000000000215a1
- (void)start;	// IMP=0x0000000000021513
- (void)removeAllRequests;	// IMP=0x00000000000213e8
- (void)removeRequest:(id)arg1;	// IMP=0x0000000000021272
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002104c
- (void)setAudioConfiguration:(id)arg1;	// IMP=0x0000000000020eb3
- (void)_removeAllRequests;	// IMP=0x0000000000020e80
- (void)_removeRequest:(id)arg1;	// IMP=0x0000000000020e1c
- (void)_addRequest:(id)arg1 withObserver:(id)arg2;	// IMP=0x0000000000020cde
- (void)_setAudioConfiguration:(id)arg1;	// IMP=0x0000000000020be6
- (void)_invalidateAnalyzer:(id)arg1;	// IMP=0x000000000002082c
- (void)_invalidateActiveAnalyzer;	// IMP=0x0000000000020816
- (void)invalidateActiveAnalyzer;	// IMP=0x0000000000020742
- (id)_acquireSystemAudioAnalyzer;	// IMP=0x00000000000204d6
- (id)initWithClient:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000203fd
- (id)initWithRemoteAnalyzerGenerator:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x0000000000020323
- (id)init;	// IMP=0x00000000000202da

@end
