//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPrioritizedTileKeys : NSObject
{
    void *_keysAndPriorities;	// 8 = 0x8
}

- (void)removeKey:(const struct _GEOTileKey *)arg1;	// IMP=0x00000000012e95de
- (_Bool)popHighestPriorityKey:(struct _GEOTileKey *)arg1 priority:(unsigned int *)arg2;	// IMP=0x00000000012e9575
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned int highestPriority;
- (void)setPriority:(unsigned int)arg1 forKey:(const struct _GEOTileKey *)arg2;	// IMP=0x00000000012e9322
- (void)dealloc;	// IMP=0x00000000012e92cb
- (id)initWithKeys:(id)arg1 priorities:(id)arg2;	// IMP=0x00000000012e8d62
- (id)init;	// IMP=0x00000000012e8cec

@end

