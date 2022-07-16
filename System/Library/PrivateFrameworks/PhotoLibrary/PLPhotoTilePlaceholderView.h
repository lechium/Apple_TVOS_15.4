//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLTilePlaceholderView-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView>
{
    UIActivityIndicatorView *_loadingIndicatorView;	// 8 = 0x8
    UILabel *_loadingLabel;	// 16 = 0x10
    UIView *_loadingContainerView;	// 24 = 0x18
    double _lastViewPhaseChangeDate;	// 32 = 0x20
    _Bool _indicatorIsVisible;	// 40 = 0x28
}

- (void)layoutSubviews;	// IMP=0x000000000001b090
- (void)setImageRect:(struct CGRect)arg1;	// IMP=0x000000000001b08a
- (void)setToolbarVisible:(_Bool)arg1;	// IMP=0x000000000001b084
- (void)showLoadingIndicator;	// IMP=0x000000000001b07e
- (void)showErrorIndicator;	// IMP=0x000000000001b078
- (void)showLoadingIndicatorWhenReady;	// IMP=0x000000000001afd6
- (void)updateCloudDownloadProgress:(double)arg1;	// IMP=0x000000000001afd0
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(_Bool)arg1;	// IMP=0x000000000001aeed
- (void)dealloc;	// IMP=0x000000000001ae87
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001abea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

