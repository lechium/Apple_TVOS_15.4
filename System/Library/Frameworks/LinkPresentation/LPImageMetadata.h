//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface LPImageMetadata : NSObject <NSSecureCoding>
{
    unsigned int _version;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_accessibilityText;	// 32 = 0x20
    struct CGSize _size;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d186
- (void).cxx_destruct;	// IMP=0x000000000000d522
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
- (unsigned long long)hash;	// IMP=0x000000000000d498
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d369
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d2ab
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d18e
- (id)_initWithDictionary:(id)arg1;	// IMP=0x000000000000cfb3
- (id)init;	// IMP=0x000000000000cf5e

@end

