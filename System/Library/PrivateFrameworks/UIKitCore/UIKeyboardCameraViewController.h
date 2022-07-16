//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyboardCameraRemoteViewControllerHost-Protocol.h>

@class NSExtension, NSString, UIKeyboardCameraRemoteViewController;
@protocol UIKeyboardCameraViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraViewController <UIKeyboardCameraRemoteViewControllerHost>
{
    id <UIKeyboardCameraViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_textContentType;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
    UIKeyboardCameraRemoteViewController *_remoteViewController;	// 32 = 0x20
}

+ (_Bool)isEnabled;	// IMP=0x0000000000eed077
+ (_Bool)isSupportedByDevice;	// IMP=0x0000000000eed010
+ (_Bool)isCameraRestricted;	// IMP=0x0000000000eece89
+ (void)_updateIsCameraRestricted;	// IMP=0x0000000000eece71
+ (_Bool)isLiveTextEnabled;	// IMP=0x0000000000eece26
- (void).cxx_destruct;	// IMP=0x0000000000eeda00
@property(retain, nonatomic) UIKeyboardCameraRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) __weak id <UIKeyboardCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000eed95f
- (void)keyboardCameraDidCancel;	// IMP=0x0000000000eed922
- (void)keyboardCameraDidAccept;	// IMP=0x0000000000eed8e5
- (void)keyboardCameraDidUpdateString:(id)arg1;	// IMP=0x0000000000eed873
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000eed261
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000eed1d5
- (void)viewDidLoad;	// IMP=0x0000000000eed13a
- (id)_backgroundColorForModalFormSheet;	// IMP=0x0000000000eed121
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000eed10f
- (id)init;	// IMP=0x0000000000eed0dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

