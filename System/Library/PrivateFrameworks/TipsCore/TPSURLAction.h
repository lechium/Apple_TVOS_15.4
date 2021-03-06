//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TPSURLAction <NSCopying, NSSecureCoding>
{
    NSString *_text;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013e1a
- (void).cxx_destruct;	// IMP=0x00000000000142c5
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)debugDescription;	// IMP=0x00000000000141a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001412c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001408d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000013f9e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013e22

@end

