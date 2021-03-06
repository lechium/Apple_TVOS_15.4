//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVCKStoreEnvironment : NSObject
{
    NSString *_environment;	// 8 = 0x8
    NSString *_build;	// 16 = 0x10
    NSString *_branch;	// 24 = 0x18
    NSString *_stringData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000016a50
@property(retain) NSString *stringData; // @synthesize stringData=_stringData;
@property(retain) NSString *branch; // @synthesize branch=_branch;
@property(retain) NSString *build; // @synthesize build=_build;
@property(retain) NSString *environment; // @synthesize environment=_environment;
- (id)description;	// IMP=0x00000000000169b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016804
@property(readonly) _Bool isProduction;
- (id)initWithStorePage:(id)arg1;	// IMP=0x0000000000016771
- (id)initWithEnvironmentDictionary:(id)arg1;	// IMP=0x000000000001662e

@end

