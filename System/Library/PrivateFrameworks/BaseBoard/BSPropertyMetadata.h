//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BSPropertyMetadata : NSObject
{
    BOOL _type;	// 8 = 0x8
    NSString *_typeString;	// 16 = 0x10
    Class _classType;	// 24 = 0x18
    NSString *_getterName;	// 32 = 0x20
    NSString *_setterName;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_defaultKey;	// 56 = 0x38
    id _defaultValue;	// 64 = 0x40
    unsigned long long _options;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000006a85b
- (id)description;	// IMP=0x000000000006a768

@end

