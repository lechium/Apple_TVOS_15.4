//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreFoundation/NSCoding-Protocol.h>
#import <CoreFoundation/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface __NSPlaceholderFileSecurity <NSCopying, NSCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015b02e
+ (id)immutablePlaceholder;	// IMP=0x000000000015aaf7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015b031
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015afae
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015ab65
- (void)dealloc;	// IMP=0x000000000015ab64
- (unsigned long long)retainCount;	// IMP=0x000000000015ab5c
- (oneway void)release;	// IMP=0x000000000015ab5b
- (id)retain;	// IMP=0x000000000015ab57
- (id)init;	// IMP=0x000000000015ab22
- (id)initWithFileSec:(struct _filesec *)arg1;	// IMP=0x000000000015aaff

@end

