//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, REScriptToken;

@interface REScriptASTNode : NSObject
{
    REScriptToken *_token;	// 8 = 0x8
}

+ (id)parseBuffer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a7b09
- (void).cxx_destruct;	// IMP=0x00000000000a7b9f
@property(readonly, nonatomic) REScriptToken *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSSet *dependencies;
- (id)initWithToken:(id)arg1;	// IMP=0x00000000000a7b11

@end

