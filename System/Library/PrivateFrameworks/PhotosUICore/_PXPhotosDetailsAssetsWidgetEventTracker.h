//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosDetailsAssetsWidgetEventTracker-Protocol.h>

@class NSString;

@interface _PXPhotosDetailsAssetsWidgetEventTracker <PXPhotosDetailsAssetsWidgetEventTracker, PXChangeObserver>
{
    _Bool _isDisplayingCuratedContent;	// 8 = 0x8
    NSString *_visibleState;	// 16 = 0x10
    long long _visibleStateSignpost;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006164ef
@property(nonatomic) long long visibleStateSignpost; // @synthesize visibleStateSignpost=_visibleStateSignpost;
@property(retain, nonatomic) NSString *visibleState; // @synthesize visibleState=_visibleState;
@property(nonatomic) _Bool isDisplayingCuratedContent; // @synthesize isDisplayingCuratedContent=_isDisplayingCuratedContent;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000006163f2
- (void)_logDidEndViewingState:(id)arg1;	// IMP=0x00000000006162fb
- (void)_logDidStartViewingState:(id)arg1;	// IMP=0x0000000000616235
- (void)_updateVisibleState;	// IMP=0x0000000000616129
- (void)_invalidateVisibleState;	// IMP=0x00000000006160dd
- (void)logContentViewDidDisappear;	// IMP=0x00000000006160cb
- (void)logContentViewWillAppear;	// IMP=0x00000000006160b9
- (id)init;	// IMP=0x0000000000615fff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

