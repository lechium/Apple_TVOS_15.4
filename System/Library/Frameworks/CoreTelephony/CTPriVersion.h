//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_majorVersion;	// 8 = 0x8
    NSNumber *_minorVersion;	// 16 = 0x10
    NSNumber *_releaseVersion;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d6f3
- (void).cxx_destruct;	// IMP=0x000000000000d74c
@property(retain, nonatomic) NSNumber *releaseVersion; // @synthesize releaseVersion=_releaseVersion;
@property(retain, nonatomic) NSNumber *minorVersion; // @synthesize minorVersion=_minorVersion;
@property(retain, nonatomic) NSNumber *majorVersion; // @synthesize majorVersion=_majorVersion;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d5e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d500
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d3cb
- (id)description;	// IMP=0x000000000000d2aa

@end
