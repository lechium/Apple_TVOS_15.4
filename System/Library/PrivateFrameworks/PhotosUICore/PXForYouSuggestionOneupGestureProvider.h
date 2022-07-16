//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, PXForYouSuggestionAssetsDataSourceManager, UILongPressGestureRecognizer;

@interface PXForYouSuggestionOneupGestureProvider <UIGestureRecognizerDelegate>
{
    NSArray *_gestureRecognizers;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressRecognizer;	// 16 = 0x10
    PXForYouSuggestionAssetsDataSourceManager *_dataSourceManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008f40bd
@property(readonly, nonatomic) PXForYouSuggestionAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000008f3fc5
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000008f3fbd
- (void)_stopShowingOriginal;	// IMP=0x00000000008f3f6c
- (void)_startShowingOriginal;	// IMP=0x00000000008f3f1b
- (void)_handleLongPress:(id)arg1;	// IMP=0x00000000008f3ecd
- (void)_createGestureRecognizersIfNeeded;	// IMP=0x00000000008f3d90
- (void)hostingViewDidChange;	// IMP=0x00000000008f3cce
- (id)gestureRecognizers;	// IMP=0x00000000008f3ca2
- (id)initWithDataSourceManager:(id)arg1;	// IMP=0x00000000008f3c34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

