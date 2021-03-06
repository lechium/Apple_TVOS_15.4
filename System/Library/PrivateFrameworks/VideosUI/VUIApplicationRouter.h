//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VUIApplicationRouter : NSObject
{
}

+ (id)_viewControllerWithIdentifier:(id)arg1;	// IMP=0x000000000001ba6f
+ (id)topMostVisibleViewController;	// IMP=0x000000000001b8b6
+ (id)topPresentedViewController;	// IMP=0x000000000001b7f8
+ (id)currentNavigationController;	// IMP=0x000000000001b6b5
+ (void)_dismissPresentedViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b3f4
+ (void)dismissOrPopLastViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b37e
+ (void)dismissOrPopViewControllerWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b27c
+ (void)dismissPresentedViewController;	// IMP=0x000000000001b268
+ (_Bool)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 documentOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000001adfc
+ (void)_performForType:(long long)arg1 targetResponder:(id)arg2 appContext:(id)arg3 eventDataSource:(id)arg4 documentOptions:(id)arg5;	// IMP=0x000000000001a3f3
+ (_Bool)_handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 eventDataSource:(id)arg4 documentOptions:(id)arg5 extraInfo:(id *)arg6;	// IMP=0x000000000001a167
+ (id)eventDataSourceForEvent:(id)arg1 routerDataSource:(id)arg2;	// IMP=0x000000000001a074
+ (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 routerDataSource:(id)arg4 supplementaryData:(id)arg5 extraInfo:(id *)arg6;	// IMP=0x000000000001bd2f

@end

