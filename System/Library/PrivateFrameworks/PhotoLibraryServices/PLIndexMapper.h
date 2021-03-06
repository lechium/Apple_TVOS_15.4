//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PLIndexMapperDataSource;

@interface PLIndexMapper : NSObject
{
    id <PLIndexMapperDataSource> _dataSource;	// 8 = 0x8
}

- (_Bool)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3;	// IMP=0x000000000026b059
- (unsigned long long)backingIndexForIndex:(unsigned long long)arg1;	// IMP=0x000000000026af11
- (id)backingIndexesForIndexes:(id)arg1;	// IMP=0x000000000026adef
- (unsigned long long)indexForBackingIndex:(unsigned long long)arg1;	// IMP=0x000000000026ad87
- (id)indexesForBackingIndexes:(id)arg1;	// IMP=0x000000000026ac86
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000026abbb

@end

