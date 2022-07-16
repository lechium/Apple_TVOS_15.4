//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface LPIconMetadata : NSObject <NSSecureCoding>
{
    unsigned int _version;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSString *_accessibilityText;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000cca0
- (void).cxx_destruct;	// IMP=0x000000000000cf36
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
- (unsigned long long)hash;	// IMP=0x000000000000cee5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ce04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000cd79
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000cca8
- (id)_initWithURL:(id)arg1;	// IMP=0x000000000000cc33
- (id)init;	// IMP=0x000000000000cbde

@end

