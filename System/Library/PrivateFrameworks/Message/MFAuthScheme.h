//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MFAuthScheme : NSObject
{
}

+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000390e0
+ (id)schemeWithName:(id)arg1;	// IMP=0x00000000000390c7
+ (void)registerSchemeClass:(Class)arg1;	// IMP=0x000000000003905e
+ (id)knownSchemes;	// IMP=0x0000000000039045
+ (void)initialize;	// IMP=0x0000000000038fb8
- (id)humanReadableName;	// IMP=0x0000000000039405
- (id)name;	// IMP=0x00000000000393fd
- (_Bool)requiresPassword;	// IMP=0x00000000000393f5
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;	// IMP=0x0000000000039390
- (_Bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;	// IMP=0x000000000003934e
- (_Bool)hasEncryption;	// IMP=0x0000000000039346
- (unsigned int)defaultPortForAccount:(id)arg1;	// IMP=0x000000000003933e
- (Class)authenticatorClass;	// IMP=0x0000000000039336
- (Class)connectionClassForAccountClass:(Class)arg1;	// IMP=0x000000000003932e

@end

