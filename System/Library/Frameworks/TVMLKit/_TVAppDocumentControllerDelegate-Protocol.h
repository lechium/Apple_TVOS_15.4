//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class TVMediaQueryEvaluator, UIViewController, _TVAppDocumentController;

@protocol _TVAppDocumentControllerDelegate <NSObject>

@optional
- (void)appDocumentController:(_TVAppDocumentController *)arg1 didHostTemplateViewController:(UIViewController *)arg2 usedTransitions:(_Bool)arg3;
- (void)appDocumentController:(_TVAppDocumentController *)arg1 willHostTemplateViewController:(UIViewController *)arg2 usesTransitions:(inout _Bool *)arg3;
- (TVMediaQueryEvaluator *)mediaQueryEvaluatorForAppDocumentController:(_TVAppDocumentController *)arg1;
@end

