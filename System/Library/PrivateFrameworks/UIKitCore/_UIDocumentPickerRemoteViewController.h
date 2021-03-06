//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIDocumentPickerServiceInvalidating-Protocol.h>
#import <UIKitCore/_UIDocumentPickerViewControllerHost-Protocol.h>

@class NSString, UIViewController;
@protocol _UIDocumentPickerRemoteViewControllerContaining;

@interface _UIDocumentPickerRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating>
{
    UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *_publicController;	// 400 = 0x190
    NSString *_identifier;	// 408 = 0x198
}

+ (id)exportedInterface;	// IMP=0x0000000000556706
+ (id)serviceViewControllerInterface;	// IMP=0x00000000005565fc
- (void).cxx_destruct;	// IMP=0x0000000000556ba0
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController; // @synthesize publicController=_publicController;
- (void)_tintColorDidChangeToColor:(id)arg1;	// IMP=0x0000000000556adc
- (void)_stitchFileCreationAtURL:(id)arg1;	// IMP=0x0000000000556a6a
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x000000000055699c
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000556932
- (void)_dismissWithOption:(id)arg1;	// IMP=0x00000000005568c0
- (void)_didSelectPicker;	// IMP=0x0000000000556883
- (void)_dismissViewController;	// IMP=0x0000000000556846
- (void)_didSelectURLBookmark:(id)arg1;	// IMP=0x0000000000556840
- (void)_didSelectURLWrapper:(id)arg1;	// IMP=0x00000000005567b0
- (void)viewDidLoad;	// IMP=0x0000000000556726
- (void)invalidate;	// IMP=0x00000000005566ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

