//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

#import <CoreSuggestions/NSFastEnumeration-Protocol.h>

@class NSString;

@interface _SGNSStringEncodingEnumerator : NSEnumerator <NSFastEnumeration>
{
    NSString *_string;	// 8 = 0x8
    unsigned long long _encoding;	// 16 = 0x10
    struct _NSRange _remaining;	// 24 = 0x18
    _Bool _needsBOM;	// 40 = 0x28
    _Bool _needsNullTermination;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x0000000000045851
- (id)nextObject;	// IMP=0x000000000004569a
- (id)nullTerminationIfNeeded;	// IMP=0x000000000004566b
- (id)initWithString:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(_Bool)arg3;	// IMP=0x00000000000455a6
- (id)init;	// IMP=0x00000000000455a0

@end

