//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHAssetPhotoCommentProperties
{
    _Bool _hasUserLiked;	// 16 = 0x10
    unsigned long long _commentCount;	// 24 = 0x18
    unsigned long long _likeCount;	// 32 = 0x20
}

+ (id)propertiesToFetch;	// IMP=0x00000000000e4e42
+ (_Bool)isToMany;	// IMP=0x00000000000e4e3a
+ (id)keyPathToPrimaryObject;	// IMP=0x00000000000e4e32
+ (id)keyPathFromPrimaryObject;	// IMP=0x00000000000e4e2a
+ (id)entityName;	// IMP=0x00000000000e4e1d
+ (id)propertySetName;	// IMP=0x00000000000e4e10
@property(readonly, nonatomic) _Bool hasUserLiked; // @synthesize hasUserLiked=_hasUserLiked;
@property(readonly, nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(readonly, nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000000e4ab6

@end

