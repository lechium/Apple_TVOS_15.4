//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIOpenURLHandling-Protocol.h>

@class MISSING_TYPE, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI14OpenURLHandler : NSObject <VUIOpenURLHandling>
{
    MISSING_TYPE *deferredOpenURL;	// 0 = 0x0
    MISSING_TYPE *openedByDeeplink;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *_isFinished;	// 3347663063 = 0xc78948d7
    MISSING_TYPE *isFinishedLock;	// 1455046027 = 0x56ba3d8b
    MISSING_TYPE *_isLoadingSharedWatchURL;	// 1222609224 = 0x48df8948
    MISSING_TYPE *isLoadingSharedWatchURLLock;	// 2240366592 = 0x85894800
    MISSING_TYPE *deferredOpenURLCompletion;	// 1222609224 = 0x48df8948
    MISSING_TYPE *amsURLParser;	// 2303262719 = 0x8948ffff
    MISSING_TYPE *deferredAMSDynamicURLCompletion;	// 4282515455 = 0xff41ffff
    MISSING_TYPE *offerURLString;	// 4038429512 = 0xf0b58b48
    MISSING_TYPE *contextData;	// 2303252479 = 0x8948d7ff
    MISSING_TYPE *purchaseOrLinkingAdamID;	// 4294967032 = 0xfffffef8
    MISSING_TYPE *subscriptionChannelTitle;	// 2336808841 = 0x8b48df89
    MISSING_TYPE *subscriptionChannelLink;	// 3623830015 = 0xd7ff41ff
}

- (void).cxx_destruct;	// IMP=0x00000000002be540
- (void)parseURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002be2f0
- (void)processEntityWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x00000000002bdaa0
- (void)handleDeferredURLWithAppContext:(id)arg1;	// IMP=0x00000000002bd350
- (void)saveDeferredURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bd0a0
- (void)processNonDeeplinkURL:(id)arg1 contextData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bce60
- (void)processDeeplink:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bcb60
- (void)openSharedWatchURL:(id)arg1 appContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002bc350
- (id)queryParameterStringfromURL:(id)arg1 parameter:(id)arg2;	// IMP=0x00000000002bb810
- (id)init;	// IMP=0x00000000002bb7e0
@property(nonatomic) _Bool isLoadingSharedWatchURL;
@property(nonatomic) _Bool isFinished;
@property(nonatomic) _Bool openedByDeeplink; // @synthesize openedByDeeplink;
@property(nonatomic, copy) NSURL *deferredOpenURL;

@end

