//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IXAppInstallCoordinator, LSApplicationRecord, NSError, NSString, NSURL;

@protocol IXAppInstallObserverDelegate <NSObject>

@optional
- (void)shouldPrioritizeAppWithBundleID:(NSString *)arg1;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1 forApplicationRecord:(LSApplicationRecord *)arg2;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1 forAppAtURL:(NSURL *)arg2;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1 forApplicationRecord:(LSApplicationRecord *)arg2;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1 atURL:(NSURL *)arg2;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldBeginRestoringUserData:(IXAppInstallCoordinator *)arg1;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinatorShouldPause:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldResume:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldPrioritize:(IXAppInstallCoordinator *)arg1;
@end

