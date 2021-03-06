//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosFormats/PFStoryRecipeMutableSongAsset-Protocol.h>

@class NSString, NSURL;

@interface PFStoryConcreteRecipeSongAsset <PFStoryRecipeMutableSongAsset>
{
    long long _category;	// 8 = 0x8
    long long _subcategory;	// 16 = 0x10
    NSString *_songID;	// 24 = 0x18
    NSString *_catalog;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_subtitle;	// 48 = 0x30
    NSString *_colorGradeCategory;	// 56 = 0x38
}

+ (_Bool)decomposeURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000682e0
+ (id)URLWithCatalog:(id)arg1 songID:(id)arg2;	// IMP=0x000000000006822b
- (void).cxx_destruct;	// IMP=0x00000000000681c7
@property(retain, nonatomic) NSString *colorGradeCategory; // @synthesize colorGradeCategory=_colorGradeCategory;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *catalog; // @synthesize catalog=_catalog;
@property(readonly, nonatomic) NSString *songID; // @synthesize songID=_songID;
@property(readonly, nonatomic) long long subcategory; // @synthesize subcategory=_subcategory;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (id)description;	// IMP=0x0000000000067f42
- (_Bool)isEqualToAsset:(id)arg1;	// IMP=0x0000000000067c61
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2 url:(id)arg3;	// IMP=0x0000000000067c3f
- (id)initWithIdentifier:(id)arg1 category:(long long)arg2 subcategory:(long long)arg3 catalog:(id)arg4 songID:(id)arg5 title:(id)arg6 subtitle:(id)arg7;	// IMP=0x0000000000067a80

// Remaining properties
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long kind;
@property(readonly, nonatomic) NSURL *url;

@end

