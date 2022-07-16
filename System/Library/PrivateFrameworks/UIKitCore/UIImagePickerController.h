//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/_UIRemoteViewControllerContaining-Protocol.h>

@class NSArray, NSExtension, NSMutableDictionary, NSString, UIView, UIViewController, _UIRemoteViewController;
@protocol UINavigationControllerDelegate><UIImagePickerControllerDelegate;

@interface UIImagePickerController <_UIRemoteViewControllerContaining, NSCoding>
{
    long long _sourceType;	// 400 = 0x190
    id _image;	// 408 = 0x198
    struct CGRect _cropRect;	// 416 = 0x1a0
    NSArray *_mediaTypes;	// 448 = 0x1c0
    NSMutableDictionary *_properties;	// 456 = 0x1c8
    int _previousStatusBarStyle;	// 464 = 0x1d0
    _Bool _previousStatusBarHidden;	// 468 = 0x1d4
    Class _photoPickerRequestOptionsClass;	// 472 = 0x1d8
    CDUnknownBlockType _photoPickerDisplayCompletion;	// 480 = 0x1e0
    CDUnknownBlockType _photoPickerPreviewDisplayCompletion;	// 488 = 0x1e8
    _Bool _photoPickerDidStartDelayingPresentation;	// 496 = 0x1f0
    _Bool _photoPickerDidEndDelayingPresentation;	// 497 = 0x1f1
    _Bool _photoPickerIsPreheating;	// 498 = 0x1f2
    UIViewController *_photoPickerPreheatedViewController;	// 504 = 0x1f8
    CDStruct_d1897728 _imagePickerFlags;	// 512 = 0x200
    unsigned long long _savingOptions;	// 520 = 0x208
    NSExtension *_photosExtension;	// 528 = 0x210
}

