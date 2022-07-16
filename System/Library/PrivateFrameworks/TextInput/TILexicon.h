//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray;

@interface TILexicon : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_entries;	// 8 = 0x8
}

+ (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012444
+ (id)lexiconWithEntries:(id)arg1;	// IMP=0x0000000000012401
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000123f9
- (void).cxx_destruct;	// IMP=0x00000000000123e9
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000123b5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000122cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001219d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012149

@end
