//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIWeakReference : NSObject <NSCopying>
{
    id _object;	// 8 = 0x8
}

+ (id)weakReferenceWrappingObject:(id)arg1;	// IMP=0x0000000000f11ddd
- (void).cxx_destruct;	// IMP=0x0000000000f11e5a
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f11d8e
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000f11d2a

@end

