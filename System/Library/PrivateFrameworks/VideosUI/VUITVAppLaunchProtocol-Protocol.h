//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSDictionary, NSError, NSURL, UIWindow, VUITVApplicationController;

@protocol VUITVAppLaunchProtocol <NSObject>
@property(readonly, nonatomic) VUITVApplicationController *appController;
- (void)cleanUp;
- (void)didAcceptGDPRWelcome;
- (void)didShowGDPRWelcome;
- (void)setMainWindow:(UIWindow *)arg1;
- (void)didFailToLaunch:(NSError *)arg1;
- (_Bool)openURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
- (_Bool)applicationDidFinishLaunchingWithOptions:(NSDictionary *)arg1;
- (_Bool)applicationWillFinishLaunchingWithOptions:(NSDictionary *)arg1;
- (void)preWarm:(NSDictionary *)arg1;
@end

