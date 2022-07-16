//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NETrie : NSObject
{
    _Bool _reverse;	// 8 = 0x8
    _Bool _partialSearchAllowed;	// 9 = 0x9
    BOOL _partialSearchTerminator;	// 10 = 0xa
    struct ne_trie _trie;	// 16 = 0x10
}

@property BOOL partialSearchTerminator; // @synthesize partialSearchTerminator=_partialSearchTerminator;
@property _Bool partialSearchAllowed; // @synthesize partialSearchAllowed=_partialSearchAllowed;
@property _Bool reverse; // @synthesize reverse=_reverse;
@property struct ne_trie trie; // @synthesize trie=_trie;
- (_Bool)searchWithString:(id)arg1;	// IMP=0x0000000000002179
- (_Bool)search:(const char *)arg1 length:(int)arg2;	// IMP=0x0000000000002171
- (void)dealloc;	// IMP=0x0000000000002096
- (id)initWithDomains:(id)arg1 reverse:(_Bool)arg2 partialSearchAllowed:(_Bool)arg3 partialSearchTerminator:(BOOL)arg4;	// IMP=0x0000000000001f98

@end

