//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <GLKit/GLKViewDelegate-Protocol.h>
#import <GLKit/NSCoding-Protocol.h>

@class CADisplayLink, GLKDisplayLinkMessenger, NSString, UIScreen;
@protocol GLKViewControllerDelegate;

@interface GLKViewController : UIViewController <NSCoding, GLKViewDelegate>
{
    _Bool _displayLinkPaused;	// 8 = 0x8
    _Bool _viewIsVisible;	// 9 = 0x9
    _Bool _firstResumeOccurred;	// 10 = 0xa
    _Bool _lastResumeOccurred;	// 11 = 0xb
    _Bool _lastUpdateOccurred;	// 12 = 0xc
    _Bool _lastDrawOccurred;	// 13 = 0xd
    _Bool _pauseOnWillResignActive;	// 14 = 0xe
    _Bool _resumeOnDidBecomeActive;	// 15 = 0xf
    UIScreen *_screen;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    GLKDisplayLinkMessenger *_displayLinkMessenger;	// 32 = 0x20
    double _timeSinceFirstResumeStartTime;	// 40 = 0x28
    double _timeSinceLastResumeStartTime;	// 48 = 0x30
    double _timeSinceLastUpdatePreviousTime;	// 56 = 0x38
    double _timeSinceLastDrawPreviousTime;	// 64 = 0x40
    CDUnknownFunctionPointerType _updateIMP;	// 72 = 0x48
    id <GLKViewControllerDelegate> _delegate;	// 80 = 0x50
    long long _screenFramesPerSecond;	// 88 = 0x58
    long long _preferredFramesPerSecond;	// 96 = 0x60
    long long _framesPerSecond;	// 104 = 0x68
    long long _framesDisplayed;	// 112 = 0x70
    double _timeSinceFirstResume;	// 120 = 0x78
    double _timeSinceLastResume;	// 128 = 0x80
    double _timeSinceLastUpdate;	// 136 = 0x88
    double _timeSinceLastDraw;	// 144 = 0x90
}

@property(readonly, nonatomic) double timeSinceLastDraw; // @synthesize timeSinceLastDraw=_timeSinceLastDraw;
@property(readonly, nonatomic) double timeSinceLastUpdate; // @synthesize timeSinceLastUpdate=_timeSinceLastUpdate;
@property(readonly, nonatomic) long long framesDisplayed; // @synthesize framesDisplayed=_framesDisplayed;
@property(readonly, nonatomic) long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property(nonatomic) long long screenFramesPerSecond; // @synthesize screenFramesPerSecond=_screenFramesPerSecond;
@property(nonatomic) id <GLKViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDUnknownFunctionPointerType updateIMP; // @synthesize updateIMP=_updateIMP;
@property(nonatomic) double timeSinceLastDrawPreviousTime; // @synthesize timeSinceLastDrawPreviousTime=_timeSinceLastDrawPreviousTime;
@property(nonatomic) _Bool lastDrawOccurred; // @synthesize lastDrawOccurred=_lastDrawOccurred;
@property(nonatomic) double timeSinceLastUpdatePreviousTime; // @synthesize timeSinceLastUpdatePreviousTime=_timeSinceLastUpdatePreviousTime;
@property(nonatomic) _Bool lastUpdateOccurred; // @synthesize lastUpdateOccurred=_lastUpdateOccurred;
@property(nonatomic) double timeSinceLastResumeStartTime; // @synthesize timeSinceLastResumeStartTime=_timeSinceLastResumeStartTime;
@property(nonatomic) _Bool lastResumeOccurred; // @synthesize lastResumeOccurred=_lastResumeOccurred;
@property(nonatomic) double timeSinceFirstResumeStartTime; // @synthesize timeSinceFirstResumeStartTime=_timeSinceFirstResumeStartTime;
@property(nonatomic) _Bool firstResumeOccurred; // @synthesize firstResumeOccurred=_firstResumeOccurred;
@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(retain, nonatomic) GLKDisplayLinkMessenger *displayLinkMessenger; // @synthesize displayLinkMessenger=_displayLinkMessenger;
@property(nonatomic) _Bool displayLinkPaused; // @synthesize displayLinkPaused=_displayLinkPaused;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;	// IMP=0x000000000001fde3
@property(nonatomic) _Bool resumeOnDidBecomeActive; // @synthesize resumeOnDidBecomeActive=_resumeOnDidBecomeActive;
@property(nonatomic) _Bool pauseOnWillResignActive; // @synthesize pauseOnWillResignActive=_pauseOnWillResignActive;
@property(readonly, nonatomic) double timeSinceLastResume; // @synthesize timeSinceLastResume=_timeSinceLastResume;
@property(readonly, nonatomic) double timeSinceFirstResume; // @synthesize timeSinceFirstResume=_timeSinceFirstResume;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001fb15
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001fac0
- (void)viewDidUnload;	// IMP=0x000000000001fa6a
- (void)viewDidLoad;	// IMP=0x000000000001fa58
- (void)loadView;	// IMP=0x000000000001f86c
- (void)setView:(id)arg1;	// IMP=0x000000000001f7a3
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x000000000001f762
- (void)_updateScreenIfChanged;	// IMP=0x000000000001f618
- (void)_resumeByNotification;	// IMP=0x000000000001f5f5
- (void)_pauseByNotification;	// IMP=0x000000000001f591
- (void)_updateAndDraw;	// IMP=0x000000000001f34f
- (void)_createDisplayLinkForScreen:(id)arg1;	// IMP=0x000000000001f263
- (long long)_calculateScreenFramesPerSecond:(id)arg1;	// IMP=0x000000000001f220
- (void)_configureNotifications;	// IMP=0x000000000001f14d
- (void)dealloc;	// IMP=0x000000000001f084
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001efe1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001eebf
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001ee5e
- (id)init;	// IMP=0x000000000001edfd
- (void)_initCommon;	// IMP=0x000000000001ec9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

