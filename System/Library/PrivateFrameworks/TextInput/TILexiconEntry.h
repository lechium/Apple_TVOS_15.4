//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_userInput;	// 8 = 0x8
    NSString *_documentText;	// 16 = 0x10
}

+ (id)entryWithDocumentText:(id)arg1 userInput:(id)arg2;	// IMP=0x00000000000120a2
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001209a
- (void).cxx_destruct;	// IMP=0x0000000000012072
@property(readonly, nonatomic) NSString *documentText; // @synthesize documentText=_documentText;
@property(readonly, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011ffb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011f21
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011d1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011cab

@end

