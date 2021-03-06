//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>
#import <PhotosUICore/PXFilterState-Protocol.h>

@class NSArray, NSString;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState>
{
    _Bool _favorite;	// 8 = 0x8
    _Bool _edited;	// 9 = 0x9
    _Bool _image;	// 10 = 0xa
    _Bool _video;	// 11 = 0xb
    long long _assetSource;	// 16 = 0x10
    NSArray *_keywords;	// 24 = 0x18
    NSArray *_uuids;	// 32 = 0x20
    long long _libraryType;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016131f
@property(nonatomic) long long libraryType; // @synthesize libraryType=_libraryType;
@property(copy, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(nonatomic) _Bool video; // @synthesize video=_video;
@property(nonatomic) _Bool image; // @synthesize image=_image;
@property(nonatomic) _Bool edited; // @synthesize edited=_edited;
@property(nonatomic) _Bool favorite; // @synthesize favorite=_favorite;
@property(readonly, nonatomic) _Bool isFiltering;
@property(readonly, nonatomic) NSString *localizedFooterDescription;
@property(readonly, nonatomic) NSString *localizedDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001610e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000160e94
- (unsigned long long)hash;	// IMP=0x0000000000160d83
- (id)description;	// IMP=0x0000000000160aa8
- (_Bool)isContentFilterActive:(long long)arg1;	// IMP=0x00000000001609d4
- (id)predicateForUseCase:(unsigned long long)arg1;	// IMP=0x000000000016048f
@property(readonly, nonatomic) NSString *localizedFooterDescriptionForFilters;
@property(readonly, nonatomic) NSString *localizedDescriptionForFilters;
- (id)initWithLibraryType:(long long)arg1;	// IMP=0x000000000015ff32
@property(readonly, nonatomic) _Bool hasRules;
@property(readonly, nonatomic) long long ruleCount;

@end

