//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNHeapObject : NSObject
{
    NSString *_className;	// 8 = 0x8
    NSString *_binary;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    unsigned long long _bytes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000069e77
@property(nonatomic) unsigned long long bytes; // @synthesize bytes=_bytes;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *binary; // @synthesize binary=_binary;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
- (id)classAndBinaryKey;	// IMP=0x0000000000069cca
- (id)description;	// IMP=0x0000000000069bc8

@end
