//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAPaths : NSObject
{
    NSMutableArray *_paths;	// 8 = 0x8
}

+ (id)pathsWithPaths:(id)arg1;	// IMP=0x00000000001006b7
+ (id)paths;	// IMP=0x000000000010069d
- (void).cxx_destruct;	// IMP=0x0000000000100631
- (id)uniqueEdgesForLabel:(id)arg1;	// IMP=0x0000000000100461
- (id)uniqueNodesForLabel:(id)arg1;	// IMP=0x0000000000100291
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000100151
- (id)graphRepresentationWithStrictNodes:(_Bool)arg1 strictEdges:(_Bool)arg2;	// IMP=0x00000000000fff1a
- (void)removeAllPaths;	// IMP=0x00000000000ffec9
- (void)setPaths:(id)arg1;	// IMP=0x00000000000ffd37
- (void)addPath:(id)arg1;	// IMP=0x00000000000ffcbb
- (id)pathAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ffc3c
- (unsigned long long)count;	// IMP=0x00000000000ffc26
- (id)description;	// IMP=0x00000000000ffb1e
- (id)init;	// IMP=0x00000000000ffac8

@end
