//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapItem, MKMapSnapshotView, NSError, NSLayoutConstraint, NSMutableArray, NSTimer;

@interface MKMapItemView : UIView
{
    MKMapSnapshotView *_snapshotView;	// 8 = 0x8
    CDStruct_951efa70 _coordinateSpan;	// 16 = 0x10
    CDUnknownBlockType _mapItemloadedCompletionHandler;	// 32 = 0x20
    NSMutableArray *_snapshotConstraints;	// 40 = 0x28
    NSLayoutConstraint *_snapshotWidthConstraint;	// 48 = 0x30
    NSError *_snapshotError;	// 56 = 0x38
    NSTimer *_loadTimeoutTimer;	// 64 = 0x40
    struct CGSize _sizeWhenLastLoaded;	// 72 = 0x48
    _Bool _loadCalledOnce;	// 88 = 0x58
    unsigned long long _signpostID;	// 96 = 0x60
    _Bool _loadingMuninView;	// 104 = 0x68
    _Bool _shouldResolveMapItem;	// 105 = 0x69
    _Bool _shouldShowBorders;	// 106 = 0x6a
    MKMapItem *_mapItem;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000139145
@property(nonatomic) _Bool shouldShowBorders; // @synthesize shouldShowBorders=_shouldShowBorders;
@property(readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) _Bool shouldResolveMapItem; // @synthesize shouldResolveMapItem=_shouldResolveMapItem;
- (void)dealloc;	// IMP=0x000000000013907f
- (void)triggerAnimation;	// IMP=0x0000000000139079
- (void)_resetState;	// IMP=0x0000000000138fde
- (void)cancel;	// IMP=0x0000000000138fa5
- (void)_callCompletionHandler;	// IMP=0x0000000000138e3f
- (void)_renderMapItem;	// IMP=0x0000000000138dd9
- (void)_takeSnapshotCompleted;	// IMP=0x0000000000138dab
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000138c99
- (void)_reloadSnapshot;	// IMP=0x0000000000138b48
- (void)_setupSnapshotConstraints;	// IMP=0x000000000013888e
- (void)_handleTapOnSnapshot:(id)arg1;	// IMP=0x000000000013886f
- (id)_annotationView;	// IMP=0x0000000000138779
- (id)_customAnnotation;	// IMP=0x00000000001385f5
- (id)_deriveSnapshotOptions:(_Bool)arg1;	// IMP=0x0000000000138446
- (void)layoutSubviews;	// IMP=0x0000000000138301
- (void)_takeSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1 isReload:(_Bool)arg2;	// IMP=0x0000000000137f21
- (CDStruct_c3b9c2ee)_clampCoordinateSpan:(CDStruct_c3b9c2ee)arg1;	// IMP=0x0000000000137edd
- (void)_callCompletionHandlerWithInvalidBoundsError;	// IMP=0x0000000000137df2
- (_Bool)_areBoundsValid;	// IMP=0x0000000000137d8e
- (void)loadMapItem:(id)arg1 coordinateSpan:(CDStruct_c3b9c2ee)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000137b50
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000137a98

@end
