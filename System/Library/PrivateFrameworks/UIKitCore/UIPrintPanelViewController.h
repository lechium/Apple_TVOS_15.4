//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/UIPrintPanelAppearanceDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSObject, NSString, NSURL, UIActivityViewController, UINavigationController, UIPopoverController, UIPrintInfo, UIPrintInteractionController, UIPrintOptionsTableViewController, UIPrintPanelNavigationController, UIPrintPanelWindow, UIPrintPaper, UIPrintPreviewInfo, UIPrintPreviewViewController, UIPrinter, UITableView, UIView, UIViewController, _UIPrintMessageAndSpinnerView;
@protocol OS_dispatch_queue, UIPrintAppExtensionProtocol;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController <UIPopoverPresentationControllerDelegate, UIPrintPanelAppearanceDelegate>
{
    NSObject<OS_dispatch_queue> *_lookupPrinterQueue;	// 400 = 0x190
    _Bool _dismissed;	// 408 = 0x198
    _Bool _animated;	// 409 = 0x199
    _Bool _showingPreview;	// 410 = 0x19a
    UIPrinter *_printer;	// 416 = 0x1a0
    UIPrintInfo *_printInfo;	// 424 = 0x1a8
    UINavigationController *_printOptionsNavController;	// 432 = 0x1b0
    UITableView *_printOptionsTableView;	// 440 = 0x1b8
    UIViewController<UIPrintAppExtensionProtocol> *_appPrintExtensionController;	// 448 = 0x1c0
    UIPrintInteractionController *_printInteractionController;	// 456 = 0x1c8
    CDUnknownBlockType _previewUpdateCompletionHandler;	// 464 = 0x1d0
    UIPrintPanelWindow *_printPanelWindow;	// 472 = 0x1d8
    UIPrintPanelNavigationController *_printPanelNavigationController;	// 480 = 0x1e0
    UIViewController *_parentController;	// 488 = 0x1e8
    UIView *_previewSeparatorView;	// 496 = 0x1f0
    UIPrintPreviewViewController *_previewViewController;	// 504 = 0x1f8
    UIView *_previewPanelView;	// 512 = 0x200
    _UIPrintMessageAndSpinnerView *_messageAndSpinner;	// 520 = 0x208
    NSLayoutConstraint *_previewHeightConstraint;	// 528 = 0x210
    UIPrintOptionsTableViewController *_printOptionsTableViewController;	// 536 = 0x218
    NSLayoutConstraint *_printOptionsWidthConstraint;	// 544 = 0x220
    long long _lastUsedPrinterIndex;	// 552 = 0x228
    NSArray *_lastUsedPrinterArray;	// 560 = 0x230
    NSArray *_vertScrollPrintPanelConstraints;	// 568 = 0x238
    NSArray *_horizScrollPrintPanelConstraints;	// 576 = 0x240
    UIPopoverController *_poverController;	// 584 = 0x248
    UIActivityViewController *_activityViewController;	// 592 = 0x250
    NSURL *_pdfURL;	// 600 = 0x258
    UIPrintPreviewInfo *_previewInfo;	// 608 = 0x260
}

