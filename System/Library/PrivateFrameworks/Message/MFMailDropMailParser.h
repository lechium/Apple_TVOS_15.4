//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MFMailDropMailParser : NSObject
{
}

+ (void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2;	// IMP=0x00000000000c14cd
+ (void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2;	// IMP=0x00000000000c12d5
+ (void)parseURL:(id)arg1 intoMetadata:(id)arg2;	// IMP=0x00000000000c11e6
+ (_Bool)_domainIsWhitelisted:(id)arg1;	// IMP=0x00000000000c1022
+ (id)parseHeaderValue:(id)arg1 forField:(id)arg2;	// IMP=0x00000000000c0ade
+ (id)parseExpiration:(double)arg1;	// IMP=0x00000000000c0a8b
+ (id)_parseURLQuery:(id)arg1;	// IMP=0x00000000000c087d

@end
