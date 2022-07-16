//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TVLHeaderElement;

@interface TVLScrollerElement
{
    _Bool _fixedHeader;	// 8 = 0x8
    TVLHeaderElement *_header;	// 16 = 0x10
    NSArray *_scrollerItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007f69d
@property(retain, nonatomic) NSArray *scrollerItems; // @synthesize scrollerItems=_scrollerItems;
@property(nonatomic) _Bool fixedHeader; // @synthesize fixedHeader=_fixedHeader;
@property(retain, nonatomic) TVLHeaderElement *header; // @synthesize header=_header;
- (id)description;	// IMP=0x000000000007f59b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f464
- (id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2;	// IMP=0x000000000007f092

@end

