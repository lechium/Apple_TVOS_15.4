//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject
{
    NSArray *_algorithms;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002c466
- (_Bool)supportsAlgorithm:(struct __CFString *)arg1;	// IMP=0x000000000002c43f
- (_Bool)isAlgorithm:(struct __CFString *)arg1;	// IMP=0x000000000002c3e8
- (id)initWithAlgorithmsArray:(id)arg1;	// IMP=0x000000000002c336

@end

