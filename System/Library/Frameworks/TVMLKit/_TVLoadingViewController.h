//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IKImageElement, IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVLoadingViewController
{
    IKImageElement *_bgImageElement;	// 8 = 0x8
    IKImageElement *_heroImgElement;	// 16 = 0x10
    IKViewElement *_loadingTemplateElement;	// 24 = 0x18
    double _spinnerDelay;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f3a37
- (void)setSpinnerDelay:(double)arg1;	// IMP=0x00000000000f3909
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000f37ad
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000f3591
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000f350e
- (void)loadView;	// IMP=0x00000000000f33f0
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;	// IMP=0x00000000000f3360
- (struct CGSize)_backgroundImageProxySize;	// IMP=0x00000000000f32fc
- (long long)_blurEffectStyle;	// IMP=0x00000000000f32c1
- (_Bool)_backgroundImageRequiresBlur;	// IMP=0x00000000000f329a
- (id)_backgroundImageProxy;	// IMP=0x00000000000f317d
- (void)updateWithViewElement:(id)arg1;	// IMP=0x00000000000f2ac4
- (void)updateWithLoadingTemplate:(id)arg1;	// IMP=0x00000000000f2ab2
- (id)init;	// IMP=0x00000000000f2a69

@end

