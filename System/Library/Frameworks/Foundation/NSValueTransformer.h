//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSValueTransformer : NSObject
{
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0000000000160e98
+ (Class)transformedValueClass;	// IMP=0x0000000000160e90
+ (id)valueTransformerNames;	// IMP=0x0000000000160e21
+ (id)valueTransformerForName:(id)arg1;	// IMP=0x0000000000160d5a
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;	// IMP=0x0000000000160a35
- (id)init;	// IMP=0x0000000000160f68
- (id)_initForFoundationOnly;	// IMP=0x0000000000160f16
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x0000000000160ea9
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000160ea0

@end

