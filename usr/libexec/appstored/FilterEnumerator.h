//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSPredicate;

@interface FilterEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000024b267
- (id)nextObject;	// IMP=0x001000000024b1e8
- (id)initWithEnumerator:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000024b146

@end

