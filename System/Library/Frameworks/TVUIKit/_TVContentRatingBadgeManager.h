//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDictionary;

@interface _TVContentRatingBadgeManager : NSObject
{
    _Bool _cachesImages;	// 8 = 0x8
    NSCache *_imageCache;	// 16 = 0x10
    NSDictionary *_badgeDescriptors;	// 24 = 0x18
}

+ (id)_imageForUnknownRatingLabel:(id)arg1;	// IMP=0x000000000000bc29
+ (id)_imageLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;	// IMP=0x000000000000bbc1
+ (void)_addImageDescriptorToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(_Bool)arg5;	// IMP=0x000000000000bacf
+ (id)_cleanedRatingLabel:(id)arg1;	// IMP=0x000000000000ba07
+ (id)_badgeDescriptorLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;	// IMP=0x000000000000b939
+ (id)sharedInstance;	// IMP=0x000000000000a8ad
- (void).cxx_destruct;	// IMP=0x000000000000bc79
@property(retain, nonatomic) NSDictionary *badgeDescriptors; // @synthesize badgeDescriptors=_badgeDescriptors;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) _Bool cachesImages; // @synthesize cachesImages=_cachesImages;
- (id)_badgeDescriptorForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;	// IMP=0x000000000000b88a
- (id)_badgeDescriptorForContentRating:(id)arg1;	// IMP=0x000000000000b7f2
- (_Bool)isTemplatedBadgeForContentRating:(id)arg1;	// IMP=0x000000000000ac17
- (id)badgeForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2 drawUnknownRatingBadge:(_Bool)arg3;	// IMP=0x000000000000aa2f
- (id)badgeForContentRating:(id)arg1 drawUnknownRatingBadge:(_Bool)arg2;	// IMP=0x000000000000a98d

@end

