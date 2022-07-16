//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCMediaPlatform, NSArray;

@interface ASCTrailers : NSObject
{
    NSArray *_videos;	// 8 = 0x8
    ASCMediaPlatform *_mediaPlatform;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000002ca3
- (void).cxx_destruct;	// IMP=0x002000000000325b
@property(readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform; // @synthesize mediaPlatform=_mediaPlatform;
@property(readonly, copy, nonatomic) NSArray *videos; // @synthesize videos=_videos;
- (id)description;	// IMP=0x001000000000316b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002fd8
- (unsigned long long)hash;	// IMP=0x0010000000002f26
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000002f1b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000002e6d
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000002cab
- (id)initWithVideos:(id)arg1 mediaPlatform:(id)arg2;	// IMP=0x0010000000002bea

@end

