//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryMovieHighlightCuration-Protocol.h>

@class NSArray, NSString;
@protocol PXStoryMovieHighlight;

@interface PXStoryMockMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration>
{
    NSArray *_highlights;	// 8 = 0x8
    id <PXStoryMovieHighlight> _summary;	// 16 = 0x10
    id <PXStoryMovieHighlight> _live;	// 24 = 0x18
    id <PXStoryMovieHighlight> _movie;	// 32 = 0x20
    id <PXStoryMovieHighlight> _fallback;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005e987b
@property(readonly, nonatomic) id <PXStoryMovieHighlight> defaultHighlight;
@property(readonly, nonatomic) id <PXStoryMovieHighlight> fullMovie;
@property(readonly, nonatomic) id <PXStoryMovieHighlight> livePhoto;
@property(readonly, nonatomic) id <PXStoryMovieHighlight> movieSummary;
@property(readonly, nonatomic) id <PXStoryMovieHighlight> bestHighlight;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *highlights;
- (id)initWithHighlights:(id)arg1 fallback:(id)arg2 summary:(id)arg3 live:(id)arg4 full:(id)arg5;	// IMP=0x00000000005e9506
- (id)initWithFullMovie:(id)arg1;	// IMP=0x00000000005e94d8
- (id)initWithLivePhoto:(id)arg1;	// IMP=0x00000000005e94a6
- (id)initWithMovieSummary:(id)arg1;	// IMP=0x00000000005e9474
- (id)initWithMovieHighlights:(id)arg1;	// IMP=0x00000000005e9449
- (id)init;	// IMP=0x00000000005e9417

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

