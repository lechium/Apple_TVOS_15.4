//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol SiriUITemplateModel, SiriUITemplateModelPrivate, SiriUITemplateView, SiriUITemplateViewControllerDelegate;

@interface SiriUITemplateViewController : UIViewController
{
    _Bool _active;	// 8 = 0x8
    _Bool _compressed;	// 9 = 0x9
    id <SiriUITemplateModel> _templateModel;	// 16 = 0x10
    id <SiriUITemplateViewControllerDelegate> _delegate;	// 24 = 0x18
}

+ (id)templateViewControllerForTemplateModel:(id)arg1;	// IMP=0x000000000000eca7
- (void).cxx_destruct;	// IMP=0x000000000000efd7
@property(nonatomic, getter=isCompressed) _Bool compressed; // @synthesize compressed=_compressed;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <SiriUITemplateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SiriUITemplateModel> templateModel; // @synthesize templateModel=_templateModel;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000ef4b
- (void)prepareForDismissal;	// IMP=0x000000000000ef45
@property(readonly, nonatomic) id <SiriUITemplateModelPrivate> templateModelPrivate;
- (void)loadView;	// IMP=0x000000000000ed83
- (id)_initWithTemplateModel:(id)arg1;	// IMP=0x000000000000ed0a

// Remaining properties
@property(retain, nonatomic) UIView<SiriUITemplateView> *view; // @dynamic view;

@end

