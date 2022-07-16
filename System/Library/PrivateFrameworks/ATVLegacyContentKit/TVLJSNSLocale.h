//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/TVLJSObject-Protocol.h>

@class NSLocale;

@interface TVLJSNSLocale : NSObject <TVLJSObject>
{
    struct OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
}

+ (id)localeFromJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;	// IMP=0x000000000004a2af
+ (void)addClassDefinitionInContext:(struct OpaqueJSContext *)arg1;	// IMP=0x0000000000049d9d
- (void).cxx_destruct;	// IMP=0x000000000004a4e2
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)_jsFinalize;	// IMP=0x000000000004a4b9
- (struct OpaqueJSValue *)jsObjectRef;	// IMP=0x000000000004a4af
- (id)initWithLocale:(id)arg1 context:(struct OpaqueJSContext *)arg2;	// IMP=0x000000000004a3b5
- (id)init;	// IMP=0x000000000004a38a

@end
