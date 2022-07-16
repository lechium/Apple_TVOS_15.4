//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface TVLPhotoBatchElement
{
    NSString *_title;	// 8 = 0x8
    NSString *_boldTitle;	// 16 = 0x10
    NSString *_dimmedTitle;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001803c
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *dimmedTitle; // @synthesize dimmedTitle=_dimmedTitle;
@property(retain, nonatomic) NSString *boldTitle; // @synthesize boldTitle=_boldTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017dd1
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;	// IMP=0x0000000000017b3d

@end
