//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCMediaPlatform, NSArray;

@interface ASCScreenshots : NSObject
{
    NSArray *_artwork;	// 8 = 0x8
    ASCMediaPlatform *_mediaPlatform;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001d9e7
- (void).cxx_destruct;	// IMP=0x002000000001df9f
@property(readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform; // @synthesize mediaPlatform=_mediaPlatform;
@property(readonly, copy, nonatomic) NSArray *artwork; // @synthesize artwork=_artwork;
- (id)description;	// IMP=0x001000000001deaf
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001dd1c
- (unsigned long long)hash;	// IMP=0x001000000001dc6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001dc5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001dbb1
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001d9ef
- (id)initWithArtwork:(id)arg1 mediaPlatform:(id)arg2;	// IMP=0x001000000001d92e

@end

