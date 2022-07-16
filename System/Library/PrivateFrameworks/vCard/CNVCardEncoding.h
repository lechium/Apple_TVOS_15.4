//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNVCardEncoding : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _stringEncoding;	// 16 = 0x10
}

+ (id)utf8Encoding;	// IMP=0x000000000002442d
+ (id)macRomanEncoding;	// IMP=0x000000000002438c
+ (id)isoLatin1Encoding;	// IMP=0x00000000000242eb
+ (id)asciiEncoding;	// IMP=0x000000000002424a
+ (id)encodingWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;	// IMP=0x00000000000241f2
+ (id)preferredEncodingInUserDefaults;	// IMP=0x0000000000024131
+ (id)encodingsFromUserDefaults;	// IMP=0x00000000000240ae
+ (id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2;	// IMP=0x0000000000023f02
+ (id)makeStandardEncodings;	// IMP=0x0000000000023df5
+ (id)standardEncodings;	// IMP=0x0000000000023d3a
- (void).cxx_destruct;	// IMP=0x000000000002456c
@property(readonly) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;	// IMP=0x00000000000244ce

@end
