//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDPLocalizedStringBuilder : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSString *_table;	// 16 = 0x10
}

+ (id)builderForKey:(id)arg1 inTable:(id)arg2;	// IMP=0x000000000000e341
+ (id)builderForKey:(id)arg1;	// IMP=0x000000000000e305
- (void).cxx_destruct;	// IMP=0x000000000000e4e8
- (id)currentKey;	// IMP=0x000000000000e4ca
- (id)localizedString;	// IMP=0x000000000000e4b5
- (id)addSecretType:(unsigned long long)arg1;	// IMP=0x000000000000e465
- (id)addUnqualifiedDeviceClass:(id)arg1;	// IMP=0x000000000000e400
- (id)addDeviceClass:(id)arg1;	// IMP=0x000000000000e39b

@end

