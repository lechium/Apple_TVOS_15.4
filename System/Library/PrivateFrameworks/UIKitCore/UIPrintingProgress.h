//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIAlertController, UIPrintingProgressViewController, UIWindow, UIWindowScene;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject
{
    NSString *_printerName;	// 8 = 0x8
    CDUnknownBlockType _cancelHandler;	// 16 = 0x10
    double _startTime;	// 24 = 0x18
    double _displayTime;	// 32 = 0x20
    UIAlertController *_alertController;	// 40 = 0x28
    UIPrintingProgressViewController *_viewController;	// 48 = 0x30
    _Bool _donePrinting;	// 56 = 0x38
    _Bool _forceDisplayAsAlert;	// 57 = 0x39
    _Bool _presentingAlert;	// 58 = 0x3a
    _Bool _creatingPDF;	// 59 = 0x3b
    double _lastPageUpdate;	// 64 = 0x40
    double _progressAlertDelay;	// 72 = 0x48
    UIWindowScene *_hostingWindowScene;	// 80 = 0x50
    UIWindow *_progressAlertWindow;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000b0a416
@property(retain) UIWindow *progressAlertWindow; // @synthesize progressAlertWindow=_progressAlertWindow;
@property __weak UIWindowScene *hostingWindowScene; // @synthesize hostingWindowScene=_hostingWindowScene;
@property double progressAlertDelay; // @synthesize progressAlertDelay=_progressAlertDelay;
@property double lastPageUpdate; // @synthesize lastPageUpdate=_lastPageUpdate;
@property _Bool creatingPDF; // @synthesize creatingPDF=_creatingPDF;
- (double)nextPrintDelay;	// IMP=0x0000000000b0a22d
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;	// IMP=0x0000000000b09efb
- (void)setPrintInfoState:(int)arg1;	// IMP=0x0000000000b09dc8
- (void)_mainQueue_endProgress;	// IMP=0x0000000000b09ced
- (void)endProgress;	// IMP=0x0000000000b09c56
- (void)progressCancel;	// IMP=0x0000000000b09c0d
- (void)_mainQueue_hideProgressAnimated:(_Bool)arg1;	// IMP=0x0000000000b09a93
- (void)hideProgressAnimated:(_Bool)arg1;	// IMP=0x0000000000b099e4
- (void)_mainQueue_showProgress:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x0000000000b09510
- (void)showProgress:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x0000000000b0940e
- (void)_mainQueue_presentProgressAlert;	// IMP=0x0000000000b0926c
- (void)_presentProgressAlert;	// IMP=0x0000000000b091d1
@property(readonly) NSString *title;
- (_Bool)progressVisible;	// IMP=0x0000000000b09035
- (id)initPDFCreationWithHostingWindowScene:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b08f74
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(_Bool)arg2 hostingWindowScene:(id)arg3 cancelHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b08e72

@end

