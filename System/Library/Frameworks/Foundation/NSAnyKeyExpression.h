//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSAnyKeyExpression
{
}

+ (_Bool)_allowsEvaluation;	// IMP=0x0000000000006a25
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006a1d
+ (id)defaultInstance;	// IMP=0x00000000000069dd
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000069d0
+ (void)initialize;	// IMP=0x000000000000699f
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000006bdc
- (id)predicateFormat;	// IMP=0x0000000000006bcf
- (id)init;	// IMP=0x0000000000006bc6
- (id)_initPrivate;	// IMP=0x0000000000006b6f
- (unsigned long long)hash;	// IMP=0x0000000000006b64
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006b3c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006b33
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006acf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006a2d
- (id)autorelease;	// IMP=0x0000000000006a14
- (_Bool)_tryRetain;	// IMP=0x0000000000006a0c
- (_Bool)_isDeallocating;	// IMP=0x0000000000006a04
- (oneway void)release;	// IMP=0x00000000000069fe
- (unsigned long long)retainCount;	// IMP=0x00000000000069f3
- (id)retain;	// IMP=0x00000000000069ea

@end

