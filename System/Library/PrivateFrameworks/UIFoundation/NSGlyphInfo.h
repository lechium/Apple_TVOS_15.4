//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSGlyphInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_baseString;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006ac9d
+ (void)initialize;	// IMP=0x000000000006a8ea
+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;	// IMP=0x000000000006a8be
+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;	// IMP=0x000000000006a863
+ (id)glyphInfoWithCGGlyph:(unsigned short)arg1 forFont:(id)arg2 baseString:(id)arg3;	// IMP=0x000000000006a82a
+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;	// IMP=0x000000000006a793
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006aca5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006aa65
- (Class)classForKeyedArchiver;	// IMP=0x000000000006aa58
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006a9f6
- (id)baseString;	// IMP=0x000000000006a9ec
- (unsigned short)glyphID;	// IMP=0x000000000006a9e4
- (unsigned long long)characterCollection;	// IMP=0x000000000006a9dc
- (unsigned long long)characterIdentifier;	// IMP=0x000000000006a9d4
- (id)glyphName;	// IMP=0x000000000006a9cc
- (id)_baseString;	// IMP=0x000000000006a9c2
- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;	// IMP=0x000000000006a9ba
- (void)dealloc;	// IMP=0x000000000006a97f
- (id)initWithBaseString:(id)arg1;	// IMP=0x000000000006a92d

@end

