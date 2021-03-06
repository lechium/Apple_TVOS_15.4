//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVLDividerElement, TVLGenericCollectionElement, TVLImageElement, TVLShelfElement, TVLTableElement;

@interface TVLItemDetailElement
{
    _Bool _verticallyCentered;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    TVLImageElement *_image;	// 32 = 0x20
    TVLImageElement *_defaultImage;	// 40 = 0x28
    TVLImageElement *_rightImage;	// 48 = 0x30
    NSString *_rating;	// 56 = 0x38
    NSString *_summary;	// 64 = 0x40
    NSString *_footnote;	// 72 = 0x48
    TVLTableElement *_table;	// 80 = 0x50
    TVLShelfElement *_centerShelf;	// 88 = 0x58
    TVLDividerElement *_divider;	// 96 = 0x60
    TVLShelfElement *_bottomShelf;	// 104 = 0x68
    TVLGenericCollectionElement *_moreInfo;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000ec0cd
@property(nonatomic) _Bool verticallyCentered; // @synthesize verticallyCentered=_verticallyCentered;
@property(retain, nonatomic) TVLGenericCollectionElement *moreInfo; // @synthesize moreInfo=_moreInfo;
@property(retain, nonatomic) TVLShelfElement *bottomShelf; // @synthesize bottomShelf=_bottomShelf;
@property(retain, nonatomic) TVLDividerElement *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) TVLShelfElement *centerShelf; // @synthesize centerShelf=_centerShelf;
@property(retain, nonatomic) TVLTableElement *table; // @synthesize table=_table;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) TVLImageElement *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) TVLImageElement *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) TVLImageElement *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x00000000000ebe0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000eb8c7
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;	// IMP=0x00000000000eaf15

@end

