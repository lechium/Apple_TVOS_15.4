//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUI/ASDNotificationCenterDialogObserver-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface VUIASDDialogObserver : NSObject <ASDNotificationCenterDialogObserver>
{
    UIViewController *_presenterViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000053186
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
- (void)handleDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052e0c
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052ab9
- (void)stopListening;	// IMP=0x0000000000052a73
- (void)startListening;	// IMP=0x0000000000052a20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

