//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface TVLShelfSectionElement
{
    NSString *_title;	// 8 = 0x8
    NSArray *_shelfItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000972c8
@property(retain, nonatomic) NSArray *shelfItems; // @synthesize shelfItems=_shelfItems;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x00000000000971e9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000970d3
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;	// IMP=0x0000000000096dfb

@end

