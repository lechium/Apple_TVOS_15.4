//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCoding-Protocol.h>
#import <RelevanceEngine/NSCopying-Protocol.h>

@class UIColor;

@interface REAccessoryDescription : NSObject <NSCopying, NSCoding>
{
    UIColor *_backgroundColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000b78c
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000b6e4
- (unsigned long long)hash;	// IMP=0x000000000000b6ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000b689
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b666
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b5e4

@end

