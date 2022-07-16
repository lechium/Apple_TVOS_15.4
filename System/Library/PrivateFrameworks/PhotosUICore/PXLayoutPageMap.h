//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface PXLayoutPageMap : NSObject
{
    NSMapTable *_pageMap;	// 8 = 0x8
    NSArray *_sources;	// 16 = 0x10
    struct CGRect _contentRect;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000030f9b9
- (void)_mapSources:(id)arg1;	// IMP=0x000000000030f967
- (id)sourcesFromRect:(struct CGRect)arg1;	// IMP=0x000000000030f682
- (id)_screenPageForPoint:(struct CGPoint)arg1;	// IMP=0x000000000030f556
- (id)description;	// IMP=0x000000000030f4de
- (id)initWithSources:(id)arg1 contentRect:(struct CGRect)arg2;	// IMP=0x000000000030f3b5

@end

