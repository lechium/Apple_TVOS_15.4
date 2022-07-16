//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXDisplayAssetVideoContentProvider, PXVideoSessionManager;

@interface PXStoryVideoAssetResourcePreloadingOperation <PXChangeObserver>
{
    _Bool _isExporting;	// 8 = 0x8
    PXVideoSessionManager *_videoSessionManager;	// 16 = 0x10
    PXDisplayAssetVideoContentProvider *_videoContentProvider;	// 24 = 0x18
    CDStruct_e83c9415 _downloadTimeRange;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000047493a
@property(readonly, nonatomic) _Bool isExporting; // @synthesize isExporting=_isExporting;
@property(retain) PXDisplayAssetVideoContentProvider *videoContentProvider; // @synthesize videoContentProvider=_videoContentProvider;
@property(readonly, nonatomic) PXVideoSessionManager *videoSessionManager; // @synthesize videoSessionManager=_videoSessionManager;
@property(readonly, nonatomic) CDStruct_e83c9415 downloadTimeRange; // @synthesize downloadTimeRange=_downloadTimeRange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000047477d
- (void)cancel;	// IMP=0x00000000004746cf
- (void)px_start;	// IMP=0x000000000047438d
- (id)diagnosticDescription;	// IMP=0x000000000047426f
- (id)initWithDisplayAssetResource:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x00000000004741df
- (id)initWithVideoAssetResource:(id)arg1 mediaProvider:(id)arg2 downloadTimeRange:(CDStruct_e83c9415)arg3 videoSessionManager:(id)arg4 isExporting:(_Bool)arg5;	// IMP=0x0000000000474128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
