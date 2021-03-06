//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSFastEnumeration-Protocol.h>
#import <SpriteKit/NSMutableCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    struct _opaque_pthread_mutex_t _storageLock;	// 8 = 0x8
    NSMutableDictionary *_storage;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000026b41
- (id)description;	// IMP=0x0000000000026b2b
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000026ac0
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000026a22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026992
- (id)initWithNSMutableDictionary:(id)arg1;	// IMP=0x0000000000026911

@end

