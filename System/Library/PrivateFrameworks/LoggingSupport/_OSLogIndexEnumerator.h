//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _OSLogCatalogFilter, _OSLogIndex, _OSLogTracepointBuffer;

__attribute__((visibility("hidden")))
@interface _OSLogIndexEnumerator : NSObject
{
    NSMutableArray *_subchunkStartQ;	// 8 = 0x8
    NSMutableArray *_subchunkEndQ;	// 16 = 0x10
    NSMutableArray *_catalogStartQ;	// 24 = 0x18
    NSMutableArray *_fileStartQ;	// 32 = 0x20
    NSMutableArray *_fileEndQ;	// 40 = 0x28
    NSMutableArray *_fileBootQ;	// 48 = 0x30
    NSMutableArray *_oversizeChunks;	// 56 = 0x38
    struct os_timesync_range_s *_bounds[6];	// 64 = 0x40
    struct os_timesync_range_s *_live_bound;	// 112 = 0x70
    _OSLogTracepointBuffer *_tracepoints;	// 120 = 0x78
    _OSLogIndex *_index;	// 128 = 0x80
    _OSLogCatalogFilter *_catalogFilter;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000001b028
@property(readonly, nonatomic) NSMutableArray *oversizeChunks; // @synthesize oversizeChunks=_oversizeChunks;
- (void)enumerateTracepointsInRange:(struct os_timesync_range_s *)arg1 timesync:(struct _os_timesync_db_s *)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001956b
- (void)_initTimesyncBounds:(CDStruct_42ec109f *)arg1;	// IMP=0x000000000001937f
- (void)dealloc;	// IMP=0x00000000000192e3
- (id)initWithIndex:(id)arg1 metadata:(CDStruct_42ec109f *)arg2 fileBootList:(id)arg3 catalogFilter:(id)arg4;	// IMP=0x0000000000019150

@end

