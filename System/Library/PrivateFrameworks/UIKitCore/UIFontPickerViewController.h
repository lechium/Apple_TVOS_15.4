//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIFontPicker-Protocol.h>
#import <UIKitCore/_UIFontPickerRemoteViewControllerHost-Protocol.h>
#import <UIKitCore/_UIRemoteViewControllerContaining-Protocol.h>

@class NSExtension, NSString, UIFontDescriptor, UIFontPickerViewControllerConfiguration, _UIFontPickerRemoteViewController, _UIRemoteViewController;
@protocol NSCopying, UIFontPickerViewControllerDelegate;

@interface UIFontPickerViewController <_UIFontPickerRemoteViewControllerHost, _UIRemoteViewControllerContaining, UIFontPicker>
{
    _Bool _presentingViewController;	// 400 = 0x190
    _UIFontPickerRemoteViewController *_childViewController;	// 408 = 0x198
    UIFontPickerViewControllerConfiguration *_configuration;	// 416 = 0x1a0
    id <UIFontPickerViewControllerDelegate> _delegate;	// 424 = 0x1a8
    UIFontDescriptor *_selectedFontDescriptor;	// 432 = 0x1b0
    NSExtension *_extension;	// 440 = 0x1b8
    id <NSCopying> _extensionRequestIdentifier;	// 448 = 0x1c0
}

- (void).cxx_destruct;	// IMP=0x0000000000ed4fb3
@property(copy, nonatomic) id <NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, copy, nonatomic) UIFontPickerViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIFontDescriptor *selectedFontDescriptor; // @synthesize selectedFontDescriptor=_selectedFontDescriptor;
@property(nonatomic) __weak id <UIFontPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ed4ece
- (void)_viewControllerPresentationDidInitiate;	// IMP=0x0000000000ed4e94
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000ed4e09
- (id)remoteViewController;	// IMP=0x0000000000ed4d33
- (void)_setChildViewController:(id)arg1;	// IMP=0x0000000000ed48cb
- (void)_pickerDidCancel;	// IMP=0x0000000000ed47e0
- (void)_pickerDidSelectFont:(id)arg1;	// IMP=0x0000000000ed4595
- (void)invalidate;	// IMP=0x0000000000ed4548
- (void)dealloc;	// IMP=0x0000000000ed450a
- (void)_commonInitWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ed3e5c
- (id)_initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ed3df0
- (id)_initWithMode:(unsigned long long)arg1 hideSearchBar:(_Bool)arg2 tintColor:(id)arg3;	// IMP=0x0000000000ed3d40
- (id)init;	// IMP=0x0000000000ed3cfe
- (id)initWithSelectedFont:(id)arg1 inMode:(unsigned long long)arg2;	// IMP=0x0000000000ed3c3c
- (id)initWithMode:(unsigned long long)arg1;	// IMP=0x0000000000ed3ba3
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000ed3b0e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ed3a73
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ed399f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

