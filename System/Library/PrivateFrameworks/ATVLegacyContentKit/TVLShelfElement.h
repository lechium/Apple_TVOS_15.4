//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface TVLShelfElement
{
    _Bool _center;	// 8 = 0x8
    int _columnCount;	// 12 = 0xc
    NSArray *_sections;	// 16 = 0x10
    NSString *_onItemFocused;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e57e3
@property(copy, nonatomic) NSString *onItemFocused; // @synthesize onItemFocused=_onItemFocused;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool center; // @synthesize center=_center;
@property(nonatomic) int columnCount; // @synthesize columnCount=_columnCount;
- (id)description;	// IMP=0x00000000000e56d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e555e
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;	// IMP=0x00000000000e505e

@end

