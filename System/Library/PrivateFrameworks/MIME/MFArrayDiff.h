//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface MFArrayDiff : NSObject
{
    NSIndexSet *_commonIndexes;	// 8 = 0x8
    NSIndexSet *_addedIndexes;	// 16 = 0x10
    NSIndexSet *_removedIndexes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000006b31
@property(retain, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(retain, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
@property(retain, nonatomic) NSIndexSet *commonIndexes; // @synthesize commonIndexes=_commonIndexes;
- (id)debugDescription;	// IMP=0x00000000000069e0

@end