+ (_Bool)isFlashAvailableForCameraDevice:(long long)arg1;	// IMP=0x00000000003caed9
+ (id)availableCaptureModesForCameraDevice:(long long)arg1;	// IMP=0x00000000003caed1
+ (_Bool)isCameraDeviceAvailable:(long long)arg1;	// IMP=0x00000000003caec9
+ (id)availableMediaTypesForSourceType:(long long)arg1;	// IMP=0x00000000003cad6e
+ (_Bool)_reviewCapturedItems;	// IMP=0x00000000003cad66
+ (_Bool)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2;	// IMP=0x00000000003cac1d
+ (_Bool)isSourceTypeAvailable:(long long)arg1;	// IMP=0x00000000003cabd3
- (void).cxx_destruct;	// IMP=0x00000000003d0ab2
@property(retain, nonatomic) NSExtension *photosExtension; // @synthesize photosExtension=_photosExtension;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;	// IMP=0x00000000003d098e
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;	// IMP=0x00000000003d0748
- (void)_imagePickerDidCancel;	// IMP=0x00000000003d06d9
- (void)_autoDismiss;	// IMP=0x00000000003d0695
@property(readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
- (long long)_preferredModalPresentationStyle;	// IMP=0x00000000003d05ed
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;	// IMP=0x00000000003d05e7
- (void)_setupControllersForCurrentMediaTypes;	// IMP=0x00000000003d0454
- (void)_handleTopViewControllerReadyForDisplay:(id)arg1;	// IMP=0x00000000003d037f
- (void)_setupControllersForCurrentSourceTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d024e
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;	// IMP=0x00000000003d014d
- (void)didSelectMediaWithInfoDictionary:(id)arg1;	// IMP=0x00000000003d004c
- (void)didDisplayPhotoPickerPreview;	// IMP=0x00000000003cff49
- (void)_handleEndingPhotoPickerPresentationDelay;	// IMP=0x00000000003cff0a
- (void)didDisplayPhotoPickerSourceType:(id)arg1;	// IMP=0x00000000003cfd28
- (void)setPhotoPickerViewControllerTitle:(id)arg1;	// IMP=0x00000000003cfd22
- (void)_handlePushViewController:(id)arg1;	// IMP=0x00000000003cfd0b
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;	// IMP=0x00000000003cf974
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;	// IMP=0x00000000003cf7e1
- (void)cancelPhotoPicker;	// IMP=0x00000000003cf725
- (void)_testPerformPreviewOfFirstPhoto;	// IMP=0x00000000003cf6d0
- (void)_invalidatePhotoPickerServices;	// IMP=0x00000000003cf571
- (void)_setPhotoPickerPreviewDisplayCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003cf545
- (CDUnknownBlockType)_photoPickerPreviewDisplayCompletion;	// IMP=0x00000000003cf528
- (void)_setPhotoPickerDisplayCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003cf4fc
- (CDUnknownBlockType)_photoPickerDisplayCompletion;	// IMP=0x00000000003cf4df
@property(readonly, nonatomic) Class photoPickerRequestOptionsClass;
- (id)_propertiesForPhotoPickerExtension;	// IMP=0x00000000003cefb7
- (void)_handleInstantiatedRemoteViewController:(id)arg1 request:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003ce933
- (void)_handleMatchingExtension:(id)arg1 viewControllerClassName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003ce5e4
- (void)_createInitialControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ce1a8
- (_Bool)_shouldDelayPresentation;	// IMP=0x00000000003ce190
- (void)_removeAllChildren;	// IMP=0x00000000003ce055
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000003ce030
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000003ce003
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;	// IMP=0x00000000003cdfd6
- (_Bool)_didRevertStatusBar;	// IMP=0x00000000003cdfc1
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000003cde87
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000003cdc39
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003cda28
- (void)viewWillUnload;	// IMP=0x00000000003cd980
- (void)_viewControllerPresentationDidInitiate;	// IMP=0x00000000003cd8aa
@property(nonatomic) long long cameraFlashMode;
@property(nonatomic) long long cameraCaptureMode;
- (_Bool)_isCameraCaptureModeValid:(long long)arg1;	// IMP=0x00000000003cd56e
@property(nonatomic) long long cameraDevice;
- (void)stopVideoCapture;	// IMP=0x00000000003cd2e5
- (_Bool)startVideoCapture;	// IMP=0x00000000003cd286
- (void)takePicture;	// IMP=0x00000000003cd22d
@property(nonatomic) struct CGAffineTransform cameraViewTransform;
@property(retain, nonatomic) UIView *cameraOverlayView;
@property(nonatomic) _Bool showsCameraControls;
- (id)_cameraViewController;	// IMP=0x00000000003ccc54
- (_Bool)_sourceTypeIsCamera;	// IMP=0x00000000003ccbf9
- (unsigned long long)_imagePickerSavingOptions;	// IMP=0x00000000003ccbe8
- (void)_setImagePickerSavingOptions:(unsigned long long)arg1;	// IMP=0x00000000003ccbd7
- (id)_valueForProperty:(id)arg1;	// IMP=0x00000000003ccb64
- (void)_setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000003cca5b
- (id)_properties;	// IMP=0x00000000003cca14
- (void)_initializeProperties;	// IMP=0x00000000003cc73c
- (void)_setProperties:(id)arg1;	// IMP=0x00000000003cc6b6
- (_Bool)_allowsImageEditing;	// IMP=0x00000000003cc66b
- (void)_setAllowsImageEditing:(_Bool)arg1;	// IMP=0x00000000003cc576
@property(copy, nonatomic) NSString *videoExportPreset;
@property(nonatomic) long long videoQuality;
@property(nonatomic) double videoMaximumDuration;
@property(nonatomic) long long imageExportPreset;
@property(nonatomic) _Bool allowsEditing;
@property(nonatomic) _Bool allowsImageEditing;
- (void)_setAllowsIris:(_Bool)arg1;	// IMP=0x00000000003cc2a7
- (_Bool)_allowsIris;	// IMP=0x00000000003cc25c
- (void)_setTargetForPrompt:(id)arg1;	// IMP=0x00000000003cc243
- (id)_targetForPrompt;	// IMP=0x00000000003cc22a
- (void)_setStaticPrompt:(id)arg1;	// IMP=0x00000000003cc211
- (id)_staticPrompt;	// IMP=0x00000000003cc1f8
- (void)_setShowsPrompt:(_Bool)arg1;	// IMP=0x00000000003cc19e
- (_Bool)_showsPrompt;	// IMP=0x00000000003cc153
- (void)_setConvertAutoloopsToGIF:(_Bool)arg1;	// IMP=0x00000000003cc0f9
- (_Bool)_convertAutoloopsToGIF;	// IMP=0x00000000003cc0ae
- (void)_setOnlyShowAutoloops:(_Bool)arg1;	// IMP=0x00000000003cc054
- (_Bool)_onlyShowAutoloops;	// IMP=0x00000000003cc009
- (void)_setShowsFileSizePicker:(_Bool)arg1;	// IMP=0x00000000003cbfaf
- (_Bool)_showsFileSizePicker;	// IMP=0x00000000003cbf64
- (void)_setRequiresPickingConfirmation:(_Bool)arg1;	// IMP=0x00000000003cbf0a
- (_Bool)_requiresPickingConfirmation;	// IMP=0x00000000003cbebf
- (void)_setMultipleSelectionLimit:(unsigned long long)arg1;	// IMP=0x00000000003cbe65
- (unsigned long long)_multipleSelectionLimit;	// IMP=0x00000000003cbe1a
- (void)_setAllowsMultipleSelection:(_Bool)arg1;	// IMP=0x00000000003cbdc0
- (_Bool)_allowsMultipleSelection;	// IMP=0x00000000003cbd75
@property(copy, nonatomic) NSArray *mediaTypes;
@property(nonatomic) long long sourceType;
- (void)_updateCameraCaptureMode;	// IMP=0x00000000003cb5f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003cb517
- (void)_populateArchivedChildViewControllers:(id)arg1;	// IMP=0x00000000003cb4b3
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect)arg2;	// IMP=0x00000000003cb314
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cb10f
- (id)init;	// IMP=0x00000000003caee1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

