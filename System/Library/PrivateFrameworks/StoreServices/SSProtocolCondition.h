//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSProtocolCondition : NSObject
{
    long long _operator;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)newConditionWithDictionary:(id)arg1;	// IMP=0x0000000000094d38
- (_Bool)evaluateWithContext:(id)arg1;	// IMP=0x0000000000095022
- (void)dealloc;	// IMP=0x0000000000094fe7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000094f16

@end

