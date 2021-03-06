//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class SIRINLULegacyNLContext, SIRINLUNLContext;

@interface SIRINLUTurnContext : NSObject <NSSecureCoding>
{
    SIRINLUNLContext *_nlContext;	// 8 = 0x8
    SIRINLULegacyNLContext *_legacyNLContext;	// 16 = 0x10
    SIRINLUNLContext *_nlContextNullable;	// 24 = 0x18
    SIRINLULegacyNLContext *_legacyNLContextNullable;	// 32 = 0x20
}

+ (id)createEmptyPlaceholderLegacyNLContext;	// IMP=0x00000000000036e9
+ (id)createEmptyPlaceholderNLContext;	// IMP=0x000000000000362c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000032de
- (void).cxx_destruct;	// IMP=0x000000000000378c
@property(retain, nonatomic) SIRINLULegacyNLContext *legacyNLContextNullable; // @synthesize legacyNLContextNullable=_legacyNLContextNullable;
@property(retain, nonatomic) SIRINLUNLContext *nlContextNullable; // @synthesize nlContextNullable=_nlContextNullable;
@property(retain, nonatomic) SIRINLULegacyNLContext *legacyNLContext; // @synthesize legacyNLContext=_legacyNLContext;
@property(retain, nonatomic) SIRINLUNLContext *nlContext; // @synthesize nlContext=_nlContext;
- (id)description;	// IMP=0x0000000000003540
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003428
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000032e6
- (id)initWithLegacyNLContext:(id)arg1;	// IMP=0x0000000000003222
- (id)initWithNLContext:(id)arg1;	// IMP=0x000000000000316a
- (id)initWithNLContext:(id)arg1 legacyNLContext:(id)arg2;	// IMP=0x00000000000030b9
- (id)init;	// IMP=0x000000000000308a

@end

