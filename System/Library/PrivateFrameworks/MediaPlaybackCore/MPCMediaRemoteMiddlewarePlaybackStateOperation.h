//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPMiddlewareOperation-Protocol.h>

@class MPCFuture, MPCMediaRemoteMiddleware, NSArray, NSError, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation>
{
    CDUnknownBlockType _invalidationHandler;	// 8 = 0x8
    NSArray *_invalidationObservers;	// 16 = 0x10
    MPCMediaRemoteMiddleware *_middleware;	// 24 = 0x18
    MPCFuture *_playbackStateFuture;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000094491
@property(retain, nonatomic) MPCFuture *playbackStateFuture; // @synthesize playbackStateFuture=_playbackStateFuture;
@property(retain, nonatomic) MPCMediaRemoteMiddleware *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (id)timeoutDescription;	// IMP=0x00000000000943a8
- (void)execute;	// IMP=0x00000000000940c7
- (id)initWithMiddleware:(id)arg1;	// IMP=0x0000000000094059

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

