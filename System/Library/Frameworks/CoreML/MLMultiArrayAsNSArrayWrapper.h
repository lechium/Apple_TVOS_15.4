//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray
{
    MLMultiArray *_multiArray;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000031be1
@property(retain) MLMultiArray *multiArray; // @synthesize multiArray=_multiArray;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000031b9d
- (unsigned long long)count;	// IMP=0x0000000000031b80
- (id)initWrappingMultiArray:(id)arg1;	// IMP=0x0000000000031afe

@end

