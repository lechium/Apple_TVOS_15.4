//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSVersion : NSObject
{
    struct _OSVersion _version;	// 8 = 0x8
}

+ (id)anyVersion;	// IMP=0x0040000000049bb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0020000000049f14
- (unsigned long long)hash;	// IMP=0x0010000000049ef7
- (id)description;	// IMP=0x0010000000049ee5
- (_Bool)isEqualToVersion:(id)arg1;	// IMP=0x0010000000049e9e
- (long long)compare:(id)arg1;	// IMP=0x0010000000049e3b
@property(readonly, copy) NSString *canonicalString;
@property(readonly, getter=isAnyVersion) _Bool anyVersion;
- (id)_initWithVersion:(struct _OSVersion)arg1;	// IMP=0x0010000000049d23
- (id)initWithString:(id)arg1;	// IMP=0x0010000000049c07

@end

