//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@class REImage;

@interface REAccessoryImage : NSObject <NSCopying, NSCoding>
{
    REImage *_image;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b963
@property(copy, nonatomic) REImage *image; // @synthesize image=_image;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b8bb
- (unsigned long long)hash;	// IMP=0x000000000000b8a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b841
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b81e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b79c

@end
