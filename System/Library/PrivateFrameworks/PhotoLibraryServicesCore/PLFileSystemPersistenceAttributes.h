//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject
{
    NSDictionary *_attributes;	// 8 = 0x8
    NSDictionary *_unknownAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007df87
- (id)description;	// IMP=0x000000000007d065
- (id)stringForKey:(id)arg1;	// IMP=0x000000000007cfb0
- (_Bool)getUInt64:(unsigned long long *)arg1 forKey:(id)arg2;	// IMP=0x000000000007cf24
- (_Bool)getInt32:(int *)arg1 forKey:(id)arg2;	// IMP=0x000000000007cea0
- (_Bool)getUInt16:(unsigned short *)arg1 forKey:(id)arg2;	// IMP=0x000000000007ce1a
- (id)UUIDStringForKey:(id)arg1;	// IMP=0x000000000007cdcf
- (id)dataForKey:(id)arg1;	// IMP=0x000000000007cdb9
- (void)dealloc;	// IMP=0x000000000007cd76
- (id)initWithAttributes:(id)arg1 unknownAttributes:(id)arg2;	// IMP=0x000000000007ccdd

@end
