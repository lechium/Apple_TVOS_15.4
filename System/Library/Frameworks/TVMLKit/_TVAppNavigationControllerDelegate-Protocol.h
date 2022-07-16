//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class _TVAppDocumentController, _TVAppNavigationController;

@protocol _TVAppNavigationControllerDelegate <NSObject>

@optional
- (void)appNavigationControllerWillDisappear:(_TVAppNavigationController *)arg1;
- (void)appNavigationController:(_TVAppNavigationController *)arg1 willLoadAppDocumentWithController:(_TVAppDocumentController *)arg2;
@end
