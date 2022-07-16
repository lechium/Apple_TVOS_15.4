//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKDSObjCType : NSObject
{
    NSString *_encoding;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    long long _code;	// 32 = 0x20
    unsigned long long _size;	// 40 = 0x28
    NSString *_className;	// 48 = 0x30
}

+ (id)typeForValue:(id)arg1;	// IMP=0x00000000000e28e9
+ (id)typeForEncoding:(const char *)arg1;	// IMP=0x00000000000e1bb0
- (void).cxx_destruct;	// IMP=0x00000000000e293f
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) long long code; // @synthesize code=_code;

@end

