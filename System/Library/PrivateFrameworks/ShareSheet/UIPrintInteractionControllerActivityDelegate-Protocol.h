//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class UIPrintInteractionController, UIViewController, UIWindow;

@protocol UIPrintInteractionControllerActivityDelegate <NSObject>

@optional
- (_Bool)shouldDismissParentViewController:(UIPrintInteractionController *)arg1;
- (UIWindow *)printInteractionControllerWindowForPresentation:(UIPrintInteractionController *)arg1;
- (UIViewController *)printInteractionControllerParentViewController:(UIPrintInteractionController *)arg1;
@end

