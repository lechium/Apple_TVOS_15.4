//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@interface NSPointerFunctions : NSObject <NSCopying>
{
}

+ (id)pointerFunctionsWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000f6a12
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f69f5
@property _Bool usesWeakReadAndWriteBarriers;
@property _Bool usesStrongWriteBarrier;
@property CDUnknownFunctionPointerType relinquishFunction;
@property CDUnknownFunctionPointerType acquireFunction;
@property CDUnknownFunctionPointerType descriptionFunction;
@property CDUnknownFunctionPointerType isEqualFunction;
@property CDUnknownFunctionPointerType hashFunction;
@property CDUnknownFunctionPointerType sizeFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f6adc
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000f6a54

@end
