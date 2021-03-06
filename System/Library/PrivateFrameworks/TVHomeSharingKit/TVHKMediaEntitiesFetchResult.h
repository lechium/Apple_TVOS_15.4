//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVHKMediaEntitiesFetchResult : NSObject
{
    NSArray *_mediaEntities;	// 8 = 0x8
    NSArray *_sortDescriptors;	// 16 = 0x10
    NSArray *_indexBarItems;	// 24 = 0x18
}

+ (id)new;	// IMP=0x000000000001d69a
- (void).cxx_destruct;	// IMP=0x000000000001dce2
@property(readonly, copy, nonatomic) NSArray *indexBarItems; // @synthesize indexBarItems=_indexBarItems;
@property(readonly, copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
- (id)description;	// IMP=0x000000000001db9b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d923
- (unsigned long long)hash;	// IMP=0x000000000001d81e
- (id)initWithMediaEntities:(id)arg1 sortDescriptors:(id)arg2 indexBarItems:(id)arg3;	// IMP=0x000000000001d738
- (id)init;	// IMP=0x000000000001d6c9

@end

