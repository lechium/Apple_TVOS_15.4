//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSInflectionRule : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018dda3
+ (id)automaticRule;	// IMP=0x000000000018dcd3
+ (_Bool)canInflectLanguage:(id)arg1;	// IMP=0x000000000018e0ff
+ (_Bool)canInflectPreferredLocalization;	// IMP=0x000000000018e0a3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018dd73
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018dd4f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018dd28
- (id)_init;	// IMP=0x000000000018dc81

@end

