//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TVLTableElement
{
    NSArray *_columnDefinitions;	// 8 = 0x8
    NSArray *_rows;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d2438
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(retain, nonatomic) NSArray *columnDefinitions; // @synthesize columnDefinitions=_columnDefinitions;
- (id)description;	// IMP=0x00000000000d2361
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d224b
- (id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2;	// IMP=0x00000000000d1e07

@end

