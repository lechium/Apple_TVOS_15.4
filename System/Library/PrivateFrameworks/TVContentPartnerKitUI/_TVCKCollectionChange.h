//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface _TVCKCollectionChange : NSObject
{
    unsigned long long _changeKind;	// 8 = 0x8
    NSIndexSet *_sourceIndexes;	// 16 = 0x10
    NSIndexSet *_destinationIndexes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000016606
@property(readonly, copy, nonatomic) NSIndexSet *destinationIndexes; // @synthesize destinationIndexes=_destinationIndexes;
@property(readonly, copy, nonatomic) NSIndexSet *sourceIndexes; // @synthesize sourceIndexes=_sourceIndexes;
@property(readonly, nonatomic) unsigned long long changeKind; // @synthesize changeKind=_changeKind;
- (id)description;	// IMP=0x00000000000164b1
- (id)init;	// IMP=0x0000000000016498
- (id)initWithChangeKind:(unsigned long long)arg1 sourceIndexes:(id)arg2 destinationIndexes:(id)arg3;	// IMP=0x00000000000163d8

@end

