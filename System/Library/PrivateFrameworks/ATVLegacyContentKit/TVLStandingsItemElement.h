//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVLImageElement, TVLTableElement;

@interface TVLStandingsItemElement
{
    NSString *_title;	// 8 = 0x8
    TVLImageElement *_backgroundImage;	// 16 = 0x10
    TVLTableElement *_table;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006d92d
@property(retain, nonatomic) TVLTableElement *table; // @synthesize table=_table;
@property(retain, nonatomic) TVLImageElement *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000000006d7ed
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d663
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;	// IMP=0x000000000006d4a4

@end