+ (_Bool)_preventsAppearanceProxyCustomization;	// IMP=0x0000000000ae9231
- (void).cxx_destruct;	// IMP=0x0000000000af02d5
@property(nonatomic) _Bool showingPreview; // @synthesize showingPreview=_showingPreview;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(retain, nonatomic) UIPrintPreviewInfo *previewInfo; // @synthesize previewInfo=_previewInfo;
@property(retain, nonatomic) NSURL *pdfURL; // @synthesize pdfURL=_pdfURL;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) UIPopoverController *poverController; // @synthesize poverController=_poverController;
@property(retain, nonatomic) NSArray *horizScrollPrintPanelConstraints; // @synthesize horizScrollPrintPanelConstraints=_horizScrollPrintPanelConstraints;
@property(retain, nonatomic) NSArray *vertScrollPrintPanelConstraints; // @synthesize vertScrollPrintPanelConstraints=_vertScrollPrintPanelConstraints;
@property(retain) NSArray *lastUsedPrinterArray; // @synthesize lastUsedPrinterArray=_lastUsedPrinterArray;
@property(nonatomic) long long lastUsedPrinterIndex; // @synthesize lastUsedPrinterIndex=_lastUsedPrinterIndex;
@property(retain, nonatomic) NSLayoutConstraint *printOptionsWidthConstraint; // @synthesize printOptionsWidthConstraint=_printOptionsWidthConstraint;
@property(retain, nonatomic) UIPrintOptionsTableViewController *printOptionsTableViewController; // @synthesize printOptionsTableViewController=_printOptionsTableViewController;
@property(retain, nonatomic) NSLayoutConstraint *previewHeightConstraint; // @synthesize previewHeightConstraint=_previewHeightConstraint;
@property(retain, nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner; // @synthesize messageAndSpinner=_messageAndSpinner;
@property(retain, nonatomic) UIView *previewPanelView; // @synthesize previewPanelView=_previewPanelView;
@property(retain, nonatomic) UIPrintPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(retain, nonatomic) UIView *previewSeparatorView; // @synthesize previewSeparatorView=_previewSeparatorView;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) UIPrintPanelNavigationController *printPanelNavigationController; // @synthesize printPanelNavigationController=_printPanelNavigationController;
@property(retain, nonatomic) UIPrintPanelWindow *printPanelWindow; // @synthesize printPanelWindow=_printPanelWindow;
@property(copy, nonatomic) CDUnknownBlockType previewUpdateCompletionHandler; // @synthesize previewUpdateCompletionHandler=_previewUpdateCompletionHandler;
@property(retain, nonatomic) UIPrintInteractionController *printInteractionController; // @synthesize printInteractionController=_printInteractionController;
@property(retain, nonatomic) UIViewController<UIPrintAppExtensionProtocol> *appPrintExtensionController; // @synthesize appPrintExtensionController=_appPrintExtensionController;
@property(retain, nonatomic) UITableView *printOptionsTableView; // @synthesize printOptionsTableView=_printOptionsTableView;
@property(retain, nonatomic) UINavigationController *printOptionsNavController; // @synthesize printOptionsNavController=_printOptionsNavController;
@property(retain, nonatomic) UIPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
@property(retain, nonatomic) UIPrinter *printer; // @synthesize printer=_printer;
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x0000000000aefef6
- (void)dismissPrintPanelWithAction:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000aefae3
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000aef8bc
- (void)presentPrintPanelFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000aef67e
- (void)presentPrintPanelAnimated:(_Bool)arg1 hostingScene:(id)arg2;	// IMP=0x0000000000aef021
- (void)_presentInParentAnimated:(_Bool)arg1;	// IMP=0x0000000000aeed6c
- (void)cancelPrinting;	// IMP=0x0000000000aeed53
- (void)startPrinting;	// IMP=0x0000000000aeec6e
- (void)_generatePDFForQuickLookCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000aeebd1
- (struct _NSRange)previewVisibleRange;	// IMP=0x0000000000aeeb46
- (void)printPanelDidDisappear;	// IMP=0x0000000000aee9b4
- (void)printNavigationConrollerDidDismiss;	// IMP=0x0000000000aee7d7
- (void)updatePreveiw;	// IMP=0x0000000000aee6ac
@property(retain, nonatomic) UIPrintPaper *printPaper;
- (void)lookupLastUsedPrinter;	// IMP=0x0000000000aedbe3
- (id)printerDisplayName:(id)arg1;	// IMP=0x0000000000aed4a1
- (void)addPrintLongPressGestureToNavItem:(id)arg1;	// IMP=0x0000000000aed3f3
- (void)addCanelButtonToNavItem:(id)arg1;	// IMP=0x0000000000aed164
- (void)addPrintButtonToNavItem:(id)arg1;	// IMP=0x0000000000aed08e
- (void)printButtonLongPress:(id)arg1;	// IMP=0x0000000000aecb0c
- (void)cancelButtonPressed:(id)arg1;	// IMP=0x0000000000aecafa
- (void)printButtonPressed:(id)arg1;	// IMP=0x0000000000aeca49
- (void)backButtonPressed:(id)arg1;	// IMP=0x0000000000aec9df
- (id)keyCommands;	// IMP=0x0000000000aec8bd
- (void)updatePageRange;	// IMP=0x0000000000aec73c
- (_Bool)showPageRange;	// IMP=0x0000000000aec6f8
- (void)updatePDFAnnotations;	// IMP=0x0000000000aec642
- (_Bool)canShowAnnotations;	// IMP=0x0000000000aec5fe
- (void)readPrintOptions;	// IMP=0x0000000000aec2e6
- (void)updatePrintPreviewInfo;	// IMP=0x0000000000aec269
- (void)setPdfFileURL:(id)arg1 shouldRenderOnChosenPaper:(_Bool)arg2 completed:(_Bool)arg3 pdfPassword:(id)arg4;	// IMP=0x0000000000aebceb
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000aebc68
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000aebbfe
- (void)updateViewConstraints;	// IMP=0x0000000000aeb8c1
- (_Bool)showingVerticalPreview;	// IMP=0x0000000000aeb849
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000aeb73c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000aeb66e
- (void)viewDidLoad;	// IMP=0x0000000000aeb5a8
- (void)setShowPreviewGenerating:(_Bool)arg1;	// IMP=0x0000000000aeb3be
- (void)showPreviewGenerating;	// IMP=0x0000000000aeaef6
- (void)loadView;	// IMP=0x0000000000ae9a0c
- (void)dealloc;	// IMP=0x0000000000ae9979
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;	// IMP=0x0000000000ae9239

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

