//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _PFAbstractString : NSString
{
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0000000000069e7f
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069e58
+ (id)alloc;	// IMP=0x0000000000069e4c
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0000000000069e44
- (id)description;	// IMP=0x0000000000069f70
- (unsigned long long)smallestEncoding;	// IMP=0x0000000000069f65
- (unsigned long long)fastestEncoding;	// IMP=0x0000000000069f5a
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x0000000000069f08
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000069f00
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x0000000000069eee
- (const char *)cString;	// IMP=0x0000000000069edc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069e90
- (Class)classForCoder;	// IMP=0x0000000000069e6e
- (void)dealloc;	// IMP=0x0000000000069e64

@end

