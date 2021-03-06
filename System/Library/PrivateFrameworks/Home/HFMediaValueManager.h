//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/HFMediaObjectObserver-Protocol.h>
#import <Home/HFMediaSessionObserver-Protocol.h>
#import <Home/HFMediaValueSource-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol HFHomeKitObject, HFMediaProfileContainer;

@interface HFMediaValueManager : NSObject <HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource, HFHomeKitItemProtocol>
{
    _Bool _hasPendingWrites;	// 8 = 0x8
    id <HFMediaProfileContainer> _mediaProfileContainer;	// 16 = 0x10
    NSMutableArray *_transactionStack;	// 24 = 0x18
    NSError *_cachedPlaybackStateWriteError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ddae4
@property(retain, nonatomic) NSError *cachedPlaybackStateWriteError; // @synthesize cachedPlaybackStateWriteError=_cachedPlaybackStateWriteError;
@property(retain, nonatomic) NSMutableArray *transactionStack; // @synthesize transactionStack=_transactionStack;
@property(readonly, nonatomic) _Bool hasPendingWrites; // @synthesize hasPendingWrites=_hasPendingWrites;
@property(readonly, nonatomic) __weak id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;	// IMP=0x00000000000dd93b
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;	// IMP=0x00000000000dd806
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;	// IMP=0x00000000000dd6d1
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(_Bool)arg3 notifyDidUpdate:(_Bool)arg4;	// IMP=0x00000000000dd4ed
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(_Bool)arg3;	// IMP=0x00000000000dd3e5
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;	// IMP=0x00000000000dd30c
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;	// IMP=0x00000000000dd219
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(_Bool)arg2;	// IMP=0x00000000000dd057
- (id)mediaProfileContainerForRouteID:(id)arg1;	// IMP=0x00000000000dcf99
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)arg1;	// IMP=0x00000000000dceca
- (id)writePlaybackState:(long long)arg1 playbackArchive:(id)arg2 forRouteID:(id)arg3;	// IMP=0x00000000000dc0b2
- (long long)lastPlaybackStateForProfileForRouteID:(id)arg1;	// IMP=0x00000000000dbe26
- (_Bool)hasPendingWritesForRouteID:(id)arg1;	// IMP=0x00000000000dbc59
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;	// IMP=0x00000000000dbb92
- (id)initWithMediaProfileContainer:(id)arg1;	// IMP=0x00000000000dba1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

