//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDefaults : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0000000000001cf9
- (void)setValue:(id)arg1 forDomain:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000001d95
- (id)getValueFromDomain:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000001d85
- (void)setBool:(_Bool)arg1 forDomain:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000001d61
- (_Bool)getBoolFromDomain:(id)arg1 forKey:(id)arg2 defaultValue:(_Bool)arg3;	// IMP=0x0000000000001d4e
- (_Bool)getBoolFromDomain:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000001d3e

@end
