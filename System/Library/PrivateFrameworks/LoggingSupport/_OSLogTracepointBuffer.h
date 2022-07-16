//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogTracepointBuffer : NSObject
{
    CDStruct_c6d697a1 *_events;	// 8 = 0x8
    unsigned long long _cursor;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _size;	// 32 = 0x20
    _Bool _mutable;	// 40 = 0x28
}

- (void)enumerateEventsFromTime:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018abe
- (void)finishedInsertingTracepointsWithNextMajorTime:(unsigned long long)arg1 options:(unsigned int)arg2;	// IMP=0x00000000000187dc
- (void)insertTracepoints:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2 options:(unsigned int)arg3;	// IMP=0x0000000000018510
- (void)insertStatedumpChunk:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2;	// IMP=0x00000000000184fc
- (void)insertSimpleChunk:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2;	// IMP=0x00000000000184e8
- (void)insertChunk:(struct tracev3_chunk_s *)arg1 timestamp:(unsigned long long)arg2 subchunk:(id)arg3;	// IMP=0x0000000000018382
- (void)insertNonsparsePoint:(unsigned long long)arg1 uuid:(unsigned char [16])arg2 ttl:(unsigned char)arg3 inMemory:(_Bool)arg4;	// IMP=0x000000000001830a
- (void)insertTimesyncPoints:(struct _os_timesync_db_s *)arg1 forBoot:(unsigned char [16])arg2 oldestContinuousTime:(unsigned long long)arg3;	// IMP=0x000000000001821e
- (void)beginInsertingTracepointsClippingFromTime:(unsigned long long)arg1;	// IMP=0x00000000000181bf
- (_Bool)_isEmpty;	// IMP=0x00000000000181a9
- (void)dealloc;	// IMP=0x000000000001816f
- (id)init;	// IMP=0x000000000001812c

@end

