//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface PHAssetKeywordProperties
{
    NSSet *_keywordTitles;	// 16 = 0x10
}

+ (id)propertiesToFetch;	// IMP=0x00000000000e8e60
+ (_Bool)isToMany;	// IMP=0x00000000000e8e58
+ (id)keyPathToPrimaryObject;	// IMP=0x00000000000e8e50
+ (id)keyPathFromPrimaryObject;	// IMP=0x00000000000e8e48
+ (id)entityName;	// IMP=0x00000000000e8e3b
+ (id)propertySetName;	// IMP=0x00000000000e8e2e
- (void).cxx_destruct;	// IMP=0x00000000000e8e1b
@property(readonly, copy, nonatomic) NSSet *keywordTitles; // @synthesize keywordTitles=_keywordTitles;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000000e8d1a

@end

