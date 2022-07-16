//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PSIGroupResult;

@interface PLSearchResult : NSObject
{
    PSIGroupResult *_groupResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000309627
@property(readonly, nonatomic) PSIGroupResult *groupResult; // @synthesize groupResult=_groupResult;
- (_Bool)isImplicitlyTokenized;	// IMP=0x000000000030936a
- (_Bool)isMatchedByIdentifierAtIndex:(long long)arg1;	// IMP=0x0000000000309354
- (_Bool)isContentStringTextSearchableAtIndex:(long long)arg1;	// IMP=0x000000000030933e
- (id)matchRangesAtIndex:(long long)arg1;	// IMP=0x0000000000309328
- (id)tokensAtIndex:(long long)arg1;	// IMP=0x0000000000309312
- (long long)categoryAtIndex:(long long)arg1;	// IMP=0x00000000003092fc
- (unsigned long long)groupCount;	// IMP=0x00000000003092e6
@property(readonly) NSString *owningContentString;
@property(readonly, nonatomic) NSString *groupDescription;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) NSString *keyAssetUUID;
@property(readonly, nonatomic) NSString *transientToken;
@property(readonly, nonatomic) NSArray *matchRanges;
@property(readonly, nonatomic) NSArray *lookupIdentifiers;
@property(readonly, nonatomic) NSArray *contentStrings;
@property(readonly, nonatomic) NSArray *searchTokens;
@property(readonly, nonatomic) unsigned long long categoryMask;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithGroupResult:(id)arg1;	// IMP=0x0000000000308ea7

@end
