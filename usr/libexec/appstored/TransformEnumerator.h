//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@interface TransformEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;	// 8 = 0x8
    CDUnknownBlockType _transform;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000024b115
- (id)nextObject;	// IMP=0x001000000024afd8
- (id)initWithEnumerator:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x001000000024af23

@end

