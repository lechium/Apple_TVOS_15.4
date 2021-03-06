//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/UIImagePickerControllerDelegate-Protocol.h>
#import <PhotoLibrary/UINavigationControllerDelegate-Protocol.h>

@class NSDictionary, NSString, UIImagePickerController, UINavigationItem;

@interface PLUIEditVideoViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSDictionary *_options;	// 136 = 0x88
    UIImagePickerController *_imagePicker;	// 144 = 0x90
    UINavigationItem *_navItem;	// 152 = 0x98
    id _delegate;	// 160 = 0xa0
    Class _viewClass;	// 168 = 0xa8
    unsigned int _canCreateMetadata;	// 176 = 0xb0
    _Bool _parentInPopoverException;	// 180 = 0xb4
}

@property(nonatomic) _Bool parentInPopoverException; // @synthesize parentInPopoverException=_parentInPopoverException;
- (void)videoViewPlaybackDidFail:(id)arg1;	// IMP=0x000000000002caf0
- (_Bool)videoViewCanCreateMetadata:(id)arg1;	// IMP=0x000000000002cadc
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;	// IMP=0x000000000002cad3
- (void)_trimVideo:(id)arg1;	// IMP=0x000000000002caa2
- (struct CGRect)previewFrame;	// IMP=0x000000000002ca81
- (int)cropOverlayMode;	// IMP=0x000000000002ca76
- (void)_cancelTrim:(id)arg1;	// IMP=0x000000000002ca21
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;	// IMP=0x000000000002c963
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;	// IMP=0x000000000002c8cf
- (void)viewDidLoad;	// IMP=0x000000000002c815
- (void)loadView;	// IMP=0x000000000002c78a
- (void)setViewClass:(Class)arg1;	// IMP=0x000000000002c779
- (Class)_viewClass;	// IMP=0x000000000002c768
- (id)uiipc_imagePickerController;	// IMP=0x000000000002c760
- (id)_trimMessage;	// IMP=0x000000000002c733
- (id)uiipc_imagePickerOptions;	// IMP=0x000000000002c722
- (void)setImagePickerOptions:(id)arg1;	// IMP=0x000000000002c6dd
- (void)dealloc;	// IMP=0x000000000002c677
- (void)setDelegate:(id)arg1;	// IMP=0x000000000002c666
- (id)delegate;	// IMP=0x000000000002c655
- (id)navigationItem;	// IMP=0x000000000002c5f7
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000002c5ef
- (id)initWithVideoURL:(id)arg1 trimTitle:(id)arg2;	// IMP=0x000000000002c55a
- (id)initWithProperties:(id)arg1;	// IMP=0x000000000002c46c
- (id)initWithPhoto:(id)arg1 trimTitle:(id)arg2;	// IMP=0x000000000002c3c4
- (void)_setupNavigationItemAndTrimTitle:(id)arg1;	// IMP=0x000000000002c2bc
- (_Bool)_editingForThirdParty;	// IMP=0x000000000002c28e
- (_Bool)_displaysFullScreen;	// IMP=0x000000000002c286

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

