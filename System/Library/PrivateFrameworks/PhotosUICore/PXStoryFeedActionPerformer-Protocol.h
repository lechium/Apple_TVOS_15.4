//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString, PXSectionedDataSource, PXSectionedObjectReference, UIViewController;

@protocol PXStoryFeedActionPerformer <NSObject>

@optional
- (_Bool)navigateToObjectReference:(PXSectionedObjectReference *)arg1 originalSource:(NSString *)arg2 fromViewController:(UIViewController *)arg3 animated:(_Bool)arg4 willPresentHandler:(void (^)(UIViewController<PXStoryViewController> *))arg5 completionHandler:(void (^)(UIViewController<PXStoryViewController> *))arg6;
- (_Bool)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath)arg1 inDataSource:(PXSectionedDataSource *)arg2 fromViewController:(UIViewController *)arg3;
@end

