//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NSFastEnumeration;

@interface PHCollectionListAncestryContext : NSObject
{
    id <NSFastEnumeration> _allCollectionLists;	// 8 = 0x8
    NSMutableDictionary *_collectionListsByOID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000197d20
@property(retain) NSMutableDictionary *collectionListsByOID; // @synthesize collectionListsByOID=_collectionListsByOID;
@property(retain) id <NSFastEnumeration> allCollectionLists; // @synthesize allCollectionLists=_allCollectionLists;
- (id)folderForID:(id)arg1;	// IMP=0x0000000000197ca8
- (id)initWithCollectionLists:(id)arg1;	// IMP=0x0000000000197a91

@end
