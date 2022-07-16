//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHCutPoint, NSNumber;

@interface CHSegmentDescriptor : NSObject
{
    NSNumber *_segmentID;	// 8 = 0x8
    CHCutPoint *_startCutPoint;	// 16 = 0x10
    CHCutPoint *_endCutPoint;	// 24 = 0x18
    struct CGRect _segmentBounds;	// 32 = 0x20
    struct CGRect _contextBounds;	// 64 = 0x40
}

+ (long long)indexForSegmentID:(id)arg1 fromSegments:(id)arg2;	// IMP=0x000000000005d180
+ (struct CGRect)boundingBoxFromSegmentID:(long long)arg1 toSegmentID:(long long)arg2 withSegments:(id)arg3 withSourceDrawing:(id)arg4;	// IMP=0x000000000005d000
+ (id)generateSegmentsFromDrawing:(id)arg1;	// IMP=0x000000000005ce00
- (void).cxx_destruct;	// IMP=0x000000000005d350
@property(nonatomic) struct CGRect contextBounds; // @synthesize contextBounds=_contextBounds;
@property(readonly, nonatomic) struct CGRect segmentBounds; // @synthesize segmentBounds=_segmentBounds;
@property(readonly, nonatomic) CHCutPoint *endCutPoint; // @synthesize endCutPoint=_endCutPoint;
@property(readonly, nonatomic) CHCutPoint *startCutPoint; // @synthesize startCutPoint=_startCutPoint;
@property(readonly, nonatomic) NSNumber *segmentID; // @synthesize segmentID=_segmentID;
- (_Bool)isSinglePointSegment;	// IMP=0x000000000005cd60
- (long long)strokeCount;	// IMP=0x000000000005cd10
- (id)strokeIndexSet;	// IMP=0x000000000005cc50
- (id)initWithSegmentID:(id)arg1 startCutPoint:(id)arg2 endCutPoint:(id)arg3 referenceDrawing:(id)arg4;	// IMP=0x000000000005ca40

@end

