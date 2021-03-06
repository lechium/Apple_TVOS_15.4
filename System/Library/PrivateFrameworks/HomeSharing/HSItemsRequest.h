//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HSItemsRequest
{
    _Bool _shouldParseResponse;	// 8 = 0x8
    _Bool _includeHiddenItems;	// 9 = 0x9
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;	// IMP=0x00000000000025af
+ (id)requestWithDatabaseID:(unsigned int)arg1;	// IMP=0x0000000000002582
@property(nonatomic) _Bool includeHiddenItems; // @synthesize includeHiddenItems=_includeHiddenItems;
@property(nonatomic) _Bool shouldParseResponse; // @synthesize shouldParseResponse=_shouldParseResponse;
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x000000000000243c
- (double)timeoutInterval;	// IMP=0x000000000000242e
- (id)initWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;	// IMP=0x00000000000023c6
- (id)initWithDatabaseID:(unsigned int)arg1;	// IMP=0x0000000000002361
- (id)initWithAction:(id)arg1;	// IMP=0x0000000000002317

@end

