//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIObjectReferenceCounter : NSObject
{
    NSCountedSet *_objectReferences;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b40ff8
- (id)allObjects;	// IMP=0x0000000000b40fe2
- (void)decrementReferenceForObject:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000b40d0d
- (void)incrementReferenceForObject:(id)arg1;	// IMP=0x0000000000b40b3f
- (id)init;	// IMP=0x0000000000b40b10

@end
