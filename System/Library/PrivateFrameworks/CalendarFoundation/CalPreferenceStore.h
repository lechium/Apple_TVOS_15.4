//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CalPreferenceStore : NSObject
{
    NSMutableDictionary *_keys;	// 8 = 0x8
    NSMutableDictionary *_values;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c3eb
- (void)setValue:(id)arg1 forDomain:(id)arg2 key:(id)arg3;	// IMP=0x000000000001c293
- (_Bool)getValue:(id *)arg1 forDomain:(id)arg2 key:(id)arg3;	// IMP=0x000000000001c17e
- (id)init;	// IMP=0x000000000001c109

@end

