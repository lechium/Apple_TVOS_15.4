//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIThreadSafeNode : NSObject
{
    DOMNode *_node;	// 8 = 0x8
}

+ (id)threadSafeNodeWithNode:(id)arg1;	// IMP=0x00000000010bc386
- (void).cxx_destruct;	// IMP=0x00000000010bc755
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000010bc6eb
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000010bc65a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000010bc5fc
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000010bc58a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010bc575
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00000000010bc522
- (id)description;	// IMP=0x00000000010bc461
- (id)initWithNode:(id)arg1;	// IMP=0x00000000010bc3f6
- (id)_realNode;	// IMP=0x00000000010bc76e

@end

