//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface SALogSignatureWithABC
{
}

+ (id)logSignatureWithABCWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f276
+ (id)logSignatureWithABC;	// IMP=0x000000000000f264
- (_Bool)requiresResponse;	// IMP=0x000000000000f2c4
@property(copy, nonatomic) NSDictionary *subTypeContext;
@property(copy, nonatomic) NSString *subType;
- (id)encodedClassName;	// IMP=0x000000000000f257
- (id)groupIdentifier;	// IMP=0x000000000000f243

@end

