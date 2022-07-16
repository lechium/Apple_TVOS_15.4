//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>
#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface LPArtworkMetadata : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSDictionary *_colors;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d5aa
- (void).cxx_destruct;	// IMP=0x000000000000d945
@property(copy, nonatomic) NSDictionary *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
- (unsigned long long)hash;	// IMP=0x000000000000d8f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d813
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d744
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d6b9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d5b2
- (id)init;	// IMP=0x000000000000d555

@end
