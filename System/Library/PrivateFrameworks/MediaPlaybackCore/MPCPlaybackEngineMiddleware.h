//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>

@class MPCPlaybackEngine, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>
{
    NSArray *_invalidationObservers;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000adb5f
@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;	// IMP=0x00000000000ad9da
- (id)operationsForPlayerRequest:(id)arg1;	// IMP=0x00000000000ad91e
- (id)operationsForRequest:(id)arg1;	// IMP=0x00000000000ad8b1
- (id)videoOutput:(id)arg1 chain:(id)arg2;	// IMP=0x00000000000add1a
- (id)playerVideoView:(id)arg1 chain:(id)arg2;	// IMP=0x00000000000adc81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

