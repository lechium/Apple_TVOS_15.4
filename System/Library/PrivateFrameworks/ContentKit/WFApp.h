//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFApp : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000af1ed
+ (id)findAppWithBundleIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x00000000000aed73
- (void).cxx_destruct;	// IMP=0x00000000000aed63
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000aece0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000aec40
- (unsigned long long)hash;	// IMP=0x00000000000aebfc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000aeae8
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000aea00

@end

