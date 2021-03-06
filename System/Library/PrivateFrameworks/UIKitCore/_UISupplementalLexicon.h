//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _UISupplementalLexicon : NSObject
{
    id _internal;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    unsigned long long _searchPrefixes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000f3109f
@property(readonly, nonatomic) unsigned long long searchPrefixes; // @synthesize searchPrefixes=_searchPrefixes;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)description;	// IMP=0x0000000000f30db3
- (void)dealloc;	// IMP=0x0000000000f30d3e
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000f30d2a
- (id)initWithItems:(id)arg1 searchPrefixes:(unsigned long long)arg2;	// IMP=0x0000000000f30a7f

@end

