//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, TVApplicationController;
@protocol TVDocumentViewControllerDelegate;

@interface TVDocumentViewController : UIViewController
{
    struct {
        _Bool respondsToWillUpdate;
        _Bool respondsToDidUpdate;
        _Bool respondsToHandleEvent;
        _Bool respondsToDidFailWithError;
        _Bool respondsToDidUpdateWithContext;
    } _delegateFlags;	// 8 = 0x8
    NSDictionary *_documentContext;	// 16 = 0x10
    TVApplicationController *_appController;	// 24 = 0x18
    id <TVDocumentViewControllerDelegate> _delegate;	// 32 = 0x20
}

+ (id)viewControllerWithContext:(id)arg1 forAppController:(id)arg2;	// IMP=0x000000000007d058
- (void).cxx_destruct;	// IMP=0x000000000007d65f
@property(nonatomic) __weak id <TVDocumentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) NSDictionary *documentContext; // @synthesize documentContext=_documentContext;
- (_Bool)handleEvent:(id)arg1 withElement:(id)arg2 targetResponder:(id)arg3;	// IMP=0x000000000007d566
- (void)didFailUpdateWithError:(id)arg1;	// IMP=0x000000000007d4e4
- (void)didUpdateWithContext:(id)arg1;	// IMP=0x000000000007d462
- (void)didUpdateDocument;	// IMP=0x000000000007d3fd
- (void)willUpdateDocument;	// IMP=0x000000000007d399
- (void)didChangeDocumentContext;	// IMP=0x000000000007d393
- (void)updateUsingContext:(id)arg1;	// IMP=0x000000000007d2ed
- (id)tvdvc_initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000007d00d

@end
