//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, SSItemArtworkImage;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
}

+ (id)stringForRatingSystem:(long long)arg1;	// IMP=0x00000000000af743
+ (long long)ratingSystemFromString:(id)arg1;	// IMP=0x00000000000af6e1
- (void)_setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000af96f
- (void)_setValueCopy:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000af923
- (_Bool)_isRatingSystemForTV:(long long)arg1;	// IMP=0x00000000000af912
- (_Bool)_isRatingSystemForMusic:(long long)arg1;	// IMP=0x00000000000af905
- (_Bool)_isRatingSystemForMovies:(long long)arg1;	// IMP=0x00000000000af8e7
- (_Bool)_isRatingSystemForApps:(long long)arg1;	// IMP=0x00000000000af8d6
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000af84e
- (id)copyXPCEncoding;	// IMP=0x00000000000af81b
@property(readonly, nonatomic) SSItemArtworkImage *ratingSystemLogo;
@property(readonly, nonatomic) NSDictionary *contentRatingDictionary;
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000af6ba
@property(nonatomic) _Bool shouldHideWhenRestricted;
@property(nonatomic) long long ratingSystem;
@property(copy, nonatomic) NSString *ratingLabel;
@property(copy, nonatomic) NSString *ratingDescription;
@property(nonatomic) long long rank;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af28a
- (void)dealloc;	// IMP=0x00000000000af24f
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000af1f8
- (id)init;	// IMP=0x00000000000af1ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
