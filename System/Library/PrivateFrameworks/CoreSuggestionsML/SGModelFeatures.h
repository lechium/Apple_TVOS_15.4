//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PMLSparseVector, SGModelSource;

@interface SGModelFeatures : NSObject
{
    SGModelSource *_source;	// 8 = 0x8
    PMLSparseVector *_vector;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b9d8
- (id)sessionDescriptor;	// IMP=0x000000000002b9c2
- (id)source;	// IMP=0x000000000002b9b4
- (id)vector;	// IMP=0x000000000002b9a6
- (id)initWithSource:(id)arg1 vector:(id)arg2;	// IMP=0x000000000002b81e

@end

