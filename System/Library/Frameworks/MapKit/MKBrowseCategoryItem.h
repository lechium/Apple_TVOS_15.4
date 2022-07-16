//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface MKBrowseCategoryItem : NSObject
{
    NSString *_title;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    GEOSearchCategory *_searchCategory;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f86b7
@property(readonly, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)imageWithSearchCategory:(id)arg1 nightMode:(_Bool)arg2;	// IMP=0x00000000001f85dd
- (id)initWithCategory:(id)arg1 nightMode:(_Bool)arg2;	// IMP=0x00000000001f84f7

@end

