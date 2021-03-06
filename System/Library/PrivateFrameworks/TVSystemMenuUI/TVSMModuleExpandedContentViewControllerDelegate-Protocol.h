//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemMenuUI/TVSMModuleContentViewControllerDelegate-Protocol.h>

@class UIViewController;
@protocol NSSecureCoding, TVSMModuleExpandedContentViewController;

@protocol TVSMModuleExpandedContentViewControllerDelegate <TVSMModuleContentViewControllerDelegate>
- (void)contentModuleViewControllerDidRequestSystemDismissal:(UIViewController<TVSMModuleExpandedContentViewController> *)arg1 animated:(_Bool)arg2 result:(id <NSSecureCoding>)arg3;
- (void)contentModuleViewControllerDidRequestDismissal:(UIViewController<TVSMModuleExpandedContentViewController> *)arg1;
@end

