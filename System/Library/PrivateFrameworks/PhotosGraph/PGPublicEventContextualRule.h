//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGContextualRule-Protocol.h>

@class NSString, PGGraph, PGGraphMomentNodeCollection, PGGraphPublicEventNodeCollection, PHPhotoLibrary;
@protocol OS_os_log;

@interface PGPublicEventContextualRule : NSObject <PGContextualRule>
{
    PGGraph *_graph;	// 8 = 0x8
    PGGraphPublicEventNodeCollection *_publicEventNodes;	// 16 = 0x10
    PGGraphMomentNodeCollection *_momentNodesMatchingPublicEvents;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    NSObject<OS_os_log> *_loggingConnection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000038055b
- (id)highlightNodesMatchingYearHighlight:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000380448
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 curationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000003801d3
- (_Bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;	// IMP=0x000000000037fe73
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2 loggingConnection:(id)arg3;	// IMP=0x000000000037fdbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

