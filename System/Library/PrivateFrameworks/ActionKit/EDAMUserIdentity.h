//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMUserIdentity
{
    NSNumber *_type;	// 8 = 0x8
    NSString *_stringIdentifier;	// 16 = 0x10
    NSNumber *_longIdentifier;	// 24 = 0x18
}

+ (id)structFields;	// IMP=0x000000000022af69
+ (id)structName;	// IMP=0x000000000022af5c
- (void).cxx_destruct;	// IMP=0x000000000022b12b
@property(retain, nonatomic) NSNumber *longIdentifier; // @synthesize longIdentifier=_longIdentifier;
@property(retain, nonatomic) NSString *stringIdentifier; // @synthesize stringIdentifier=_stringIdentifier;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;

@end
