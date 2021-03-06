//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class NSError, TVLPreviewFactory, UIViewController;

@protocol TVLPreviewFactoryDelegate <NSObject>
- (void)previewFactory:(TVLPreviewFactory *)arg1 didFailToLoadPreviewWithError:(NSError *)arg2;
- (void)previewFactory:(TVLPreviewFactory *)arg1 didLoadPreviewViewController:(UIViewController *)arg2;
@end

