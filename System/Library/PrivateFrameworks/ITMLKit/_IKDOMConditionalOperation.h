//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKDataBindingPropertyPath, NSString;

__attribute__((visibility("hidden")))
@interface _IKDOMConditionalOperation : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    IKDataBindingPropertyPath *_propertyPath;	// 16 = 0x10
    NSString *_literal;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000010a7e
@property(copy, nonatomic) NSString *literal; // @synthesize literal=_literal;
@property(retain, nonatomic) IKDataBindingPropertyPath *propertyPath; // @synthesize propertyPath=_propertyPath;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)passesForDataItem:(id)arg1;	// IMP=0x0000000000010754

@end

