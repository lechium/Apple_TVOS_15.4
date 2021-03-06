//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MFLibrarySearchableIndexUpdates : NSObject
{
    NSArray *_itemsRequiringIndexing;	// 8 = 0x8
    NSArray *_removedIdentifiers;	// 16 = 0x10
    NSArray *_removedDomainIdentifiers;	// 24 = 0x18
}

+ (id)updates;	// IMP=0x0000000000070aae
@property(copy, nonatomic) NSArray *removedDomainIdentifiers; // @synthesize removedDomainIdentifiers=_removedDomainIdentifiers;
@property(copy, nonatomic) NSArray *removedIdentifiers; // @synthesize removedIdentifiers=_removedIdentifiers;
@property(copy, nonatomic) NSArray *itemsRequiringIndexing; // @synthesize itemsRequiringIndexing=_itemsRequiringIndexing;
- (id)description;	// IMP=0x0000000000070b11
- (void)dealloc;	// IMP=0x0000000000070ac0

@end

