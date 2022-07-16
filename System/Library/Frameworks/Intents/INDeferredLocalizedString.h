//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSArray, NSURL;

@interface INDeferredLocalizedString : NSString
{
    NSString *_formatKey;	// 8 = 0x8
    NSString *_table;	// 16 = 0x10
    NSArray *_arguments;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSURL *_bundleURL;	// 40 = 0x28
    NSString *_cachedLocalization;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000100e20
+ (void)initialize;	// IMP=0x0000000000100ddc
- (void).cxx_destruct;	// IMP=0x00000000000fff57
@property(readonly, copy, nonatomic) NSString *_cachedLocalization; // @synthesize _cachedLocalization;
@property(readonly, copy, nonatomic) NSURL *_bundleURL; // @synthesize _bundleURL;
@property(readonly, copy, nonatomic) NSString *_bundleIdentifier; // @synthesize _bundleIdentifier;
@property(readonly, copy, nonatomic) NSArray *_arguments; // @synthesize _arguments;
@property(readonly, copy, nonatomic) NSString *_table; // @synthesize _table;
@property(readonly, copy, nonatomic) NSString *_formatKey; // @synthesize _formatKey;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ffee6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ffc82
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ff904
- (Class)classForKeyedArchiver;	// IMP=0x00000000000ff8f3
- (Class)classForCoder;	// IMP=0x00000000000ff8e2
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000ff8c5
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000ff8a8
- (unsigned long long)length;	// IMP=0x00000000000ff88b
- (id)description;	// IMP=0x00000000000ff876
- (id)localizeForLanguage:(id)arg1;	// IMP=0x00000000000ff770
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundleIdentifier:(id)arg3 bundleURL:(id)arg4 arguments:(id)arg5;	// IMP=0x00000000000ff515
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3 arguments:(struct __va_list_tag [1])arg4;	// IMP=0x00000000000ff20d
- (id)_intents_encodeForProto;	// IMP=0x00000000002e87b8

@end

